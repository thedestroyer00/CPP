//simple cpp program to check password word:


# include <iostream>
# include <iomanip>
# include <string>
# include <ctime>
using namespace std;

bool getpassword(void);
bool changepassword(void);
void booking(void);
long timediff(void);

static string secret = "ISUS";
static long maxcount = 3, maxtime= 60;
static string header = "Login", line(100, '-');

int main(){

	cout << setw(50) << header << endl;
	cout << line << endl;
	char cmd;
	
	do{
		cout << "B = Booking" << endl;
		cout << "E = End of program" << endl;
		cin.sync();
		cin.get(cmd);
		cmd = toupper(cmd);
		}while(cmd != 'B' && cmd !='E');
	
	if(cmd=='B') booking();
	else cout << "Exiting..." << endl;
	
	return 0;
}


//Get password from user.
bool getpassword(){
	bool ok_flag = false;
	string word;
	int count = 0, time = 0;
	timediff();
	
	//check number of attempts and time duration.
	while(!ok_flag && ++count <= maxcount){
		cout << "\n\nInput the password:  ";
		cin.sync();
		cin >> setw(20) >> word;
		time += timediff();
		if(time>=maxtime) break;
		if(word != secret)
		cout << "Invalid password!" << endl;
		else ok_flag = true;
	}
	return ok_flag;
}



bool changepassword(void){
	string password1, password2;
	
	cout << "Enter your new password : ";
	
	cin.sync();
	cin.clear();
	cin >> setw(20) >> password1; //get new-password
	
	//check length of new password.
	if(password1.length() > 3){
	cout << "Re-enter your password : ";
	cin.sync(); //clear input buffer
	cin.clear();
	cin >> setw(20) >> password2; 
	
	if(password1 == password2){
		secret = password1;
		return true;
	}
	else{
		cout << "Password not match!" << endl;
		return false;
	}
}
	else{
		cout << "Password length too short" << endl;
		return false;}
}
	
long timediff(){
	static long sec = 0;
	long oldsec = sec;
	time( &sec);
	return (sec - oldsec);
}
	
void booking(){
	char change ;
	if(getpassword()){
		cout << "Login Successfull!" << endl;
		cout << line << endl;
		
		do{
		cout << "Change password! [y/n]" << endl;
		cin.sync(); //clear input buffer
		cin.get(change);
		change = toupper(change);
		}while(change != 'Y' && change != 'N');
		
		if(change =='Y')
			if(changepassword()) cout << "password changed!" << endl;
			else cout << "password not changed!" << endl;
		else cout << "Thank you!" << endl;
		
		cout << line << endl;
	}
	else
	cout << "\nAccsess deined!" << endl;
	
}
	
