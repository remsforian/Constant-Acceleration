\\ distanace = (1/2) a t^2 
\\ a should be converted to m/s
\\ also need to account for half the time being in deceleration, we can just have const acceleration to the half way point. 
\\ create a corordinate system (2d) where all the planets lie
\\ pick a t = 0 position for the planet position.
\\ allow for an "advanced" mode that would let you put in corordinates. 
\\ we can assume mose orbits are spherical, so velocity is a function of radius
\\ Days are the base unit this program uses

#include <iostream>
#include <cmath>
#define PI 3.14159265
#include <vector>

const double msun = 1.989e30; \\mass of the sun
const double G = 6.6743e-11; \\gravitational constant
const double t_0 = 1e150; \\time = 0. Large to make initial planet conditions somewhat random
const double g = 9.808e-3; \\value of 1g of acceleration in km/s^2
const double c = 299792.458; \\the speed of light in km/s

double mercuryloc(t,o){

double T = 88; \\orbital period in days
double d = 57e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T);
double x = d * cos((t/2*PI)/T);

if (o == "x") {

return x;

}

else if (o == "y") {

return y;

}

else if (o == "v") {

return v;

}

else {

return;

}

}


double venusloc(t,o){

double T = 224.7; \\orbital period in days
double d = 108.2e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T);
double x = d * cos((t/2*PI)/T);

}

double earthloc(t,o){

double T = 365.25; \\orbital period in days
double d = 149.6e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T); 
double x = d * cos((t/2*PI)/T);

}

double marsloc(t,o){

double T = 687; \\orbital period in days
double d = 228e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T);
double x = d * cos((t/2*PI)/T);

if (o == "x") {

return x;

}

else if (o == "y") {

return y;

}

else if (o == "v") {

return v;

}

else {

return;

}

}

double jupiterloc(t,o){

double T = 4331; \\orbital period in days
double d = 778.5e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T);
double x = d * cos((t/2*PI)/T);


if (o == "x") {

return x;

}

else if (o == "y") {

return y;

}

else if (o == "v") {

return v;

}

else {

return;

}
}

double saturnloc(t,o){

double T = 10747; \\orbital period in days
double d = 1432e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T);
double x = d * cos((t/2*PI)/T);

if (o == "x") {

return x;

}

else if (o == "y") {

return y;

}

else if (o == "v") {

return v;

}

else {

return;

}
}

double uranusloc(t,o){

double T = 30589; \\orbital period in days
double d = 2867e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T);
double x = d * cos((t/2*PI)/T);

if (o == "x") {

return x;

}

else if (o == "y") {

return y;

}

else if (o == "v") {

return v;

}

else {

return;

}
}

double neptuneloc(t,o){

double T = 59800; \\orbital period in days
double d = 4515e6; \\distance from sun
double v = sqrt ((G * msun)/d);
double y = d * sin ((t/2*PI)T);
double x = d * cos((t/2*PI)/T);

if (o == "x") {

return x;

}

else if (o == "y") {

return y;

}

else if (o == "v") {

return v;

}

else {

return;

}
}

