#include <iostream>

using namespace std;

int main()
{
    int score = 0;
    cout << "Enter your score"<< endl ;
    cin >> score;
    if(score >= 0 && score <=39){
        cout << "your grade is F" << endl;
        }else if(score >=40 && score <=44){
            cout << "Your grade is E" << endl ;
        }else if(score >=45 && score <=50){
            cout << "Your grade is D" << endl ;
        }else if(score >=51 && score <=59){
            cout << "Your grade is C" << endl ;
        }else if(score >=60 && score <=69){
            cout << "Your grade is B" << endl ;
        }else if(score >=70 && score <=100){
            cout << "Your grade is A" << endl ;
        }else{
            cout << "Invalid input. Please enter score between 0 to 100:" << endl ;
        }
    return 0;
}
