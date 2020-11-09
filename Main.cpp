#include <iostream>
#include "File.h"
#include "Encryption.h"

using namespace std;

int main() {
	File a("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text.txt");
	cout << a;
	Encryption e(a, 1);
	a.deleteFile();
}