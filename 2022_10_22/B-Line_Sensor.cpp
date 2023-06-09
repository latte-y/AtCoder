#include <iostream>
#include <algorithm>
#include <string>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {

		int H, W;
		cin >> H >> W;
		
		int count[W];
    for (int i = 0; i < W; i++ ) {
			count[i] = 0;
		}

		for (int i = 0; i < H; i++) {
			char *C;
			cin >> C;

      for (int i = 0; i < strlen(C); i ++) {
        if (C[i] == char("#")) count[i]++;
				}
		}

		for (int i = 0; i < H; i++) {
			cout << count[i] << " ";
		}
}
