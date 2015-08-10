#include "FileReader.h"

std::string FileReader::GetFileContent(std::string fileName){
	std::string line;
	std::string fileContent;
	std::ifstream file(fileName);
	
	if (file.is_open()){
		while (std::getline(file, line)){
			fileContent += line;
		}
		std::cout << "Read from file successfully" << std::endl;
	}
	else{
		std::cout << "Unable to open file " << fileName << std::endl;
	}
	return fileContent;
}