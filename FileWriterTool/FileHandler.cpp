#include "FileHandler.h"

void FileHandler::DeleteFile(std::string fileName){
	if (std::remove(fileName.c_str()) == 0){
		std::cout << "File " << fileName << " removed successfully" << std::endl;
	}
	else{
		std::cout << "Error removing file" << std::endl;
	}
}

void FileHandler::ClearFile(std::string fileName){
	std::ofstream file;
	file.open(fileName);
	file << "";
	file.close();
}