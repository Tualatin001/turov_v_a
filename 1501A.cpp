#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
int main(int argc, char** argv) {
	long a=0, b=0, c=0, d=0, e=0, g=0;
	long t=0, n=0;
	std::vector <int> m1;
	std::vector <int> m2;
	std::vector <int> m3;
	std::cin>>t;
	while(t--) {
		std::cin>>n;
		m1.clear();
		m2.clear();
		m3.clear();
		for(int i=0;i<n;i++) {
			std::cin>>a>>b;
			m1.push_back(a);
			m2.push_back(b);
		}
		for(int i=0;i<n;i++) {
			std::cin>>a;
			m3.push_back(a);
		}
			a=m1.at(0)+m3.at(0);
		for(int i=1;i<n;i++) {
			a+=std::max((long)(m2.at(i-1)-m1.at(i-1)+1)/2, m2.at(i-1)-a);
			a+=m1.at(i)+m3.at(i)-m2.at(i-1);
		}
		std::cout<<a<<'\n';
	}
	return 0;
}
