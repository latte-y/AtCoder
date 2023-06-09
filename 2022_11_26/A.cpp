#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	cin >> S;

	int count = 0;
	for (int i=0; i<S.length(); i++) {
		if(S[i] == 'v') {
			count += 1;
		} else {
			count += 2;
		}
	}
	cout << count << endl;
}