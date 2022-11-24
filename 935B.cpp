#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
bool f(int &a, int&b){ return a>=b;}
int main(){
	long int a=0, b=0, c=0, d=0, e=0;
	std::vector <int> m;
	long int t=0, n=0, k=0, flag =0;
	std::string S;
	std::cin>>t>>S;
	int x=0, y=0;
	if(S.at(0)=='U') y++;
		else x++;
	for(int i=1;i<S.size();i++) {
		if(x==y&&S.at(i)==S.at(i-1)) a++;
		if(S.at(i)=='U') y++;
		else x++;
	}
	std::cout<<a<<'\n';
	return 0;
}
