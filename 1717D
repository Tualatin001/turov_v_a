#include <cmath>
#include <vector>
#include <iostream>
const int M=1000000007;
 
long long f(long long a, long long b) {
	long long res = 1;
	for (;b > 0; b /= 2) {
		if (b & 1) (res*=a)%=M;
		(a*=a)%=M;
	}
	return res;
}
 
int main() {
	int n, k; std::cin >> n >> k;
 
	long long comb = 1, ans = 1;
	if(k>n) k=n;
	for (int i=1; i<=k; i++) {
		(comb *= (n-i+1) * f(i, M-2) % M) %= M;
		(ans += comb) %= M;
	}
 
	std::cout << ans << '\n';
}
