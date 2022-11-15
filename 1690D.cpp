#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long int a=0, b=0, c=0, d=0,e=-9;
	long t=0, k=0, n=0;
	char sb='a';
	std::cin>>t;

	while(t--) {
			b=-9;
			a=0;
		std::cin >>n>>k;
			std::vector <char> l(k, 'W');

for(int j=0;j<n;j++) {
	std::cin>>sb;
	if(l.at(j%k)=='B'&&sb=='W') a--;
	if(l.at(j%k)=='W'&&sb=='B') a++;
	l.at(j%k)=sb;
	if(a>b) b=a;
}
		if(b<=k) std::cout<<k-b<<'\n';
		else std::cout<<0<<'\n';
	}
	return 0;
}
