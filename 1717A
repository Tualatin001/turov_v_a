#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
int men(int a, int b) {
	if(a<b) return a;
	else return b;
}
int bol(int a,int b) {
	if(a>b) return a;
	else return b;
}
int main() {
	long int a=0,b=0,c=0,d=0;
	long int n=0,t=0;
	std::cin>>t;
	while(t--) {
		a=0;
		std::cin>>n;

		for(int j=1;j<=n;j++) {
		if(j%3==0&&j/3>=1) a++;
		if(j*3<=n) a++;
		if(j*2<=n) a++;
		if(j%2==0&&j/2>=1) a++;
		a++;
		}
		std::cout<<a<<'\n';
	}
}
