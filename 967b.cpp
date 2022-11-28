#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
bool f(int &a,int &b){return a>b;}
int main() {
	long a=0, d=0, e=0;
	long t=0;
	double c=0;
	long n=0;
	long b=0;
std::vector <int> m;
	std::string s;
long A=0, B=0;
std::cin>>n>>A>>B;
while(n--) {
	std::cin>>a;
	b+=a;
	m.push_back(a);
}
a=m.at(0);
m.erase(m.begin());
std::sort(m.begin(),m.end(), f);
c=(double)B/A;
while((double)a/b<c) {
	b-=m.at(e);
	e++;
}
std::cout<<e<<'\n';
}
