#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void) {
	double A, B, div;
	cin >> A >> B;

	div = B / A;
	div *= 1000;
	div = round(div);
	div /= 1000;

	cout << fixed;
	cout << setprecision(3) << div << endl;
}