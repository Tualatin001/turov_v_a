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
		std::cout<<pow(x,1)*sin(x*M_PI/4)
	for(long i=1;c>=e||c<=-e;i++) {
		c=pow(x,i)*sin(i*M_PI/4);
		s+=c;
	}
	in<<x<<' '<<s<<' '<<x/(sqrt(2)-2*x)<<'\n';
	}
	return 0;
}
/*
Результаты
0 0 0
0.05 0.0379437 0.0380456
0.1 0.0814178 0.0823578
0.15 0.130953 0.134624
0.2 0.187078 0.197197
0.25 0.250325 0.273459
0.3 0.321224 0.368454
0.35 0.400305 0.49005
0.4 0.488098 0.651239
0.45 0.585133 0.875123
0.5 0.691942 1.20711
0.55 0.809054 1.7504
0.6 0.936999 2.80094
0.65 1.07631 5.69109
0.7 1.22751 49.2487
0.75 1.39114 -8.74264
0.8 1.56772 -4.30602
0.85 1.75779 -2.97425
0.9 1.96188 -2.3329
0.95 2.18051 -1.95559
*/
