#include <iostream>
#include <map>
#include <iostream>
#include <cmath>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long int a=0, b=0, c=0, d=0;
	long int n=0;
	std::string s;
	std::cin>>n;
	std::map <std::string, int> m;
	while(n--) {
		std::cin>>s;
		if(m.count(s)) {
			m.at(s)++;
			std::cout<<s<<m.at(s)<<'\n';
		} else {
					m.insert(std::pair<std::string,int> (s, 0));
					std::cout<<"OK"<<'\n';
		}

	}
	return 0;
}
