//program  to  use  a  conditional  operator  to  
//find  theelements  in  a  vector<int>  that  
//have  odd  value  and  double  the  value  
//of each such element.

# include <iostream>
# include <vector>
# include <cstdlib>
# include <ctime>
using namespace std;


int main(){
	vector<int> vint;
	srand(time(NULL));
	
	while(vint.size() < 20){
		int val = (rand()/1000);
		if(val < 1000)
			vint.push_back(val);
		}
		
	auto b = vint.begin(), e= vint.end();
	while(b != e){
		cout << *b << " " ;
		++b;
	}
	cout << endl << endl;
	
	b = vint.begin();
	while(b != e){
		*b = ((*b%2) ? (*b * 2) : *b);
		++b;
	}
	
	b = vint.begin();
	while(b != e){
		cout << *b << " ";
		++b;
	}
	
	return 0;
}
		
		  
	
