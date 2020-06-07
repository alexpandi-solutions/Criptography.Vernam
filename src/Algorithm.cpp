#include "../headers/Algorithm.hpp"

Algorithm::Algorithm()
{ 
    _encryptedMessage = new char[4096];
    _decryptedMessage = new char[4096];

    std::string ciphertextFilePath = "files/results/ciphertext.txt";
    _ciphertextFile = new FileHandler(ciphertextFilePath);

    std::string plaintextFilePath = "files/results/plaintext.txt";
    _plaintextFile = new FileHandler(plaintextFilePath);

    std::string inputFilePath = "files/data/input.txt";
    _inputFile = new FileHandler(inputFilePath);

    std::string keyFilePath = "files/data/key.txt";
    _keyFile = new FileHandler(keyFilePath);

    this->ImportPlaintext();
    this->ImportKey();
}

Algorithm::~Algorithm()
{ }

void Algorithm::ImportPlaintext()
{
    this->_plaintext = this->_inputFile->Read();
}

void Algorithm::ImportKey()
{
    this->_key = this->_keyFile->Read();
}

void Algorithm::Encrypt()
{
    unsigned int keyIterator = 0;

    for (unsigned int messageIterator = 0; 
        messageIterator < this->_plaintext.size(); 
        messageIterator++)
    {
        this->_encryptedMessage[messageIterator] =
            this->_plaintext[messageIterator] ^ 
            this->_key[keyIterator];
        keyIterator += 1;

        if (keyIterator >= this->_key.size())
            keyIterator = 0;
    }

    char resultUnit;

    for (unsigned int messageIterator = 0; 
        messageIterator < 
        this->_plaintext.size();
        messageIterator++)
    {
        resultUnit = 
            this->_encryptedMessage[messageIterator] % 74 + 48;
        this->Result.Encrypted.push_back(resultUnit);
    }

    this->_ciphertextFile->Write(this->Result.Encrypted);
}

void Algorithm::Decrypt()
{
    unsigned int keyIterator = 0;

    for (unsigned int messageIterator = 0; 
        messageIterator < this->_plaintext.size();
        messageIterator++)
    {
        this->_decryptedMessage[messageIterator] =
            _encryptedMessage[messageIterator] ^ 
            _key[keyIterator];
        keyIterator += 1;

        if (keyIterator >= this->_key.size())
            keyIterator = 0;
    }

    for (unsigned int messageIterator = 0;
        messageIterator < this->_plaintext.size();
        messageIterator++)
        Result.Decrypted.push_back(
            this->_decryptedMessage[messageIterator]);

    this->_plaintextFile->Write(this->Result.Decrypted);
}