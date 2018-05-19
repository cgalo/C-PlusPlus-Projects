/*
 * Written by: Carlos Galo
 * Project: Fastest Runner
 *        Program that stores the names of the runners in an array. Prints the list of runners and times (given). Then prints 
 *        the name of the fastest runner and his/her time (in hours and minutes). Also, find the second fastest runner. Print 
 *        the name and his/her time (in hours and minutes).
 */


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int numRunners(16);            
int best_time(449), sec_time(500);
string best_runner, sec_runner;
string names[] = { "Elena", "Thomas", "Hamilton", "Suzie", "Phil", "Matt",
                   "Alex", "Emma", "John", "James", "Jane", "Emily", 
                   "Daniel", "Neda","Aaron", "Kate" };
int times[]    = { 341, 273, 278, 329, 445, 402, 388, 275, 243, 334, 412,
                   393, 299, 343, 317, 265 };

int main() {
    cout << "Columbus Marathon Student Results\n" << endl;
    cout << "Runners" << setw(10) << "Times" << setw(5) << endl; 
    for (int i = 0; i < numRunners; i++){        
        if (times[i] < best_time){
            best_time   = times[i];
            best_runner = names[i];
            }
        else if (times [i] < sec_time and sec_time > best_time){
            sec_time   = times[i];
            sec_runner = names[i];
        }
        cout << names[i] << ": " << setw(10) << times[i] << endl;
    }
    cout << "\nFirst place was: "  << best_runner << "\n--With time: " 
         << best_time/60 << " hours & " << best_time%60 << " minutes!" << endl;
    cout << "\nSecond place was: " << sec_runner  << "\n--With time: " 
         << sec_time/60  << " hours & " << sec_time%60  << " minutes!" << endl;
    return 0;
}
