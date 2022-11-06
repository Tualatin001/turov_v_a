#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
int chep (std::vector<int> &m){
		for(int k=0;k<m.size();k++) {
			if(m.at(k)%2==0){
				return k;
			}
		}
		return -1;
}
int nep (std::vector<int> &m) {

	for(int i=0;i<m.size();i++) {
		if(m.at(i)%2==1) {
			return i;
		}
	}
	return -1;
}
void print (std::vector <int> &m) {
	for(int h=0;h<m.size();h++) {
		std::cout<<m.at(h)<<' ';
	}
	std::cout<<'\n';
}
int main () {
	long int a=0, b=0, c=0, d=0, e=0;
	long int t=0, n=0;
	std::cin>>t;
	std::vector<int> m;
	std::vector<int> g;
	for(int i=0;i<t;i++) {
		std::cin>>n;
		for(int j=0;j<n;j++) {
			std::cin>>a;
			m.push_back(a);
		}
		g.push_back(m.at(0));
		m.erase(m.begin());

		for(int j=1;j<n;j++) {
			if(g.at(j-1)%2==0&&chep(m)!=-1) {
				g.push_back(m.at(chep(m)));
				m.erase(m.begin()+chep(m));
			}  else if(g.at(j-1)%2==1&&nep(m)!=-1) {
				g.push_back(m.at(nep(m)));
				m.erase(m.begin()+nep(m));
			} else {
				g.push_back(m.at(0));
				m.erase(m.begin());
			}
			
		}
		print(g);
		m.clear();
		g.clear();
	}
}
