#include <string>

#include "FileWriter.h"
#include "FileReader.h"

class FileWriterTool{
private:
	FileWriter fileWriter;
	FileReader fileReader;
public:
	FileWriterTool();
	void WriteToFile(std::string fileName, std::string data);
	std::string ReadFile(std::string fileName);
};