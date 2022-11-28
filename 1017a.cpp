#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
bool f (int &a, int &b) {
	return a>=b;
}
int main() {
	long a=0, b=0, c=0, d=0, e=0, g=0;
	long n=0;
	std::vector <int>m;
	std::cin>>n;
			std::cin>>a;
		b=a;
		std::cin>>a;
		b+=a;
		std::cin>>a;
		b+=a;
		std::cin>>a;
		b+=a;
		m.push_back(b);
		c=b;
	for(int i=1;i<n;i++) {
		std::cin>>a;
		b=a;
		std::cin>>a;
		b+=a;
		std::cin>>a;
		b+=a;
		std::cin>>a;
		b+=a;
		m.push_back(b);
	}
	std::sort(m.begin(),m.end(), f);
	std::cout<<(int)(std::find(m.begin(),m.end(), c)-m.begin())+1<<"\n";
	
}
