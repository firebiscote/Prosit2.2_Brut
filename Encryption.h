#ifndef DEF_ENCRYPTION
#define DEF_ENCRYPTION

#include <iostream>
#include <fstream>
#include <string>
#include "File.h"

class Encryption : public File {
public:
	Encryption();
	Encryption(std::string path, std::string newPath);
	void level1(char const XORkey);
	void level2(int Ckey);
	void level3(char XORkey, int Ckey);

protected:
	std::string c_newPath;
	std::string doXOR(char XORkey);
	std::string doCaesar(int Ckey);
};

#endif
