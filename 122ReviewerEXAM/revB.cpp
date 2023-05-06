/*
Create a program that wil prompt the user to input the dimension of 
the multiplication table. The program will only accept a minimum value of 2 and
maximum value of 12 only! The program will then display the multiplication table.
THe program will also prompt the user either to reset or exit the program. Apply do 
while loop, for loop, if else conditional statement.
*/


#include <iostream>
using namespace std;

int main(){
    int col, row;
    char choice;    

    do
    {
        cout<<"Enter row: ";
        cin>>row;
        cout<<"Enter col: ";
        cin>>col;

        if (row<=12 && row>=2){
            // i=row
            // j=col
            for (int i=1; i<=row;i++){
                for(int j=1; j<=row; j++){
                    cout<< i*j << " ";
                }
            cout<<endl;
            }
        }else{
            cout<<"ERROR";
        }
        

        cout<<endl;
        cout<<"Press r to reset and any key to exit: ";
        cin>>choice;
    } while (choice=='r' || choice=='R');

    return 0;
}
