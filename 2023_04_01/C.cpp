#include <iostream>
using namespace std;

void isX(bool flag, int i, int N, int A[], int wa[],int sa[]) {
	int j = i+1;

	cout << "A[" << i << "] = " << A[i] << endl;
	// cout << "wa[" << i << "] = " << wa[i] << endl;
	// cout << "sa[" << i << "] = " << sa[i] << endl;
	if ( A[i] == wa[j] || A[i] == sa[j] ) {
		flag = true;
	} else {
		if (j < N) isX(flag, j, N, &A[i], &wa[i], &sa[i]);
	}
	flag = false;
}
 
int main(){
	int N, X;
	cin >> N >> X;
	int wa[N], sa[N];

	int A[N];
	for (int i=0; i < N; i++) {
		cin >> A[i];
		wa[i] = A[i] + X;
		sa[i] = A[i] - X;
	}

	for (int i=0; i < N; i++) {
		bool flag = false;
		isX(flag, i, N, &A[i], &wa[i], &sa[i]);
		if (flag) {
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}