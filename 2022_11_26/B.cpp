#include <iostream>
#include <string>
using namespace std;

int main() {
	string S, T;
	cin >> S >> T;

	int partOfString = S.find(T);
	if (partOfString == string::npos) {
		cout << "No" << endl;
	} else {
		cout << "Yes" << endl;
	}
}