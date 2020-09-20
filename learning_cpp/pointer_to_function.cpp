//simple program to show how use pointer to funcion

# include <iostream>
using namespace std;

//declaration for a function that takes 2 int and return int
int  return_sum(int, int); 

//(alias) func represents a pointer to a function that takes 2 ints and return int
typedef decltype(return_sum) *func;

//using func to declare a function that takes 2 ints and return a pointer to 
// function that takes 2 ints and return int
func outer_function(int, int, func);


int main(){
	int i = 100, j = 200;
	
	//created a variable of type func (i.e. pointer function that takes 2 ints and return int)
	//call's outer_function and assignes the pointer to return_function to fp
	//statement becomes (fp = return_sum;)
	func fp = outer_function(i, j,return_sum);
	
	//call the return_sum function through pf using pointer
	cout << fp(i,j) << endl;
	
	return 0;
}

int return_sum(int a, int b){
	return (a + b);//return sum of two ints
}

func outer_function(int x ,int y, func function1){
	cout << "outer function invoked" << endl;
	cout << "parameters taken: " << x << "  " << y << endl;
	return function1;//returns a pointer to function1
	
}
