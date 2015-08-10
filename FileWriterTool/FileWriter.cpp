#include "FileWriter.h"

void FileWriter::AppendFile(std::string fileName, std::string data){
	std::ofstream file;
	file.open(fileName, std::ios_base::app);
	file << data;
	file.close();
}

void FileWriter::AppendFile(std::string fileName, KeyValuePair keyValuePair){
	std::ofstream file;
	file.open(fileName, std::ios_base::app);
	std::string writeableData = keyValuePair.key + ':' + keyValuePair.value + ',';
	file << writeableData;
	file.close();
}

void FileWriter::AppendFile(std::string fileName, std::vector<KeyValuePair> keyValuePairs){
	std::ofstream file;
	file.open(fileName, std::ios_base::app);
	std::string writeableData;
	for (int i = 0; i < keyValuePairs.size(); i++){
		writeableData += keyValuePairs.at(i).key + ':' + keyValuePairs.at(i).value + ',';
	}
	file << writeableData;
	file.close();
}