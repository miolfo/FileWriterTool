#include <iostream>
#include "FileWriterTool.h"



void TestTextWriter(){
	FileWriterTool asd("testfile.txt", FileWriterTool::TEXT);
	asd.AppendFile("lollol");
	//std::cout << asd.GetFileContent();
}

void TestKeyValueWriter(){
	FileWriterTool asd("testfile2.txt", FileWriterTool::KEY_VALUE);
	FileWriterTool::KeyValuePair pairOfData;
	pairOfData.key = "avain";
	pairOfData.value = "arvo";
	std::vector<FileWriterTool::KeyValuePair> pairsOfData;
	for (int i = 0; i < 20; i++){
		FileWriterTool::KeyValuePair pair;
		pair.key = "avain" + std::to_string(i);
		pair.value = "arvo" + std::to_string(i);
		pairsOfData.push_back(pair);
	}
	asd.AppendFile(pairsOfData);
	//asd.Appendfile(pairOfData);
}

void DeleteAndClear(){
	FileWriterTool asd("testfile.txt", FileWriterTool::KEY_VALUE);
	FileWriterTool asd2("testfile2.txt", FileWriterTool::KEY_VALUE);
	asd.DeleteFile();
	asd2.ClearFile();
}

int main(){
	TestTextWriter();
	TestKeyValueWriter();
	DeleteAndClear();
	return 0;
}