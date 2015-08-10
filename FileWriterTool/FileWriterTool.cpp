#include "FileWriterTool.h"

FileWriterTool::FileWriterTool(std::string fileName){
	_fileName = fileName;
	_fileType = ANY;
}

FileWriterTool::FileWriterTool(std::string fileName, FILE_TYPE fileType){
	_fileName = fileName;
	_fileType = fileType;
}

void FileWriterTool::AppendFile(std::string data){
	assert(_fileType == TEXT);
	_fileWriter.AppendFile(_fileName, data);
	std::cout << "Wrote data to " << _fileName << std::endl;
}

void FileWriterTool::AppendFile(KeyValuePair keyValuePair){
	assert(_fileType == KEY_VALUE);
	_fileWriter.AppendFile(_fileName, keyValuePair);
	std::cout << "Wrote data to " << _fileName << std::endl;
}

void FileWriterTool::AppendFile(std::vector<KeyValuePair> keyValuePairs){
	assert(_fileType == KEY_VALUE);
	_fileWriter.AppendFile(_fileName, keyValuePairs);
	std::cout << "Wrote data to " << _fileName << std::endl;
}

std::string FileWriterTool::GetFileContent(){
	std::string fileContent = _fileReader.GetFileContent(_fileName);
	return fileContent;
}

void FileWriterTool::ClearFile(){
	FileHandler::ClearFile(_fileName);
}

void FileWriterTool::DeleteFile(){
	FileHandler::DeleteFile(_fileName);
}