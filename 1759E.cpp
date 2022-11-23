#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
	std::vector <long int> m;
	long long int t=0, n=0, h=0;
int f(long int a,long long int h, int g, int b) {
	if(a==n) return 0;
	if(m.at(a)<h) return f(a+1, h+m.at(a)/2,g,b)+1;
	return std::max(g?f(a, h*2,g-1,b):0,b?f(a,h*3,g,b-1):0);
}
int main(){
	long int a=0, b=0,c=0, d=0,e=0, g=0;
	std::cin>>t;
	while(t--) {
		m.clear();
		g=2, b=1, a=0, c=0;
		std::cin>>n>>h;
		for(long int i=0;i<n;i++) {
			std::cin>>a;
			m.push_back(a);
		}
		std::sort(m.begin(),m.end());
		std::cout<<f(c, h, g, b)<<'\n';
	}
}
