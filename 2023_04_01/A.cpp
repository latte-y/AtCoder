#include <iostream>
#include <string>
using namespace std;
 
// me
int main(){
	int N;
	string S;
	cin >> N >> S;
 
	bool kougo = true;
 
	for (int i=0; i < N-1; i++) {
		if ( N != 1 && S.substr(i,2) == "MM" || S.substr(i,2) == "FF" ) kougo = false;
	}
 
	if (kougo) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}

// example
#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0; i<n-1; i++){
		if(s[i]==s[i+1]){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}