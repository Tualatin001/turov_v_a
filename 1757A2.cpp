#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
	std::vector <long int> m;
	std::vector <long int> erato;
	long long int t=0, n=0, h=0, r=0, x=0, l=0,a=0, b=0, e=0, c=1000, u=1;
		
int main(){
	long long int d=0, g=0;
		std::cin>>t;
		while(t--) {
			m.clear();
			x=0;
			u=1;
			std::cin>>n;
			for(int i=0;i<n;i++) {
				std::cin>>a;
				m.push_back(a);
				x+=a;
			}
			if(x%2==0) {
				std::cout<<n-abs(x)/2<<'\n';
				for(int j=0;abs(x)!=0;){
					if(x<0) {
						while(m.at(u)!=-1) {
							std::cout<<u<<' '<<u<<'\n';
							u++;
						}
						std::cout<<u<<' '<<u+1<<'\n';
						x+=2;
						u+=2;
					}
					if(x>0) {
						while(m.at(u)!=1) {
							std::cout<<u<<' '<<u<<'\n';
							u++;
						}
						std::cout<<u<<' '<<u+1<<'\n';
						x-=2;
						u+=2;
					}
				}
				while(u<=n) {
					std::cout<<u<<' '<<u<<'\n';
					u++;
				}
			} else std::cout<<-1<<'\n';
			}

		}
