#pragma once
#include "FileHandler.h"

class FileReader : public FileHandler{
private:
public:
	std::string GetFileContent(std::string fileName);
};