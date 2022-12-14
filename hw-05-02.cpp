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
		std::ofstream in("C:\\Users\\X\\Desktop\\Ïðîãè\\F.txt");
		double d=0, s=0, y=0, e=0,c=1;
		std::cin>>a>>b>>d>>e;
		for(x=a;x<=b;x+=d){
			s=0.0;
			c=1;
		for(long i=0;c>=e||c<=-e;i++) {
			c=pow((-1),i)*pow(x,2*i)/fac(i*2);
			s+=c;
		}
		in<<x<<' '<<s<<' '<<cos(x)<<'\n';
		}
		return 0;
	}
/*
Результаты
-1 0.540303 0.540302
-0.9 0.621599 0.62161
-0.8 0.696703 0.696707
-0.7 0.764841 0.764842
-0.6 0.825335 0.825336
-0.5 0.877582 0.877583
-0.4 0.921061 0.921061
-0.3 0.955337 0.955336
-0.2 0.980067 0.980067
-0.1 0.995004 0.995004
-1.38778e-016 1 1
0.1 0.995004 0.995004
0.2 0.980067 0.980067
0.3 0.955338 0.955336
0.4 0.921061 0.921061
0.5 0.877582 0.877583
0.6 0.825335 0.825336
0.7 0.764841 0.764842
0.8 0.696703 0.696707
0.9 0.621599 0.62161
1 0.540303 0.540302
*/
