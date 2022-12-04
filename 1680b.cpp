	#include <iostream>
	#include <fstream>
	#include <cmath>
	#include <vector>
	#include <string>
int main(){
	long a=0, b=0, c=0, d=0, e=0,f=0 ,g=0;
	long t=0,n=0, m=0;
	std::cin>>t;
	std::vector<std::string> k;
	std::string s;
	while(t--) {
		k.clear();
		g=1;
		std::cin>>n>>m;
 		f=0;
		for(int j=0;j<n;j++){
			std::cin>>s;
			k.push_back(s);
		}
		for(long v=0;v<std::min(n,m)&&!f;v++) {
		for(int j=0;j<n&&g;j++) {
			if(k.at(j).at(v)=='R'){
				f=1;
				for(int h=0;h<j&&g;h++) {
					for(int i=0;i<m&&g;i++) {
						if(k.at(h).at(i)=='R') {
							std::cout<<"NO \n";
							g=0;
						}
					}
				}
								break;
			}
		}
			for(int i=0;i<m&&g;i++) {
			if(k.at(v).at(i)=='R'){
				f=1;
				for(int h=0;h<i&&g;h++) {
					for(int j=0;j<n&&g;j++) {
						if(k.at(j).at(h)=='R') {
							std::cout<<"NO \n";
							g=0;
						}
					}
				}
				break;
			}
		}
	}
		if(g&&f)std::cout<<"YES \n";
	}
}
