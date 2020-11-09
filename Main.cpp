#include <iostream>
#include "File.h"
#include "Encryption.h"

using namespace std;

int main() {
	Encryption z("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text.txt", "C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text2.txt");
	z.level1('e');
}