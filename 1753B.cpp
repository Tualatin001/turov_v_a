#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
	std::vector <long int> m(500005,0);
	std::vector <long int> erato;
	long long int t=0, n=0, h=0, r=0, x=0, l=0,a=0, b=0, e=0;
int main(){
	long int c=0, d=0, g=0;
std::cin>>n>>x;
while(n--) {
	std::cin>>a;
	m.at(a)++;
}
for(int i=1;i<x;i++) {
	if(m.at(i)%(i+1)!=0) {
		std::cout<<"NO"<<'\n';
		return 0;
	}
	m.at(i+1)+=m.at(i)/(i+1);
}
std::cout<<"YES"<<'\n';
}
