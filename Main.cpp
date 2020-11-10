#include <iostream>
#include "File.h"
#include "Encryption.h"
#include "Decryption.h"

using namespace std;

int main() {
	Encryption testEncry("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text.txt", "C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text2.txt");
	Decryption testDecry("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text2.txt", "C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text3.txt");
}