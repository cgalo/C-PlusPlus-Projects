/*
 * Written by: Carlos Galo
 * Project: Math Tutor
 *         Program that displays a menu with different options. User can enter
 *         1, 2, 3 or 4 for choosing an addition, subtraction, multiplication,
 *         or division test. After a test is finished, the menu will reappear. 
 *         The user can choose another test or enter 5 to exit the system. Each
 *         test generates two random single digit number to form a question for
 *         addition, subtraction, multiplication, or division. 
 */

#include <iostream>
#include <cstdlib>
using namespace std;

void addition (int random_1, int random_2){
    int add = random_1 + random_2;
    cout << "What is " << random_1 << " + " << random_2 << " : ";
    int     answer;
    cin  >> answer;
    if (answer == add)
        cout << "Correct\n" << endl;
    else 
        cout << "Your answer is wrong. The correct answer is " << add << "\n"
             << endl;
}

void subtraction (int random_1, int random_2){
    int sub = random_1 - random_2;
    cout << "What is " << random_1 << " - " << random_2 << " : ";
    int     answer;
    cin  >> answer;
    if (answer == sub)
        cout << "Correct\n" << endl;
    else
        cout << "Your answer is wrong. The correct answer is " << sub << "\n"
             << endl;
}

void multiplication (int random_1, int random_2){
    int multi = random_1 * random_2;
    cout << "What is " << random_1 << " * " << random_2 << " : ";
    int     answer;
    cin  >> answer;
    if (answer == multi)
        cout << "Correct\n" << endl;
    else
        cout << "Your answer is wrong. The correct answer is " << multi << "\n"
             << endl;
}

void division (int random_1, int random_2){
    int div = random_1/random_2;
    cout << "What is " << random_1 << " / " << random_2 << " : ";
    int     answer;
    cin  >> answer;
    if (answer == div)
        cout << "Correct\n" << endl;
    else
        cout << "Your answer is wrong. The correct answer is " << div << "\n"
             << endl;
}

int main(){
    int done(0);
    do {
        cout << "Main Menu\n"         << "1: Addition\n" << "2: Subtraction\n" 
             << "3: Multiplication\n" << "4: Division\n" << "5: Exit\n" 
             << "Enter a choice: ";
        int     choice;
        cin  >> choice;
        int random_1(0), random_2(1);
        while (random_1 < random_2){
            random_1 = rand() % 10;
            random_2 = rand() % 10;
        }
        switch (choice){
            case 1: addition       (random_1,random_2); break;
            case 2: subtraction    (random_1,random_2); break;
            case 3: multiplication (random_1,random_2); break;
            case 4: division       (random_1,random_2); break;
            case 5: done = 5;
        }
        
    }while (done != 5);
    
    return 0;
}

