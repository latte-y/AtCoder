#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string S, T;
	cin >> N >> S >> T;

	bool flag = false;

	for (int i=0; i<N; i++) {
		if( S[i] == T[i] || S[i] == 'l' && T[i] == '1' || S[i] == '1' && T[i] == 'l' || S[i] == '0' && T[i] == 'o' || S[i] == 'o' && T[i] == '0' ) {
			flag = true;
		} else {
			flag = false;
			break;
		}
	}

		if (flag) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
}