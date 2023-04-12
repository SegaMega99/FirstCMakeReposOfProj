#include "inout.h"

using namespace std;

void read(vector<int>& vec) {
	int val;
	string sval;

	int col;
	string scol;
	cin >> scol;
	col = stoi(scol);

	cout << "Input values:" << endl;

	for (int i = 0; i != col; i++) {
		cin >> sval;
		val = stoi(sval);

		vec.push_back(val);
	}
}