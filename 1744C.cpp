#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

int main(int argc, char** argv) {
	long int a=0, b=0, d=0, e=0;
	long int t=0, n=0;
	int fl=0;
	long int max=-1;
	char k;
	char c;
	std::string s;

	std::cin>>t;
	while(t--) {
			int i=0;
 	std::cin>>n>>c;
 	if(c=='g') {
 		std::cin>>s;
 		std::cout<<0<<'\n';
 		continue;
	 }
 	fl=0;
 	max=-1;
	while(i<n) {
		
		b=0;
		std::cin >>k;
		i++;
		if(k=='g'&&fl==0) {
			a=i;
			fl=1;
		}
		if(k==c&&i<n) {
			std::cin>>k;

			i++;
					if(k=='g'&&fl==0) {
			a=i;
			fl=1;
		}
			b++;
			for(;i<n&&k!='g';i++) {
				std::cin>>k;
				b++;
						if(k=='g'&&fl==0) {
			a=i+1;
			fl=1;
		}
			}
			if(b>max) max=b;
			if(k=='g') b=0;
		}
	} 
	if(a+b>max&&(b!=0||k==c)) std::cout<<a+b<<'\n';
	else std::cout<<max<<'\n';
}
return 0;
}
