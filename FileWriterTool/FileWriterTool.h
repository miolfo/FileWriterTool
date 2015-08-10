#pragma once

#include <string>
#include <assert.h>
#include <vector>

#include "FileWriter.h"
#include "FileReader.h"

class FileWriterTool : public FileHandler{
public:
	enum FILE_TYPE{ TEXT, KEY_VALUE, ANY};

private:
	FileWriter _fileWriter;
	FileReader _fileReader;
	std::string _fileName;
	FILE_TYPE _fileType;
public:
	
	FileWriterTool(std::string fileName);
	FileWriterTool(std::string fileName, FILE_TYPE fileType);
	void AppendFile(std::string data);
	void AppendFile(KeyValuePair keyValuePair);
	void AppendFile(std::vector<KeyValuePair> keyValuePairs);
	void DeleteFile();
	void ClearFile();
	std::string GetFileContent();
};
