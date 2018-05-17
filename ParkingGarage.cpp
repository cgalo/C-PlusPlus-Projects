/*
 * Written by: Carlos Galo
 *Project: The Little Parking Garage:
 *        A Parking garage has 5 cosutmers daily. The garage charges a $5.00 min. fee to park up to two hours. The garage
 *        charges an additional $1.00 per hour for each (or part of an hour) over two hours. The max charge for any given day
 *        is $12.00. All Cars are gone by midnight. Program calculates and prints a summary of the charges for a day. For
 *        input the program will read the hours of usage for each of the 5 cars. The program will print the results in the 
 *        form of a table in a neat format
 */

#include <iostream>
#include <string>
#include <tgmath.h>
using namespace std;

int main (){
    double tot_hrs, hrs, tot_charge;
    int round_hrs;
    for (int i = 1; i < 6; i++){                                //For loop for to calculate the 5 cars
        cout << "Enter the hours parked for car " << i << ": "; //User input
        cin  >> hrs;
        if (hrs < 2){                                           //If less than 2hrs. charge only 5$
            tot_charge += 5;
        }
        else if (hrs > 9){                                     //If more than 9hrs. charge only max ($12.00)
            tot_charge += 12; 
        }
        else if (hrs >= 2){                                    //If more equal or more than 2 hours then charge $5 + $1 per hour
            round_hrs   = ceil(hrs);
            tot_charge += 5 + (round_hrs-2.0);
        }
        tot_hrs += hrs;                                         //Adds the hours per loop to total hours of the whole for-loop
    }     
    cout << "Total Hours "   << tot_hrs    << endl;             //Output
    cout << "Total Charge $" << tot_charge << endl;
    
    return 0;
}
