

#include <iostream>
using namespace std;

void printArray (int list[], int size){
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
}
void reverse(int list[], int newList[], int size){
    for (int i = 0, j = size - 1; i < size; i++, j--){
        newList[j] = list [i];
    }
}

int main(){
    int size(0), done(0), list[size];
    double tot_sum(0);
    do{
        cout << "Enter positive integer: ";
        int temp_num;
        cin  >> temp_num;
        
        if (temp_num != -1) {
            list[size] = temp_num;
            tot_sum   += temp_num; 
            size++;
        }
        else done  = 1;
    } while (done == 0);
    
    int rev_list[size];
    reverse (list, rev_list, size);
    
    cout << "Your list was:\n ";
    printArray (list, size);
    cout << endl;
    
    cout <<"New reversed list:\n ";
    printArray(rev_list, size);
    cout << endl;
    
    cout << "Average of the numbers in the list is: " << tot_sum/size << endl;
    return 0;
}
