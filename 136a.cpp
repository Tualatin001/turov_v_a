#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
int main(int argc, char** argv) {
	long a=0, b=0, c=0, d=0, e=0, g=0;
	long t=0, n=0;
	std::map <int, int> dr;
	std::cin>>n;
	for(int i=1;i<=n;i++) {
		std::cin>>a;
		dr.insert(std::make_pair(a,i));
	}

	for(int i=1;i<=dr.size();i++) std::cout<<dr.at(i)<<' ';
	return 0;
}
