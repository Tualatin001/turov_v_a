#include <iostream>
#include "Vec.h"
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>



int main(int argc, char** argv) {
	double b=0,c=0,d=0,e=0,g=0;
	double L=0, c1=0, c2=0;
	long a=0;
	double V=0;
	sp mouse;
	sp cat;
	vec2d v;
		std::cout<<"Vvedite coordinaty mishki(y) i coshci(x)\n";
	std::cin>>mouse.pz.y>>cat.pz.x;
	mouse.spd.y=1.0;
	L=fabs(cat.pz.x/mouse.pz.y);
	b=rast(mouse.pz,cat.pz)/(L*30);
	sp pm=mouse;
	sp pc=cat;
	for(;!V;L+=0.001) {
		std::ofstream ot("C.csv");
		mouse=pm;
		cat=pc;
	for(double n=b;;n+=b) {
	e=L/rast(mouse.pz,cat.pz);
		if(obgon(mouse, cat)) {
			if(colis(mouse.pz,cat.pz)&&colis(mouse.pz,v)){
			V=1;
		}
			break;
	}
	cat.spd=(mouse.pz-cat.pz)*e;
			cat.pz+=cat.spd*b;
			mouse.pz+=mouse.spd*b;
	b=rast(mouse.pz,cat.pz)/(L*20);
	ot<<b<<','<<mouse.pz.x<<','<<mouse.pz.y<<','<<cat.pz.x<<','<<cat.pz.y<<'\n';
		if(L<=dl(mouse.spd)&&(cat.spd.y*mouse.spd.y>=0)&&(cat.spd.x*mouse.spd.x>=0)){
					if(colis(mouse.pz,v)){
			V=1;
		}
			break;
		}
		if((mouse.spd.x*mouse.pz.x>0.5)||(mouse.spd.y*mouse.pz.y>0.5)) {
		if(colis(mouse.pz,cat.pz)){
			V=1;
		}	
		break;
		}
		if(colis(mouse.pz,cat.pz)){
		if(colis(mouse.pz,v)){
			V=1;
		}
			break;
		}
		}	
		ot.close();
	}
	std::cout<<L<<'\n';
	return 0;
}