double calculate(x0,xf,y0,yf,a){

double dist = sqrt((xf-x0)*(xf-x0)+(yf-y0)*(yf-y0); \\distance between points 
double distfab = dist/2; \\distance to flip and burn 
double ak = a * g; \\acceleration in km/s
double c0 = sqrt(x0*x0+y0*y0); \\distance from dest to sun
double cf = sqrt(xf*xf+yf*yf); \\dist from final to sun
\\ d = 0.d5 * a * t^2 . t^2 = d/(0.25 * c) 
double time = 2 * sqrt(dist/a); \\calculate the time in seconds 

return time;

}


int main(){

std::cout << "Pick Starting Location \n \"Mercury\" \n \"Venus\" \n \"Earth\" \n \"Mars\" \n \"Jupiter\" \n \"Saturn\" \n \"Uranus\" \n \"Neptune\" \n Coordinate Input \n";
std::cin >> start; \\get starting location

std::cout << "Pick Ending Location \n \"Mercury\" \n \"Venus\" \n \"Earth\" \n \"Mars\" \n \"Jupiter\" \n \"Saturn\" \n \"Uranus\" \n \"Neptune\" \n Coordinate Input \n";
std::cin >> end; \\get ending locetion

std::cout << "How long in days has it been since t_0 \n";
std::cin >> t; \\take time from begining
int t = t + t_0; \\take into account initial conditions

std::cout << "What is the acceleration in gs \n";
std::cin >> a; \\get the acceleration value

\\function calls to put variables into main

if (start == "Mercury"){

stx = mercuryloc(t,x); \\begining x position
sty = mercuryloc(t,y); \\begining y position
stv = mecruryloc(t,v); \\initial velocity

}

else if (start == "Venus"){

stx = venusloc(t,x); \\begining x position
sty = venusloc(t,y); \\begining y position
stv = venusloc(t,v); \\initial velocity

}

else if (start == "Earth"){

stx = earthloc(t,x); \\begining x position
sty = earthloc(t,y); \\begining y position
stv = earthloc(t,v); \\initial velocity

}

else if (start == "Mars"){

stx = marsloc(t,x); \\begining x position
sty = marsloc(t,y); \\begining y position
stv = marsloc(t,v); \\initial velocity

}

else if (start == "Jupiter"){

stx = jupiterloc(t,x); \\begining x position
sty = jupiterloc(t,y); \\begining y position
stv = jupiterloc(t,v); \\initial velocity

}

else if (start == "Saturn"){

stx = saturnloc(t,x); \\begining x position
sty = saturnloc(t,y); \\begining y position
stv = saturnloc(t,v); \\initial velocity

}

else if (start == "Uranus"){

stx = uranusloc(t,x); \\begining x position
sty = uranusloc(t,y); \\begining y position
stv = uranusloc(t,v); \\initial velocity

}

else if (start == "Neptune"){

stx = neptuneloc(t,x); \\begining x position
sty = neptuneloc(t,y); \\begining y position
stv = neptuneloc(t,v); \\initial velocity

}

else if (start == "Coordinate Input"){

cout << "What are the coordinates of your object in x followed by y"; \\get user input
cin >> double stx;
cin >> double sty;
double stv = 0;

}


else if (end == "Mercury"){

enx = mercuryloc(t,x); \\begining x position
eny = mercuryloc(t,y); \\begining y position
env = mecruryloc(t,v); \\initial velocity

}

else if (end == "Venus"){

enx = venusloc(t,x); \\begining x position
eny = venusloc(t,y); \\begining y position
env = venusloc(t,v); \\initial velocity

}

else if (end == "Earth"){

enx = earthloc(t,x); \\begining x position
eny = earthloc(t,y); \\begining y position
env = earthloc(t,v); \\initial velocity

}

else if (end == "Mars"){

enx = marsloc(t,x); \\begining x position
eny = marsloc(t,y); \\begining y position
env = marsloc(t,v); \\initial velocity

}

else if (end == "Jupiter"){

enx = jupiterloc(t,x); \\begining x position
eny = jupiterloc(t,y); \\begining y position
env = jupiterloc(t,v); \\initial velocity

}

else if (end == "Saturn"){

enx = saturnloc(t,x); \\begining x position
eny = saturnloc(t,y); \\begining y position
env = saturnloc(t,v); \\initial velocity

}

else if (end == "Uranus"){

enx = uranusloc(t,x); \\begining x position
eny = uranusloc(t,y); \\begining y position
env = uranusloc(t,v); \\initial velocity

}

else if (end == "Neptune"){

enx = neptuneloc(t,x); \\begining x position
eny = neptuneloc(t,y); \\begining y position
env = neptuneloc(t,v); \\initial velocity


else if (end == "Coordinate Input"){

cout << "What are the coordinates of your object in x followed by y"; \\get user input
cin >> double enx;
cin >> double eny;
double stv = 0;

}

double sec = calculate(stx,enx,sty,eny,a); \\get the time in seconds for the function
double days = sec / 86400; \\time in days for the journey

std::cout << "The journey will take " << days << " to complete.\n"; \\tell the user 

}
