#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    do{
        system("cls");
        srand((unsigned)time(NULL));
        int random_number, guess;
        char input;

        cout << "This program generates random number from 1 to 20 only!";
        do{
            random_number = rand();
        } while ((random_number > 20) || (random_number == 0));

        cout << endl << "random number: " << random_number << endl;
             
             
        for (int i = 0; i < 3; i++){
            cout << "Guess the number: ";
            cout << "\n";
            cin >> guess;

            if (guess == random_number){
                cout << "Congrats you have guess the number!";
                break;
            }
        }

        if (guess != random_number){
            cout << "Sorry you failed.";
            }
        
        cout << "\nThe random number is: " << random_number;
        cout << "\nPress Y to reset and any key to exit: ";
        cin >> input;

        if (tolower(input) == 'y')
            continue;

        break;
    } while (true);

    return 0;
}