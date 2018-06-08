#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

const int words(4), num_tries(5);
string easy_words[]   = {"INDIA", "CUBA", "PERU", "IRAN", "CHINA" };
string medium_words[] = {"AUSTRALIA", "PANAMA", "FRANCE", "GERMANY", "BELIZE"};
string hard_words[]   = {"HONDURAS", "GUATEMALA", "LUXEMBOURG", "ARGENTINA", 
                         "AFGHANISTAN" };  

int letterFill (char guess, string word, string guessword){
    int matches(0), length(word.length());
    for (int i = 0; i < length; i++){
        if (guess == guessword[i]) {
            return 0;
        }
        if (guess == word[i]){
            guessword[i] = guess;
            matches++;
        }
    }
    return matches;
}
char upperLetter (char letter){
    char upperLetter = letter;
    if (letter >= 'A' && letter <= 'Z'){
        upperLetter = letter;
    }
    else if (letter >= 'a' && letter <= 'z'){
        upperLetter = static_cast <char> ('A'+ (letter - 'a'));
    }
    return upperLetter;
}
void game(string word, int mistakes){
    string unknown(word.length(), '*');
    cout << "\n" << unknown <<"\nWord has " << word.length() << " letters\nTry "
            "and guess the word!" << endl;
    cout << word << endl;
    while (mistakes < num_tries){
        cout << "Guess a letter: ";
        char    letter;
        cin  >> letter;
        letter = upperLetter(letter);  
        cout << letter << endl;
        if (letterFill(letter, word, unknown) == 0){
            cout << "Wrong! The letter is not within the word." << "\nYou have "
                 << num_tries - mistakes << " left." << endl;
            mistakes++;
        }
        else cout << "Correct" << endl;
    }
    if (unknown == word){
        cout << word << "\nYou got it!"  << endl;
        
    }
}
int main(){
    int done(0);
    cout << "Hangman Game - Country Edition\n" << endl;
    do{
        cout << "Main Menu\nPick a difficulty level\n1: Easy\n2: Medium\n3: Hard"
                "\n4: Quit Program"<< endl;
        cout << "Enter # of difficulty: ";
        int     choice;
        cin  >> choice;
        srand(time(NULL));
        int mistakes(0), num(rand()%5);
        string word;
        switch (choice){
            case 1: word = easy_words  [num]; game(word, mistakes); break;
            case 2: word = medium_words[num]; game(word, mistakes); break; 
            case 3: word = hard_words  [num]; game(word, mistakes); break; 
            case 4: cout << "You're exiting the game." << endl;
        }
        cout << "Do you want to play again (Y/N): ";
        char    answer;
        cin  >> answer;
        answer = upperLetter(answer);
        if (answer == 'Y') cout << "\n" << endl;
        else if (answer == 'N') {
            done = 1;
            cout << "You exited the game" << endl;
        }
    } while (done != 1);
    return 0;
}
