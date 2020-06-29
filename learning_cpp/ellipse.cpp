// Program to draw a ellipse
# include <iostream>
# include <cmath>
using namespace std;

// initilize the macros
# define CLS (cout << "\033[2J")
# define LOCATE(r,c)   (cout << "\033[" << (r) << ';' << (c) <<'H')
# define DOT(x,y)  (LOCATE(y,x) << '*')


// initilize the constants 
# define PI 3.1416
# define Mx 40
# define My 12  // (My, Mx) is the center of the ellipse
# define A 25
# define B 10


int main(){
	
	int x,y;
	
	CLS;
	for (double t = 0.0; t <= PI/2; t += 0.03){
		x = (int) (A*cos(t) + 0.5);
		y = (int) (B*sin(t) + 0.5);
		
		DOT(x+Mx, y+My);
		DOT(x+Mx, -y+My);
		DOT(-x+Mx, y+My);
		DOT(-x+Mx, -y+My);
		}
		
		LOCATE(24,0);
		return 0;
	}
		
	
