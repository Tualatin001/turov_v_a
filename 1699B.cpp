#include <iostream>
#include <cmath>
#include <iostream>
#include <algorithm>
int main(int argc, char** argv) {
	long int a=0, b=0, c=0, d=0, e=0;
	long int t=0, n=0, m=0;
	std::cin>>t;

	while(t--) {
		std::cin>>n>>m;
		for(int i=1;i<=n;i++) {
			for(int j=1;j<=m;j++) {
				std::cout<<	((j%4<2)!=(i%4<2))<<' ';
			}
			std::cout<<'\n';
		}
		
	}
	return 0;
}
