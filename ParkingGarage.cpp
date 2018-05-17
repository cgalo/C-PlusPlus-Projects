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
 
int main(){
  double tot_hrs; hrs; tot_charge;
  int round_hrs;
  for (int i = 1; i < 6; i++){
    cout << "Enter the hours parked for car " << i << ": ";
    cin  >> hours;
    if (hrs < 2 ){
      tot_charge += 5;
    }
    else if (hrs > 9) {
      tot_charge += 12;
    }
    else if (hrs >= 2){
      round_hrs   = ceil(hrs);
      tot_charge += 5 + (round_hrs-2.0);
    }
    tot_hrs += hrs;
  }
  cout << "Total Hours "   << tot_hrs    << endl;
  cout << "Total Charge $" << tot_charge << endl;
 
  return 0;
}
