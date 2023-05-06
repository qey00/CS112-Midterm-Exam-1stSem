/* Create a progrm that will prompt the user to input for the sequence
value. The program will also promt the user if even or odd number to be 
displayed only. The minimum value is 2 and the maximum value is 20 only! Apply
the concept of for looping statement and conditional statement. The program will
also prompt the user either to reset or exit the program. */

#include <iostream>
using namespace std;

int main(){
    int seq, sum=0;
    char choice;    

    do
    {
        system("cls");
        cout<<"Enter Sequence Value: ";
        cin>>seq;

        if(seq<=20 && seq>=2){
            for (int i=2; i<=seq*2; i=i+2){
                cout<<i<<" ";
                sum = sum + i;
            }
        }else{
            cout<<"INVALID INPUT";  
        }
        cout<<endl;
        cout<<"Press r to reset and any key to exit: ";
        cin>>choice;

    } while (choice=='r' || choice=='R');

    return 0;
}

