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
	int j=0;
	std::string s;
	std::cin>>t;
	while(t--) {
				a=0;
		error=0;
		std::cin>>s;
		if(s.size()==1){
			std::cout<<1<<"\n";
			continue;
		}
		if(s.at(0)=='0') {
			std::cout<<1<<'\n';
			continue;
		}
		if(count(s.begin(),s.end(),'0')==0) {
			for(j=0;j<s.size()-1&&s[(s.size()-1-j)]=='?';j++) {
			}
			j++;
			std::cout<<j<<'\n';
			continue;
		}
		a=0;
		b=0;
		d=0;
	for(int h=0;h<s.size();h++) {
		if(s.at(h)=='0') {
			b=h;
			s.erase(s.begin()+h,s.end());
			d++;
			break;
		}

		
	}
			for(int k=0;k<s.size()-1&&s[(s.size()-1-k)]=='?'; k++) {
			d++;
		}
		std::cout<<d+1<<'\n';
	}
	return 0;
}
