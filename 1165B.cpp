#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long int a=0, b=0, c=0, d=1,e=-99999999;
	long t=0, k=0, n=0;
	long int igr=0;
	int v;
	int h=1;
	std::vector<int> m;
std::cin>>n;
while(n--) {
	std::cin>>v;
	m.push_back(v);
}
	std::sort(m.begin(),m.end());
for(h=0;d!=0;) {
	d=0;
	for(int j=0;j<m.size();j++) {
		if(m.at(j)>=h+1) {
			m.erase(m.begin(),m.begin()+j+1);

			d=1;
			h++;
			break;
		}
	}
}
	std::cout<<h<<'\n';
	return 0;
}
