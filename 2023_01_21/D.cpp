#include <iostream>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	
	int A[N], B[N];
	for (int i=0; i<N; i++) {
		cin >> A[i] >> B[i];
	}

	int total = 0;
	bool flag = false;
	for (int i=0; i<N; i++) {
		for (int j=0; j<B[i]; j++) {
			cout << total << endl;
			total += A[i];
			if (total == X) flag = true;
		}
	}
	
	if (flag) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}