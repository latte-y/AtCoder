#include <iostream>
using namespace std;

void calc(int N, long long T, int *A, long long soundLength);

int main() {
	int N;
	long long T;
	cin >> N >> T;

	long long soundLength = 0;
	int A[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i];
		soundLength += A[i];
	}

	calc(N, T, A, soundLength);
}

void calc(int N, long long T, int *A, long long soundLength) {
	int secFromStart = 0;
	int soundNum = 1;
	bool isContinue = true;

	while (T > soundLength) {
		T %= soundLength;
	}

	if (isContinue && soundNum != 1) soundNum -= N;

	for (int i = 0; i < N; i++) {
		if (T >= A[i]) {
			T -= A[i];
		} else {
			secFromStart = T;
			isContinue = false;
			break;
		}
	soundNum++;
	
}
	cout << soundNum << " " << secFromStart << endl;
}
