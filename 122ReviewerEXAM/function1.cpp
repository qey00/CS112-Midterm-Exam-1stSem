#include <iostream>

#include <cmath>
using namespace std;

double T(double base, double height)
{
    double atri = base * height * .5;
    return atri;
}

double C(double radius)
{
    double acir = M_PI * radius * radius;
    return acir;
}

double R(double lenght, double width)
{
    double arec = lenght * width;
    return arec;
}

int main()
{
    double base, height, radius, lenght, width;
    string r, sel;
    system("cls");
    cout << "[1]AREA OF TRIANGLE\n";
    cout << "[2] AREA OF CIRCLE\n";
    cout << "[3]AREA OF RECTANGLE\n";

    cout << "SELECT A NUMBER: ";
    cin >> sel;

    if (sel == "1")
    {
        do
        {
            cout << "AREA OF TRIANGLE CALCULATOR\n";
            cout << "Enter Base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            double aTri = T(base, height);
            cout << "Area of triangle is " << aTri;
            cout << "\n\n";
            cout << "PRESS Y to reset, Press A to go back and any key to exit: ";
            cin >> r;
            if (r == "a" || r == "A")
            {
                main();
            }
        } while (r == "y" || r == "Y");
    }

    else if (sel == "2")
    {
        do
        {
            system("cls");
            cout << "AREA OF CIRCLE CALCULATOR\n";
            cout << "Enter radius: ";
            cin >> radius;
            double aCir = C(radius);
            cout << "Area of circle is " << aCir;
            cout << "\n\n";
            cout << "PRESS Y to reset, Press A to go back and any key to exit: ";
            cin >> r;
            if (r == "a" || r == "A")
            {
                main();
            }

        } while (r == "y" || r == "Y");
    }
    else if (sel == "3")
    {
        do
        {
            system("cls");

            cout << "AREA OF RECTANGLE CALCULATOR\n";
            cout << "Enter length: ";
            cin >> lenght;
            cout << "Enter width: ";
            cin >> width;
            double aRec = R(lenght, width);
            cout << "Area of circle is " << aRec;
            cout << "\n\n";
            cout << "PRESS Y to reset, Press A to go back and any key to exit:";
            cin >> r;
            if (r == "a" || r == "A")
            {
                main();
            }
        } while (r == "y" || r == "y");
    }
    else
    {
        cout << "ERROR";
        main();
    }
    return 0;
}