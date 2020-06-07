#include "../headers/FileHandler.hpp"

FileHandler::FileHandler(std::string fileName)
{ 
	this->_fileName = fileName;
}

FileHandler::~FileHandler()
{ }

std::string FileHandler::Read()
{
	std::string result;
	this->_file.open(_fileName, std::ios_base::in);
	std::getline(_file, result);
	_file.close();
	return result;
}

void FileHandler::Write(std::string input)
{
	this->_file.open(_fileName, std::ios_base::out);
	_file << input;
	_file.close();
}