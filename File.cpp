#include "File.h"

using namespace std;

File::File() {
}

File::File(string path) {
	ifstream file(path);
	if (file) {
		char tmp;
		while (file.get(tmp)) {
			c_file += tmp;
		}
		c_path = path;
	}
	file.close();
}

ostream& operator<< (ostream& flux, File& file) {
	cout << file.c_file;
	return flux;
}