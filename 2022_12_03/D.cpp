#include <iostream> 
#include <climits>
// 多倍長整数のライブラリ（Atcoder上では使える）
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp = boost::multiprecision;
using namespace mp;

// 階乗 n!
cpp_int recursiveFunction(long long k);

int main() {
	long long K;
	cin >> K;

	for (long long i=1; i < LLONG_MAX; i++) {
		if (recursiveFunction(i) % K == 0) {
			cout << i << endl;
			break;
		}
	}
}

cpp_int recursiveFunction(long long N) {
	if (N == 0) return 1;
	return N * recursiveFunction(N-1);
}