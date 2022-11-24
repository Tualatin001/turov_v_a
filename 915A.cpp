#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
bool f(int &a, int&b){ return a>=b;}
int main(){
	long int a=0, b=0, c=0, d=0, e=0;
	std::vector <int> m;
	long int t=0, n=0, k=0, flag =0;
	std::cin>>t>>k;
	while(t--) {
	std::cin>>a;
	m.push_back(a);
	}
	std::sort(m.begin(),m.end(),f);
	for(int i=0;i<m.size();i++) {
		if(k%m.at(i)==0) {
			std::cout<<k/m.at(i)<<'\n';
			break;
		}
	}
	return 0;
}
