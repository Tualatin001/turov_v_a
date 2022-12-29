#ifndef _Vec_H_
#define _Vec_H_
#include <cmath>
struct vec2d {
	double x=0.0;
	double y=0.0;
};
struct vecr {
	double l=0.0;
	double r=0.0;
};
struct sp{
	vec2d pz;
	vec2d spd;
	vec2d dop;
	vec2d usc;
};
bool operator == (vec2d a, vec2d b)
{
	return (a.x==b.x&&a.y==b.y);
}
bool operator == (vecr a, vecr b)
{
	return (a.r==b.r&&a.l==b.l);
}
vec2d operator + (vec2d a, vec2d b)
{
	a.x+=b.x;
	a.y+=b.y;
    return a;
}
vec2d& operator += (vec2d& a, vec2d b)
{
	a.x+=b.x;
	a.y+=b.y;
    return a;
}
vec2d operator - (vec2d a, vec2d b)
{
	a.x-=b.x;
	a.y-=b.y;
    return a;
}
vec2d& operator -= (vec2d& a, vec2d b)
{
	a.x-=b.x;
	a.y-=b.y;
    return a;
}
double operator * (vec2d a, vec2d b)
{
    return 	 (a.x*b.x+a.y*b.y);
}


vec2d operator / (vec2d a, double b)
{
	a.x/=b;
	a.y/=b;
    return 	a;
}
vec2d& operator /= (vec2d& a, double b)
{
	a.x/=b;
	a.y/=b;
    return 	a;
}
vecr operator / (vecr a, double b)
{
	a.l/=b;
    return 	a;
}
vecr& operator /= (vecr& a, double b)
{
	a.l/=b;
    return 	a;
}
vec2d& operator *= (vec2d& a, double b)
{
	a.x*=b;
	a.y*=b;
    return 	 a;
}
vec2d operator * (vec2d a, double b)
{
	a.x*=b;
	a.y*=b;
    return 	 a;
}
vec2d& operator *= ( double b,vec2d& a)
{
	a.x*=b;
	a.y*=b;
    return 	 a;
}
vec2d operator * (double b,vec2d a)
{
	a.x*=b;
	a.y*=b;
    return 	 a;
}
vecr operator + (vecr a, vecr b)
{
	vecr g;
	g.l=sqrt(a.l*a.l+b.l*b.l+2*b.l*a.l*cos(b.r-a.r));
	g.r=acos(fabs(a.l*cos(a.r)+b.l*cos(b.r))/g.l);
    return g;
}
vecr& operator += (vecr& a, vecr b)
{
	vecr g;
	g.l=sqrt(a.l*a.l+b.l*b.l+2*b.l*a.l*cos(b.r-a.r));
	g.r=acos(abs(a.l*cos(a.r)+b.l*cos(b.r))/g.l);
	a=g;
    return a;
}
vecr operator - (vecr a, vecr b)
{
	vecr g;
	g.l=sqrt(a.l*a.l+b.l*b.l-2*b.l*a.l*cos(a.r-b.r));
	g.r=acos(abs(b.l*cos(b.r)-a.l*cos(a.r))/g.l);
	return g;
}
vecr& operator -= (vecr& a, vecr b)
{
	vecr g;
	g.l=sqrt(a.l*a.l+b.l*b.l-2*b.l*a.l*cos(a.r-b.r));
	g.r=acos(abs(b.l*cos(b.r)-a.l*cos(a.r))/g.l);
	a=g;
	return a;
}
double operator * (vecr a, vecr b)
{
    return (a.l*b.l*cos(abs(a.r-b.r)));
}
vecr& operator *= (vecr& a, double b)
{
	a.l*=b;
    return a;
}
vecr operator * (vecr a, double b)
{
	a.l*=b;
    return a;
}
vecr& operator *= ( double b,vecr& a)
{
	a.l*=b;
    return a;
}
vecr operator * (double b,vecr a)
{
	a.l*=b;
    return a;
}
double prc(vec2d a, vec2d b) {
return (a.x*b.x+a.y*b.y)/sqrt(b.x*b.x+b.y*b.y);
}
double prc(vecr a, vecr b) {
return a.l*cos(abs(a.r-b.r));
}
double dl(vec2d b) {
return sqrt(b.x*b.x+b.y*b.y);
}
double rast (vec2d a, vec2d b) {
	return sqrt((a.y-b.y)*(a.y-b.y)+(a.x-b.x)*(a.x-b.x));
}
bool colis (vec2d a, vec2d b) {
	return (abs(a.x-b.x)<0.3&&abs(a.y-b.y)<0.3);
}
bool obgon (sp mouse, sp cat) {
	return (mouse.pz.x-cat.pz.x)*cat.spd.x<0&&(mouse.pz.y-cat.pz.y)*cat.spd.y<0||((mouse.pz.x-cat.pz.x)*cat.spd.x<0&&cat.spd.y==0)||(cat.spd.x==0&&(mouse.pz.y-cat.pz.y)*cat.spd.y<0);
}
#endif;
