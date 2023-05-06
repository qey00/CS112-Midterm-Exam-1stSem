/* Create a program that will prompt the user to input for the sequence
value. The minimum value is 2 and the maximum value is 10 only! The program will
also compute the total sum of the series. The program will also prompt the user either
to reset or exit the program. Apply the concept of for loping statement and conditional statement. */

#include <iostream>
using namespace std;

int main(){
    char choice;
    double sum, in;

    do{

    cout<<"Enter a number between 2 and 10: ";
    cin>>in;
    if ( in>=2 && in<=10 ){
        for (int i=1; i<=in; i++){
        cout<<i<<" ";
        sum = i + sum;
        }
    }else{
        cout << "ERROR!" << endl ;
        continue;
    }
    if (in>=2 && in<=10){
        cout<<"\nThe sum is "<<sum;
    }
    
    

    cout << endl;
    cout << "Press 'r' to reset or any key to exit: ";
    cin >> choice;

    } while(tolower(choice) == 'r');

    return 0;
}