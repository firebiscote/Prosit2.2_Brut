#ifndef DEF_DECRYPTION
#define DEF_DECRYPTION

#include <iostream>
#include <fstream>
#include <string>
#include "File.h"

class Decryption : public File {
public:
	Decryption(std::string path, std::string newPath);
	void level1(char XORkey);
	void level2(int Ckey);
	void level3(char XORkey, int Ckey);

protected:
	std::string c_newPath;
	std::string doXOR(char XORkey);
	std::string doCaesar(int Ckey);
};

#endif
