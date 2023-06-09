#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string S;
	cin >> S;

	char head = S[0];
	int mid = atoi((S.substr(1,6)).c_str());
	char end = S[ S.length() - 1 ];
	if (head >= 'A' && head <= 'Z') {
		if (mid >= 100000 && mid <= 999999) {
			if (end >= 'A' && end <= 'Z') {
				cout << "Yes" << endl;
			} else {
				cout << "No" << endl;
			}
		} else {
			cout << "No" << endl;
		}
	} else {
		cout << "No" << endl;
	}
}