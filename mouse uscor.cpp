#include <iostream>
#include "Vec.h"
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>



int main(int argc, char** argv) {
	double b=0;
	double L=0, c1=0, c2=0;
	double a=0;
	double V=0;
	sp mouse;
	sp cat;
	vec2d v;
	std::cout<<"Cat.spd(L), Cat.posicion(x,y), Mouse.spd(x,y), Mouse.posicion(x,y) , C1,C2\n";
	std::cin>>L>>cat.pz.x>>cat.pz.y>>mouse.spd.x>>mouse.spd.y>>mouse.pz.x>>mouse.pz.y>>c1>>c2;
	b=rast(mouse.pz,cat.pz)/(L*30);
	std::ofstream ot("C.csv");
	for(double n=b;;n+=b) {
		if(obgon(mouse, cat)) {
			std::cout<<"sedena \n";
			break;
	}
	mouse.usc=(mouse.pz-cat.pz)*c1/(dl(mouse.pz-cat.pz)+c2);
	mouse.spd+=mouse.usc*b;
	cat.spd=(mouse.pz-cat.pz)*L/rast(mouse.pz,cat.pz);
	cat.pz+=cat.spd*b;
	mouse.pz+=mouse.spd*b;
	b=rast(mouse.pz,cat.pz)/(dl(mouse.spd-cat.spd)*100);
	ot<<b<<','<<mouse.pz.x<<','<<mouse.pz.y<<','<<cat.pz.x<<','<<cat.pz.y<<'\n';
		if(L<=dl(mouse.spd)&&(cat.spd.y*mouse.spd.y>=0)&&(cat.spd.x*mouse.spd.x>=0)){
			std::cout<<"ubezhala \n";
			break;
		}
		if(colis(mouse.pz,cat.pz)){
			std::cout<<"sedena \n";
			break;
		}
		if(colis(mouse.pz,v)) std::cout<<"v norce \n";
		}	
		ot.close();
	return 0;
}
