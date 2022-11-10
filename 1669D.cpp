#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long int a=0, b=0,c=0,d=0,e=0;
	long int t=0, n=0;
	long int error=0;
	int i=0;
	std::string s;
	std::cin>>t;
	while(t--) {
		error=0;
		std::cin>>n;
		getline(std::cin, s);
		getline (std::cin, s);
		while(s.size()>0) {
		
		for(i=0;s[i]!='W'&&i<s.size();i++) {
		}
			if(count(s.begin(),s.begin()+i+1, 'R')==i&&i!=0) error=1;
			if(count(s.begin(),s.begin()+i+1, 'B')==i&&i!=0) error=1;
			s.erase(s.begin(),s.begin()+i);
			while(s.size()>0) if(s.at(0)=='W') {
				s.erase(s.begin());
			} else {
				break;
			}
		}
		if(error==0)	std::cout<<"YES"<<'\n';
		else std::cout<<"NO"<<'\n';
	}
	return 0;
}
