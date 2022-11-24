#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
int main(){
	long int a=0, b=0, c=0, d=0, e=0;
	std::vector <int> m;
	long int t=0, n=0, k=0, flag =0;
	std::cin>>t;
	while(t--) {
		m.clear();
		std::cin>>n;
		while(n--) {
			std::cin>>a;
			m.push_back(a);
		}
		a=1;
		flag=0;
		a+=m.at(0);
		for(int i=1;i<m.size();i++) {
			if(m.at(i)+m.at(i-1)==0) {
				flag=1;
				break;
			}
			if(m.at(i)+m.at(i-1)==2) a+=5;
			else a+=m.at(i);
		}
		if(flag==1) std::cout<<-1<<'\n';
		else std::cout<<a<<'\n';
	}
	return 0;
}
