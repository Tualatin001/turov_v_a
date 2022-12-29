#include <iostream>
#include "Vec.h"
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <fstream>
int main(int argc, char** argv){
	double a=0;
	double b=0;
	double m=0;
	double g=0;
	double r=0;
	double k=0;
	sp tel;
	vec2d v;
	std::cin>>tel.pz.x>>tel.pz.y>>tel.spd.x>>tel.spd.y>>k>>m>>v.x>>v.y;
	std::ofstream ot("A.csv");
	for(double n=0;;n+=a) {
		a=rast(tel.pz,v)/dl(tel.spd)/40;
		tel.usc=(v-tel.pz)*k-(tel.spd/dl(tel.spd))*m;
		tel.spd+=tel.usc*a;
		tel.pz+=tel.spd*a;
		ot<<tel.pz.x<<','<<tel.pz.y<<'\n';
		if(dl(tel.usc)<0.5&&rast(tel.pz,v)<1) {
			std::cout<<"prityanulos \n";
			break;
		}
	}
}
