/*
 * Written by: Carlos Galo
 * Project: Oldest Person
 *        Program will calculate oldest person given the input of the user. I'll need input of current age and [full] name
 *        the person. It'll continue until user inputs "quit" (non-case sensitive) and it will terminate by giving output
 *        of the name and age of the oldest person.
 */
#include <iostream>
#include <string>
using namespace std;

string strToUpper (string S) {
    for (size_t i=0; i < S.length(); i++) S[i] = toupper(S[i]);
    return S; 
}
int main(){
    cout << "Program helps finding out oldest person\n" 
         << "To quit program type QUIT" << endl;
    int    oldest_age(0);                                 
    string oldest_name("NONE");                           
    int    done(1);                                     
    do {
        cout << "\nEnter name: ";
        string name; 
        getline (cin >> ws, name);
        name = strToUpper  (name);                      
        done = name.compare("QUIT");
        if (done){
            cout << "Enter age: ";
            int age;
            cin  >> age;
            if (age > oldest_age){
                oldest_age  = age;
                oldest_name = name;
            }
            else if (age == oldest_age) {          
                cout << "\nProblem, two people share the same age!" << endl;
                cout << "Who is older " << oldest_name << " or " 
                     << name << ": ";
                getline (cin >> ws, name);
                oldest_name = strToUpper(name);
                oldest_age  = age;                      
            }
        }
    } while (done);
    cout << "\nOldest person is " << oldest_name << " with the age of " 
         << oldest_age << "." << endl; 
    return 0;
}
