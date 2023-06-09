#include <iostream>
#include <string>
using namespace std;

int main(){
	string S[8];
	char alphabet[8] = {'a','b','c','d','e','f','g','h'};
	int row = 8;

	for (int i=0; i < 8; i++) {
		cin >> S[i];
	}

	for (int i=0; i < 8; i++) {
		int a = S[i].find('*');
		if (a != -1) {
			cout << alphabet[a] << row << endl;
			break;
		}
		row--;
	}

}