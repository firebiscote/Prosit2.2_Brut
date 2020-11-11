#ifndef DEF_FILE
#define DEF_FILE

#include <iostream>
#include <fstream>
#include <string>

class File {
public:
	File();
	File(std::string path);

protected:
	std::string c_file;
	std::string c_path;

	friend std::ostream& operator<< (std::ostream& flux, File& file);
};

#endif

