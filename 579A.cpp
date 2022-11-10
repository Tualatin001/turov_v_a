#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
bool greater(int a, int b) { return a>b;
}
int main(int argc, char** argv) {
	long int a=0, b=0, c=0, d=0, l=0;
	long int t=0, n=0;
	std::vector<int> m;
	std::cin>>t;
	while(t) {
		m.push_back(t%2);
		t/=2;
	}
	std::cout<<count(m.begin(),m.end(),1)<<'\n';
	return 0;
}
