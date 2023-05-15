//char c = tolower(r[0]);
//while (tolower(r[0]) == 'y')

#include <iostream>
#include <cmath>
using namespace std;

void opt(){
    system("cls");
    cout << "[1]AREA OF TRIANGLE\n";
    cout << "[2]AREA OF CIRCLE\n";
    cout << "[3]AREA OF RECTANGLE\n";
}

double T(double base, double height){
    system("cls");
    cout << "AREA OF TRIANGLE CALCULATOR\n";
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    double atri = base * height * .5;
    cout << "Area of triangle is " << atri;
    cout << "\n\n";
}

double C(double radius){
    system("cls");
    cout << "AREA OF CIRCLE CALCULATOR\n";
    cout << "Enter radius: ";
    cin >> radius;
    double acir = M_PI * radius * radius;
    cout << "Area of circle is " << acir;        
}

double R(double length,double width){
    system("cls");
    cout << "AREA OF RECTANGLE CALCULATOR\n";
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    double arec = length * width;
    cout << "Area of circle is " << arec;   
}



int main(){
    char reset;
    int base, height, radius, length, width;
    string sel;
    do{
        opt();

        cout << "SELECT A NUMBER: ";
        cin >> sel;

        if (sel=="1"){
            do
            {
                T(base, height);
                cout << "PRESS Y to reset, Press A to go back and any key to exit: ";
                cin >> reset;
                    if (tolower(reset) == 'a') {
                        main();
                    }
            } while (tolower(reset)=='y');
        }

        else if (sel=="2"){
            do
            {
                C(radius);
                cout << "PRESS Y to reset, Press A to go back and any key to exit: ";
                cin >> reset;
                    if (tolower(reset) == 'a') {
                        main();
                    }
            } while (tolower(reset)=='y');
        }
          
        else if (sel=="3"){
            do
            {
                R(length,width);
                cout << "PRESS Y to reset, Press A to go back and any key to exit: ";
                cin >> reset;
                    if (tolower(reset) == 'a') {
                        main();
                    }
            } while (tolower(reset)=='y');

        }else{
            cout<<"EEEEEEEEEEEEEEEERRRROOOOOOOOOR!!!!!!!!!!!";
        }
    } while (true);


    return 0;
}