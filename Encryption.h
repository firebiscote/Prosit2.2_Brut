#ifndef DEF_ENCRYPTION
#define DEF_ENCRYPTION

#include <iostream>
#include <fstream>
#include <string>
#include "File.h"

class Encryption : public File {
public:
	Encryption(std::string path, std::string newPath);
	void level1(char const XORkey);
	void level2(int const Ckey);
	void level3(char const XORkey, int const Ckey);

protected:
	std::string c_newPath;
};

#endif
