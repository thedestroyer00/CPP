/*Read  a  sequence  of  words  from  cin  and  store  the  values  avector.  
After  you’ve  read  all  the  words,  process  the  vector  and  changeeach  word  to  uppercase. 
*/

# include <iostream>
# include <vector>
# include <string>
# include <cctype> 
using namespace std;

int main(){
	vector<string> vstr;
	string str;
	
	while(cin >> str)
		vstr.push_back(str);
		
	for(auto &c : vstr)
		for(auto &ch : c){
			ch = toupper(ch);
		}
		
	for(auto s : vstr)
		cout << s << " " ;
	cout << endl;
	
	return 0;
}
			
	
	
