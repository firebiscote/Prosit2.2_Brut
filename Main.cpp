#include <iostream>
#include "File.h"

using namespace std;

int main() {
	File a("C:\\Users\\maxim\\Documents\\Aprog\\C-C++\\C++\\testFichierTexte\\text.txt");
	a.show();
	a.deleteFile();
}