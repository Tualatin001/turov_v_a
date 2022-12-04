#include <cmath>
#include <iostream>
#include <vector>
#include <string>
int main (){
	long a=0,b=0,c=0,d=0,e=0,g=0;
	long t=0, n=0;
	std::string s;
	std::vector <std::string> k;
	std::cin>>t;
	while(t--) {
		k.clear();
		a=0,b=0,c=0,d=0,e=0;
		std::cin>>n;
		for(int i=0;i<n;i++) {
			std::cin>>s;
			k.push_back(s);
		}
		for(int i=0;i<n;i++) for(int j=0;j<n;j++) {
			if(k.at(i).at(j)=='*') {
			if(!c) {
				a=i;
				b=j;
				c=1;
			}
			else {
				d=i;
				e=j;
			}
			}
		}
		
		if(a==d) d= a==n-1? a-1:a+1;
		if(b==e) e= b==n-1? b-1:b+1;
		for(int i=0;i<n;i++) if(i==a||i==d) {
			std::cout<<std::string(std::min(b,e),'.')<<"*"<<std::string(abs(b-e)-1,'.')<<"*"<<std::string((n-std::max(b,e))-1,'.')<<'\n';
		}
		else std::cout<< std::string(n,'.')<<'\n';
	}
}
