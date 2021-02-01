#include <iostream>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <fstream>

using namespace std;

int data_test[10000][784];
int label_test[10000];

void read_test_data() {
	ifstream csvread;
	csvread.open("mnist_test.csv", ios::in);
	if (csvread) {
		string s;
		int data_pt = 0;
		while (getline(csvread, s)) {
			stringstream ss(s);
			int pxl = 0;
			while (ss.good()) {
				string substr;
				getline(ss, substr, ',');

				cout << "Output: " << substr << " " << endl; 

				pxl++;
			}
			data_pt++;
		}
		csvread.close();
	}
	else {

		cerr << "Can not read data!" << endl;
	}
}


int main() {
	read_test_data();

	cout << "Reading Data is done!" << endl;

	return 0;
}
