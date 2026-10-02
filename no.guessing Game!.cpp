#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	int secretNumber,guess;
	int attempts=0;
	const int maxAttempts = 5;

	//  Generate a random number between 1 to 100
	srand(time(0));
	secretNumber =rand() % 100 + 1;

	cout<<"Guess a number between 1 and 100:";
	cout<<"You have 5 chances!"<<endl;

	do{
        cout<<"Enter your guess:";
        cin>>guess;
        attempts++;

	   if(guess > secretNumber){
	   	 cout<<"No. is High! Try again..."<<endl;
	   }
	   else if(guess < secretNumber){
	   	  cout<<"No. is Low! Try again..."<<endl;
	   }
	   else{
	   	 cout<<"Congratulations! You guessed it!"<<endl;
	   	 break;
	   }
	  }
	   while(attempts < maxAttempts);
	    if(guess != secretNumber){
            cout<<"Game Over!"<<endl;
	    }
     return 0;
}
