#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void fileIO(char* fname_in, char* fname_out) {
	ifstream fin(fname_in);
	ofstream fout(fname_out);
	string record, name, id, city;
	if (!fin) {
		cout << "File not found error " << fname_in << endl;
		return;
	}
	while (getline(fin, record)) {
		istringstream sin(record);
		sin >> name;
		sin >> id;
		if (!(sin >> city))
			city = " ";
		if (city != " ")
			fout << city << " ";
		fout << id << " " << name << endl;
	}
	fin.close();
	fout.close();
}
int main(int argc, char* argv[]) {
	if (argc < 5) {
		cout << "Usage : " << endl;
		cout << " -i input_file_name " << endl;
		cout << " -o output_file_name " << endl;
		return 0;
 	}
	int file_in = -1;
	int file_out = -1;
	for (int i = 0; i < argc; i++)
	{
		if (string(argv[i]) == "-i")
			file_in++;
		if (string(argv[i]) == "-o")
			file_out++;
	}
	if (file_in > 0 && file_out > 0)
		fileIO(argv[file_in], argv[file_out]);
	return 0;
}