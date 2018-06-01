/*
 * Written By: Carlos Galo
 * Project: Finding Smallest & Biggest Element
 *         Program that finds the smallest and biggest elements in an array
 *         of double values using functions.
 */
#include <iostream>
using namespace std;

double min(double list[], const int size){
    double lowest = list[1];
    for (int i = 0; i < size; i++){
        if (list[i] < lowest) lowest = list[i];
    }
    return lowest;
}
double max(double list[], const int size){
    double largest = list[1];
    for (int i = 0; i < size; i++){
        if (list[i] > largest) largest = list[i];
    }
    return largest;
}
int main(){
	cout << "Program to determine lowest and largest number in a list of "
             << "10 numbers.\n" << endl;
        const int size(10);
        double list[size];
	for (int i = 0; i < size; i++){
            cout << "Enter number: ";
            cin  >> list[i];
	}
        cout << "\nThe lowest number is: " << min(list, size) << endl;
        cout << "The largest number is: "  << max(list, size) << endl;
	return 0;
}
