#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
int main() {
	long a=0, b=0, c=0, d=0, e=0, g=0;
	long n=0;
	std::vector <int>m(200005, 9999999);
	std::cin>>n;
	for(int i=0;i<n;i++) {
		std::cin>>a;
		m[a]=i;
	}
	std::cout<<(int)(std::min_element(m.begin(),m.end())-m.begin())<<'\n';
}
