#ifndef DEF_FILE
#define DEF_FILE

#include <iostream>
#include <fstream>
#include <string>

class File {
public:
	File(std::string path);
	void deleteFile();
	void show();

protected:
	std::ifstream c_file;
	std::string c_path;
};

#endif

