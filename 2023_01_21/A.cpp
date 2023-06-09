#include <iostream>
using namespace std;

int main() {
	int N, P, Q, R, S;
	cin >> N >> P >> Q >> R >> S;

	int A[N], B[N];
	for (int i=0; i<N; i++) {
		cin >> A[i];
		B[i] = A[i];
	}

	int length = Q - P;
	for (int i=0; i<length+1; i++) {
		B[P-1+i] = A[R-1+i];
		B[R-1+i] = A[P-1+i];
	}

	for (int i=0; i<N; i++) {
		cout << B[i] << " ";
	}
	cout << endl;
}