#include "Encryption.h"

using namespace std;

Encryption::Encryption(string path, string newPath) : File(path), c_newPath(newPath){
}

void Encryption::level1(char const XORkey) {
	string newFile;
	char tmp;
	int i = 0;
	while (c_file.get(tmp)) {
		newFile += tmp ^ XORkey;
	}
	ofstream file(c_newPath);
	if (file) {
		file << newFile;
	} else {
		cout << "ERROR" << endl;
	}
}

void Encryption::level2(int const Ckey) {
	string newFile;
}

void Encryption::level3(char const XORkey, int const Ckey) {
	string newFile;
}