/*
Create a program that will prompt the user to input how many sequence
to be printed on the screen. The minimum value of the sequence is 2 and maximum
is 20. Analyze the sample output. The program will also prompt the user either to
reset oor exit the program. Apply do while, conditional and array.
The sequence is 0 1 1 2 3 5 8 13.....
*/

#include <iostream>
using namespace std;

int main() {
    int seq, sum;
    char choice;
    
    do {
        cout << "Enter Sequence Value (2-20): ";
        cin >> seq;

        if(seq >= 2 && seq <= 20) {
            int a = 0, b = 1, c;
            sum = 0;
            cout << a << " " << b << " ";
            for(int i = 2; i < seq; i++) {
                c = a + b;
                cout << c << " ";
                a = b;
                b = c;
                //sum += c;
            }
            //cout << endl << "Sum: " << sum << endl;
        } else {
            cout << "INVALID INPUT" << endl;
        }
        cout << endl;
        cout << "Press 'r' to reset or any key to exit: ";
        cin >> choice;
    } while(tolower(choice) == 'r');

    return 0;
}
