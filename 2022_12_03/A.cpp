#include <iostream>
#include <string>
using namespace std;


int main() {
	int H, W;
	cin >> H >> W;
	int count = 0;

	for (int j=0; j < H; j++) {
		string S;
		cin >> S;

		for (int i=0; i < W; i++) {
			if (S[i] == char('#')) {
				count++;
			}
		}
	}

	cout << count << endl;
}