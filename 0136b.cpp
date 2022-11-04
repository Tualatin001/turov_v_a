#include <cmath>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
void print_container (std::vector<int> &q) {
for(int i=0;i<q.size();i++) {
	std::cout<<q.at(i)<<' ';
}
std::cout<<'\n';}
int main() {
	int a=0,b=0,c=0,d=0;

	std::cin>>a>>c;
	std::vector <int> ma;
	std::vector <int> mc;
	std::vector <int> me;
	while(a) {
		ma.push_back(a%3);
		a/=3;
	}
	while (c) {
		mc.push_back(c%3);
		c/=3;
	}
	while(ma.size()>mc.size()) mc.push_back(0);
		while(ma.size()<mc.size()) ma.push_back(0);
		while(me.size()<mc.size()) me.push_back(0);
	for(int i=0; i<ma.size();i++) {
		me.at(i)=(mc.at(i)-ma.at(i)+900)%3;
	}
	for(int i=0;i<ma.size();i++) {
		d+=me.at(i)*pow(3,i);
	}

	std::cout<<d;
}
