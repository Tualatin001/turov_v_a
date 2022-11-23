#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
	std::vector <long int> m;
	long long int t=0, n=0, h=0, r=0, x=0, l=0,a=0, b=0, e=0;
int main(){
	long int c=0, d=0, g=0;
	std::cin>>t;
	while(t--) {
		m.clear();
		c=0;
	std::cin>>l>>r>>x>>a>>b;
	if(a==b) std::cout<<0<<'\n';
	else if(abs(a-b)>=x) std::cout<<1<<'\n';
	else if((a-l>=x&&b-l>=x)||(r-a>=x&&r-b>=x)) std::cout<<2<<'\n';
	else if((a-l>=x&&r-l>=x&&r-b>=x)||(r-a>=x&&r-l>=x&&b-l>=x)) std::cout<<3<<'\n';
	else std::cout<<-1<<'\n';
	}
}
