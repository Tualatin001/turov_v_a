#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
bool f(int &a, int&b){ return a>=b;}
int main(){
	long int a=0, b=0, c=0, d=0, e=0;
	std::vector <int> m;
	long int t=0, n=0, k=0, flag =0;
	std::string S;
	std::cin>>t;
	while(t--) {
		std::cin>>n;
		m.clear();
		while(n--) {
			std::cin>>a;
			m.push_back(a);
		}
		a=0;
		m.erase(m.begin());
		while (m[0]==1&&!m.empty()) {
				m.erase(m.begin());
			}
		if(m.size()>0) {
			for(int i=m.size()-1;i>=0;i--) if(m.at(i)==0) {
				std::cout<<i+2<<'\n';
				break;
			}
		} else std::cout<<0<<'\n';
		
		
	}
	return 0;
}
