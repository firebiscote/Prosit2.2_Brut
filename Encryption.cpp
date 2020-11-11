#include "Encryption.h"

using namespace std;

Encryption::Encryption() {
	string path, newPath;
	cout << "File's path : ";
	cin >> path;
	cout << "Encrypted file's path : ";
	cin >> newPath;
	Encryption(path, newPath);
}

Encryption::Encryption(string path, string newPath) : File(path), c_newPath(newPath) {
	int level, caesarKey;
	char XORkey;
	cout << "Encryption level : ";
	cin >> level;
	switch (level) {
	case 1:
		cout << "XOR key : ";
		cin >> XORkey;
		level1(XORkey);
		break;
	case 2:
		cout << "Caesar key : ";
		cin >> caesarKey;
		level2(caesarKey);
		break;
	case 3:
		cout << "XOR key : ";
		cin >> XORkey;
		cout << "Caesar key : ";
		cin >> caesarKey;
		level3(XORkey, caesarKey);
		break;
	default:
		cout << "LEVEL ERROR" << endl;
		break;
	}
}

void Encryption::level1(char XORkey) {
	ofstream file(c_newPath);
	if (file) {
		c_file = doXOR(XORkey);
		file << c_file;
	} else {
		cout << "ERROR" << endl;
	}
}

void Encryption::level2(int Ckey) {
	ofstream file(c_newPath);
	if (file) {
		c_file = doCaesar(Ckey);
		file << c_file;
	}
	else {
		cout << "ERROR" << endl;
	}
}

void Encryption::level3(char XORkey, int Ckey) {
	ofstream file(c_newPath);
	if (file) {
		c_file = doCaesar(Ckey);
		c_file = doXOR(XORkey);
		file << c_file;
	}
	else {
		cout << "ERROR" << endl;
	}
}

string Encryption::doXOR(char XORkey) {
	string XORresult;
	for (int i = 0; i < c_file.size(); i++) {
		XORresult += (char)c_file[i] ^ XORkey;
	}
	return XORresult;
}

string Encryption::doCaesar(int Ckey) {
	if (Ckey > 27) {
		Ckey = 27;
	} else if (Ckey < 0) {
		Ckey = 0;
	}
	string caesarResult;
	for (int i = 0; i < c_file.size(); i++) {
		caesarResult += (char)((int)(char)c_file[i] + Ckey);
	}
	return caesarResult;
}