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

void File::show() {
	string line;
	while (getline(c_file, line)) {
		cout << line << endl;
	}
}