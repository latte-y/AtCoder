#include <iostream> 
#include <string> 
using namespace std;

int main() {
	string S, T;
	cin >> S >> T;

	int count = 0;
	for (int i=0; i<T.length(); i++) {
		count++;
		if (S[i] != T[i]) break; 
	}
	cout << count << endl;
}