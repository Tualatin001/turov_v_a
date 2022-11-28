#include <cmath>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
bool f (int &a, int &b) {
	return a>=b;
}
int main() {
	long a=0, b=0, c=0, d=0, e=0, g=0;
	long n=0;
	std::string s;
	std::vector <int>m;
	std::cin>>n;
while(n--) {
	g=0;
	std::cin>>s;
	if(s[0]==s[1])a++;
	else {
					std::cout<<"NO \n";
			g=1;
			continue;
	}
	for(int i=1;i<s.size();i++) {
		while(s[i]==s[i-1]&&i<s.size()) {
			a++;
			i++;
		}
		if(a<2||(s[i]!=s[i-1]&&i==s.size()-1)) {
			std::cout<<"NO \n";
			g=1;
			break;
		}
		a=1;
	}
	if(g==0) std::cout<<"yes"<<'\n';
}
	
}
