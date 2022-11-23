#include <iostream>
#include <cmath>
#include <iostream>
#include <algorithm>
int main(int argc, char** argv) {
	long long int a=0, b=0, c=0, d=0, e=0, max=-999;
	long long int t=0, n=0, m=0;
	long int flag=0;
	std::cin>>t;
	long long i=0;
	long long l=0;
	while(t--) {
		b=0;
		c=0;
		l=0;
		flag=0;
		std::cin>>n>>m;
		max=-999;
		a=n;
		while(a%2==0) {
			a/=2;
			b++;
		}
		a=n;
		while(a%5==0) {
			a/=5;
			c++;
		}
		d=(b>c? 5:(b==c? 10:2));
		e=abs(b-c);
		for(i=pow(d,e);i>0;) {
			if(i<m) break;
			i/=d;
		};

	if(i==0) {
		std::cout<<m*n<<'\n';	
	} else {
				l=log10(m/i);
		l=pow(10, l);
		std::cout<<((long long)(m/(i*l))*i*n*l)<<'\n';
	}	
	}
	return 0;
}
