#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
int main() {
	long long int a=0,b=0,c=0,d=0;
	long long int  n=0,t=0;
	std::cin>>t;
	while(t--) {
		a=0;
		std::cin>>n;
		if(n>20) {
		a=(int)n/2+(int)n/3+(int)n/2+(int)n/3+n;	
		} else {
			for(int j=1;j<=n;j++) {
				if(j%3==0) a++;
				if(j%2==0)a++;
				if(j*2<=n)a++;
				if(j*3<=n) a++;
				a++;
			}
		}
		std::cout<<a<<'\n';
	}
}
