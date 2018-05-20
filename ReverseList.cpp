/*
 * Written by: Carlos Galo
 * Project: Reverse List
 *          Program that reads in a series of positive integers terminated by -1. The values are stored in an array. The 
 *          program then prints the values in reverse order as well as the average (to one decimal place).
 */

#include <iostream>
#include <iomanip>
using namespace std;

void printArray (int list[], int size){
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}
void reverse(int list[], int newList[], int size){
    for (int i = 0, j = size - 1; i < size; i++, j--)
        newList[j] = list [i];
}

int main(){
     cout << "Reverse list program for postive integers."  << endl
          << "Note: To finish your list type \"-1\" \n"    << endl;
    int size(0), done(0), list[size];
    double tot_sum, list[size];
    do{
        cout << "--Enter positive integer: ";
        double temp_num;
        cin  >> temp_num;
        if (temp_num  != -1) {
            list[size] = temp_num;
            tot_sum   += temp_num; 
            size++;
        }
        else done  = 1 ;
    } while (done == 0);
    
    int rev_list[size];
    reverse (list, rev_list, size);
    
    cout << "Your list was:\n ";
    printArray (list, size);
    cout << endl;
    
    cout <<"New reversed list:\n ";
    printArray(rev_list, size);
    cout << endl;
    
    double avg = tot_sum/size;
    
    cout << "Average of the numbers in the list is: " << setprecision(1) << avg
         << endl;
    return 0;
}
