# include <iostream>
# include <cmath>
using namespace std;

inline bool check(double, double, double);
void quadEquation(double, double, double , double *, double *);


int main(){
	bool flag = false;
	double a , b, c, x1 = 0, x2 = 0;
	
	cout << "Enter the coefficients : " ;
	cin >> a >> b >> c;
	
	flag = check(a,b,c);
	if(flag){
		quadEquation(a,b,c,&x1,&x2);
		cout << "solutions : \n x1 = " << x1 
		<< "\t\t" << "x2 = " << x2 << endl;
	}
	else cout << "None or no real solution!" << endl;
	
	return 0;
}


bool check(double a, double b, double c){
	if((pow(b, 2) - 4*a *c) < 0)
	return false;
	else return true;
}

void quadEquation(double a, double b, double c, double *p1, double *p2){   
	*p1 = (-b + sqrt((pow(b,2) - 4*a*c)))/(2*a);
	*p2 = (-b - sqrt((pow(b,2) - 4*a*c)))/(2*a);
}
