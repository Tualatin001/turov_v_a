#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
int main() {
	long int a=0, b=0, c=0, d=0, e=0;
	long int x=0, y=0, t=0, n=0;
	std::cin>>t;
	for(int i=0;i<t;i++) {
		std::cin>>n;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=i;j++){
				if(j==1||j==i) std::cout<<"1 ";
				else std::cout<<"0 ";
			}
			std::cout<<'\n';
		}
	}
}
