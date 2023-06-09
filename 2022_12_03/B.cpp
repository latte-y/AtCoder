#include <iostream>
using namespace std;


int main() {
	int N;
	cin >> N;

	int S[N], A[N];

	for (int i=0; i<N; i++) {
		int s;
		cin >> s;
		S[i] = s;

		if (i == 0) {
			A[i] = S[i];
		} else {
			A[i] = S[i] - S[i-1];
		}
		cout << A[i] << " ";
	}
}