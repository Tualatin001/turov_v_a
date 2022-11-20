#include <algorithm>
#include <iostream>
#include <vector>
#include <cmath>
int main(){
	long int a=0, b=0, c=0, d=0, e=0;
	long int t=0, n=0, p=0;
	std::vector <int> m;
	std::cin>>t;
	while(t--) {
		c=0;
		b=0;
		d=1;
		m.clear();
		std::cin>>n>>p;
		while(n--) {
			std::cin>>a;
			m.push_back(a);
		} 
		std::reverse(m.begin(),m.end());
		b=a-1;
		while(std::find(m.begin(),m.end(),b)!=m.end()) b--;
		m.push_back(0);
		if(b>=0) {
			c+=p-a;
			while(m.at(d)==p-1) d++;
			if(b==m.at(d)+1) b--;
			while(std::find(m.begin(),m.end(),b)!=m.end()&&b>0) b--;
			if(b==0) {
				std::cout<<c<<'\n';
				continue;
			} else {
				std::cout<<c+b<<'\n';
				continue;
			}
		} else {
			for(d=p-1;d>a&&std::find(m.begin(),m.end(),d)!=m.end();d--);
			std::cout<<d-a<<'\n';
		}
	}
}
