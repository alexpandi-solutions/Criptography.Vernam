#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP

#include <string>
#include <fstream>

class FileHandler
{
public:
	FileHandler(std::string fileName);
	~FileHandler();

	std::string Read();
	void Write(std::string input);

private: 
	std::string _fileName;
	std::fstream _file;
};

#endif
