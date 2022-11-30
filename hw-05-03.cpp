#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <string>
long fac(double a) {
	double h=1;
	for(long i=a;i>1;i--) h*=i;
	return h;
}

int main(int argc, char** argv) {
	long a=0, b=0;
	double x=-1.0;
	std::ofstream in("C:\\Users\\X\\Desktop\\Ïðîãè\\A.txt");
	double d=0, s=0, y=0, e=0,c=1;
	std::cin>>a>>b>>d>>e;
	for(x=a;x<=b;x+=d){
		s=0.0;
		c=1;
	for(long i=0;c>=e||c<=-e;i++) {
		c=pow(2*x,i)/fac(i);
		s+=c;
	}
	in<<x<<' '<<s<<' '<<pow(M_E,2*x)<<'\n';
	}
	return 0;
}
/*
0 1 1
0.1 1.2214 1.2214
0.2 1.49182 1.49182
0.3 1.82211 1.82212
0.4 2.22554 2.22554
0.5 2.71828 2.71828
0.6 3.32012 3.32012
0.7 4.05519 4.0552
0.8 4.95303 4.95303
0.9 6.04963 6.04965
1 7.38905 7.38906
*/
