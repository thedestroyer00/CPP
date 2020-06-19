/*
Write a program for the following numerical game:
The computer stores a random number between 1 and 15 and the player
(user) attempts to guess it.The player has a total of three attempts.After each
wrong guess, the computer tells the user if the number was too high or too low.
If the third attempt is also wrong, the number is output on screen.
The player wins if he or she can guess the number within three attempts.
The player is allowed to repeat the game as often as he or she wants.
*/

# include <iostream>
# include <ctime>
# include <cstdlib>

using namespace std;

int main(){
	
	long sec;
	time(&sec);
	srand(sec);
	int num = rand()%16, life, guess;
	
	cout << "Guess a number (0-15) : ";
	cin >> guess;	
	for(life = 1; life >= 0; --life){
		if(num == guess) break;
		
		else{
			if(guess > num){
				cout << "Your guess is high!" << endl;
			}
			else{
				cout << "Your guess is low!" << endl;
			}
			
			cout << "Wrong. You have "
			<< life + 1 << " more life!" << endl;
			cout << "Guess again: ";
			cin >> guess;
			if(guess == num) break;	
			}
		}
	
	life >= 0 ? cout << "You guessed it. The number is "
	 << num : cout << "You lose! The number is " << num;
	return 0;
}
