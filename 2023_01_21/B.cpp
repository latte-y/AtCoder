#include <iostream>
#include <regex>
using namespace std;

int main() {
	int N;
	string S;
	cin >> N >> S;

	string str = regex_replace(S, regex("na"), "nya"); 
	cout << str << endl;
}