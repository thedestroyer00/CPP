//HELP NEEDED 
//tryig to change all the strings in the first paragraph to uppercase.
# include <iostream>
# include <string>
# include <vector>
# include <cctype>
using namespace std;

int main(){
	vector<string> vstr;
	string str ;
	
	//take input from standard input
	cout << "Enter first paragraph : " << endl;
	while (cin >> str)
		vstr.push_back(str);
	
	//adding a empty string in the vector to indicate a prargraph change
	string str1;
	vstr.push_back(str1);
	
	//adding a second paragraph
	vstr.push_back("This");
	vstr.push_back("is");
	vstr.push_back("the");
	vstr.push_back("end!");
	
	
	//changing all the strings in the first paragraph to uppercase.
	auto b = vstr.begin(), e= vstr.end();
	for(; b != e && !b->empty(); ++b){
		auto strb = (*b).begin(), stre = (*b).end();
		for(; strb != stre; ++strb){
			*strb = toupper(*strb);
		}
		}
			
	//print the vector 
	for(; b != e ; ++b)
		cout << *b << " " ;	 
	cout << endl;
	
	return 0;
}
