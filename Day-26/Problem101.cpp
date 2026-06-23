//WAP to create a number guessing game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int secret= rand()%100+1;
    int guess, attempt=0;

    cout<<"Guess the number between 1 to 100: "<<endl;
    do{
        cout<<"Enter your guess: ";
        cin>>guess;
        attempt++;

        if(guess==secret){
            cout<<"You took "<<attempt<<" attempts to guess correctly"<<endl;
        }
        else if(guess>secret){
            cout<<"Your guess is high"<<endl;
        }
        else if(guess<secret){
            cout<<"Your guess is low"<<endl;
        }
    } while(guess!=secret);

    return 0;
}