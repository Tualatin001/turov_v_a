#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
int main() {
	long a=0, b=0, c=0, d=0, e=0, g=0;
	long n=0;
	std::vector <int>m;
	std::cin>>n;
	std::vector <int>::iterator h;
	while(n--) {
		std::cin>>a;
		h=std::find(m.begin(),m.end(),a);
		if(h!=m.end()) m.erase(h);
		m.push_back(a);
	}
	std::cout<<m.at(0)<<'\n';
}
