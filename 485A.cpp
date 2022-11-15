#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long int a=0, b=0, c=0, d=1,e=-99999999;
	long t=0, k=0, n=0, g=0;
	std::cin>>a>>k;
	while(a%2==0) a/=2;
	while(k%2==0) k/=2;
	for(int h=2;h<=k&&g==0;h++) {
		
		while(k%h==0) {
			k/=h;
			if(a%h!=0) {
				std::cout<<"No"<<'\n';
								g=1;
				break;
			} else 	a/=h;
		}	
	}
	if(g==0) std::cout<<"Yes"<<'\n';
	return 0;
}
