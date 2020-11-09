#include "File.h"

using namespace std;

File::File(string path) {
	c_file.open(path);
	if (c_file) {
		c_path = path;
	} else {
		c_file.close();
	}
}

void File::deleteFile() {
	c_file.close();

}

ostream& operator<< (ostream& flux, File& file) {
	string line;
	while (getline(file.c_file, line)) {
		cout << line << endl;
	}
	return flux;
}