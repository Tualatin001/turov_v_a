#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
int g=0;
std::vector <int>m;
long n=0;
void f (int &a) {
	if(std::count(m.begin(),m.end(), a)!=1&&g==0) {
		std::cout<<n<<'\n';
		g=1;
	}
}
int main() {
	long a=0, b=0, c=0, d=0, e=0;
	long t=0;
	std::string s;
	std::cin>>t;
while(t--) {
std::cin>>n;
b=n;
g=0;
m.clear();
while(b--){
	std::cin>>a;
	m.push_back(a);
}
e=std::count(m.begin(), m.end(),0);
if(e!=0) {
	std::cout<<n-e<<'\n';
	continue;
}
std::for_each(m.begin(),m.end()-1, f);
if(g==0) std::cout<<n+1<<'\n';
}
	
}
