//WAP to create a quiz application

#include <iostream>
using namespace std;

int main() {
    int score = 0;
    char answer;

    cout << "===== QUIZ APPLICATION ====="<<endl;

    cout << "\n1. What is the capital of India?"<<endl;
    cout << "a) Mumbai\nb) Delhi\nc) Kolkata\n";
    cout<<"Answer: ";
    cin >> answer;

    if(answer == 'b' || answer == 'B')
        score++;

    cout << "\n2. How many continents are there?"<<endl;
    cout << "a) 5\nb) 6\nc) 7\n";
    cout<<"Answer: ";
    cin >> answer;

    if(answer == 'c' || answer == 'C')
        score++;

    cout << "\n3. Who is known as the Father of Computers?"<<endl;
    cout << "a) Charles Babbage\nb) Alan Turing\nc) Bill Gates\n";
    cout<<"Answer: ";
    cin >> answer;

    if(answer == 'a' || answer == 'A')
        score++;

    cout << "\nQuiz Finished!\n";
    cout << "Your Score: " << score << "/3\n";

    if(score == 3)
        cout << "Excellent!";
    else if(score == 2)
        cout << "Good Job!";
    else
        cout << "Keep Practicing!";
    cout<<endl;

    return 0;
}