#include "inout.h"

void print(const vector<int>& vec) {
	int size = vec.size();

	for (int i = 0; i != size; i++) {
		cout << vec.at(i) << " ";
	}
	cout << endl;
}