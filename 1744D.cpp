#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
bool greater(int a, int b) { return a>b;
}
int main(int argc, char** argv) {
	long int a=0, b=0, c=0, d=0, l=0;
	long int t=0, n=0;
	std::vector<int> m;
	std::cin>>t;
	while(t--) {
					m.clear();
		b=0;
		a=0;
		d=0;
		std::cin>>n;
		for(int j=1;j<=n;j++) {
			std::cin>>a;
			c=j;
			l=0;
			while(c!=0&&c%2==0) {
				l++;
				c/=2;
			}
			if(l!=0) m.push_back(l);
			while(a!=0&&a%2==0) {
				b++;
				a/=2;
			}
		}
		std::sort(m.begin(),m.end(), greater);
				if(n-b<=0) {
			std::cout<<0<<'\n';
			
			continue;	
			}

			while(n-b>0&&d<m.size()) {
								b+=m.at(d);
				d++;
			}
			if(n-b<=0) std::cout<<d<<'\n';
			else std::cout<<-1<<'\n';
		
	}
	return 0;
}
