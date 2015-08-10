#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class FileHandler{
public:
	struct KeyValuePair {
		std::string key;
		std::string value;
	};
	//Delete a file
	void DeleteFile(std::string fileName);
	//Clear contents of a file without deleting it
	void ClearFile(std::string fileName);
};