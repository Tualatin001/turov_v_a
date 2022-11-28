#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>


int main() {
	long a=0, b=0, c=0, d=0, e=0;
	long t=0;
	long n=0;
std::vector <std::string> m;
	std::string s;
	std::cin>>t;
while(t--) {
	m.clear();
	a=0;
for(int i=0;i<8;i++){
std::cin>>s;
m.push_back(s);
}
for(int i=1;i<7;i++) {
	a=(int)(std::find(m.at(i).begin(),m.at(i).end(), '#')-m.at(i).begin());
	if(a==7||a==0) a=4;
	if(std::count(m.at(i).begin(),m.at(i).end(),'#')==1&&m.at(i+1).at(a+1)=='#'&&m.at(i+1).at(a-1)=='#'&&m.at(i-1).at(a+1)=='#'&&m.at(i-1).at(a-1)=='#') {
		std::cout<<i+1<<' '<<a+1<<'\n';
	}
}
}
	
}
