#ifndef ALGORITHM_HPP
#define ALGORITHM_HPP

#include <string>
#include "FileHandler.hpp"

class Algorithm
{
public:

	Algorithm();
	~Algorithm();

	void Encrypt();
	void Decrypt();

private: 

	struct ResultModel
	{
		std::string Encrypted = "";
		std::string Decrypted = "";
	} Result;

	FileHandler* _ciphertextFile;
	FileHandler* _plaintextFile;
	FileHandler* _inputFile;
	FileHandler* _keyFile;
	
	char* _encryptedMessage;
	char* _decryptedMessage;
	
	std::string _plaintext;
	std::string _key;

	void ImportPlaintext();
	void ImportKey();
};

static std::shared_ptr<Algorithm> algorithmPtr = 
	std::make_shared<Algorithm>();

#endif