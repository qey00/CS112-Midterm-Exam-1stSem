#include <iostream>
#include <cstdlib> 
using namespace std;
int main(){
    int choices;
    system ("cls"); //clear screen
    
    cout<<"\t\t\t\t\t c+ + for BOOBIES\n";
    cout<<"************************************************************************************************\n";
    cout<<"*                                                                                              *\n";
    cout<<"*\t\t  1------------------------------------------DISPLAY HELLO WORLD!              *\n";
    cout<<"*\t\t  2------------------------------cin print 'Hello My name: ______              *\n";
    cout<<"*\t\t  3-----------------------------------------------MDAS CALCULATOR              *\n";
    cout<<"*\t\t  4----------------------------------------GUESS THE MAGIC NUMBER              *\n";
    cout<<"*\t\t  5---------------------------------TEST YOUR ELIGIBILITY TO VOTE              *\n";
    cout<<"*\t\t  6-------------------------------------GRADE SCALE PASSED/FAILED              *\n";
    cout<<"*\t\t  7--------------------------COMPILED OPERATIONS (switch+dowhile)              *\n";
    cout<<"*\t\t  8------------------MULTIPLICATION TABLE USING-FOR-WHILE-DOWHILE              *\n";
    cout<<"*\t\t  9----------------------------------------------------------EXIT              *\n";
    cout<<"*                                                                                              *\n";
    cout<<"************************************************************************************************\n";
    cout<<"Please enter your choice: ";
    cin>>choices;

        //DISPLAY HELLO WORLD OPTION
        if (choices == 1){
            system ("cls"); 
            int HelloWorldChoice;
            int HelloWorldSwitch;
            cout<<"\t\t\t\t\tDisplay Hello World:\n\n";
            cout<<"************************************************************************************************\n";
            cout<<"*                                                                                              *\n";
            cout<<"*\t\t  1------------------------------------------display HELLO WORLD!              *\n";
            cout<<"*\t\t  2------------------------------------------go back to main menu              *\n";
            cout<<"*                                                                                              *\n";
            cout<<"************************************************************************************************\n";
            cout<<"\t\t\t\t\tPlease enter your choice: ";
            cin >> HelloWorldChoice;

            switch (HelloWorldChoice)
            {
            case 1:
                cout<<"Hello world!";
                cout<<"\n\n";
                char HelloWorldYN;
                cout << "Enter 'y' to go back to main menu:";
                cin>>HelloWorldYN;
                    if (HelloWorldYN=='y'){
                        main();
                    }else{
                        cout<<"error!";
                    }
                
                break;
            
            case 2: //go back to main menu
                main();
                break;

            default:
                cout<<"Invalid input";
                return (24);
                break;
            }
    
        }


        //CIN PRINT OPTION
        else if (choices == 2){
        string YourName ;
        int CinChoice;
        char CinChoiceYN;
            system ("cls"); //clear screen
            cout<<"\t\t\t\t\tcin print 'Hello, My name: ______   \n";
            cout<<"************************************************************************************************\n";
            cout<<"*                                                                                              *\n";
            cout<<"*\t\t  1--------------------------------------Hello, My Name is_______              *\n";
            cout<<"*\t\t  2------------------------------------------go back to main menu              *\n";
            cout<<"*                                                                                              *\n";
            cout<<"************************************************************************************************\n";
            cout << "Please enter your choice: ";
            cin>>CinChoice;

            switch (CinChoice)
            {
            case 1:
                system("cls");
                cout<<"Enter your Name: ";
                cin>>YourName;

                cout<<"\n\n"; //empty line
                cout<<"************************************************************************************************\n";
                cout<<"*                                                                                              *\n";
                cout<<"*\t\t\t\t  Hello, My Name is "<<YourName<<"                                        *\n";
                cout<<"*                                                                                              *\n";
                cout<<"************************************************************************************************\n";
                cout<<"\n\n\n"; //empty line
                cout << "Enter 'y' to go back to main menu: ";
                cin>>CinChoiceYN;
                    if (CinChoiceYN=='y'){
                        main();
                    }else{
                        cout<<"error!";
                    }
                
                break;

            case 2: //go back to main menu
                main();
                break;

            default:
                cout<<"Invalid input";
                return (63);
                break;
            }
        }

        //MDAS CALCULATOR OPTION
        else if (choices == 3){
            system ("cls"); //clear screen
            cout << "\t\t\t\t\tMDAS calculator! \n";
            int num1, num2, answer, variable;
            char mdasYN;
            
            cout << "\t\t\tPlease choose your desired operator listing from: \n";
           
            cout<<"************************************************************************************************\n";
            cout<<"*                                                                                              *\n";
            cout<<"*\t\t  1--------------------------------------------------ADDITION                  *\n";
            cout<<"*\t\t  2-----------------------------------------------SUBTRACTION                  *\n";
            cout<<"*\t\t  3--------------------------------------------MULTIPLICATION                  *\n";
            cout<<"*\t\t  4--------------------------------------------------DIVISION                  *\n";
            cout<<"*\t\t  5--------------------------------------go back to main menu                  *\n";
            cout<<"*                                                                                              *\n";
            cout<<"************************************************************************************************\n";
            cout << "Your choice: ";
            cin >> variable;
            
            
            switch (variable)
            {   
            case 1: 
                    system ("cls"); //clear screen
                    cout << "\t\t\tYou chose Addition!\n";
                    cout << "Please enter the value of the first number: ";
                    cin >> num1;
                    cout << "Please enter the value of the second number: ";
                    cin >> num2;

                    answer = num1+num2;
                    cout<<"************************************************************************************************\n";
                    cout << "\t\t\tThe sum of " << num1 << " and " << num2 << " is = " << answer << endl;
                    cout<<"************************************************************************************************\n";

                    cout<<"\n\n"; //empty line
                    cout << "Enter 'y' to go back to main menu: ";
                    cin>>mdasYN;
                        if (mdasYN=='y'){
                                main();
                        }else{
                            cout<<"error!";
                        }
                            
                    break;


            case 2:
                    system ("cls"); //clear screen
                    cout << "\t\t\tYou chose Subtraction!\n";
                    cout << "Please enter the value of the first number: ";
                    cin >> num1;
                    cout << "Please enter the value of the second number: ";
                    cin >> num2;

                    answer = num1-num2;
                    cout<<"************************************************************************************************\n";
                    cout << "\t\t\tThe difference of " << num1 << " and " << num2 << " is = " << answer << endl;
                    cout<<"************************************************************************************************\n";

                    cout<<"\n\n"; //empty line
                    cout << "Enter 'y' to go back to main menu: ";
                    cin>>mdasYN;
                        if (mdasYN=='y'){
                                main();
                        }else{
                            cout<<"error!";
                        }
                    break;

                

            case 3:
                    system ("cls"); //clear screen
                    cout << "\t\t\tYou chose Multiplication!\n";
                    cout << "Please enter the value of the first number: ";
                    cin >> num1;
                    cout << "Please enter the value of the second number: ";
                    cin >> num2;

                    answer = num1*num2;
                    cout<<"************************************************************************************************\n";
                    cout << "\t\t\tThe Product of " << num1 << " and " << num2 << " is = " << answer << endl;
                    cout<<"************************************************************************************************\n";
                    
                    cout<<"\n\n"; //empty line
                    cout << "Enter 'y' to go back to main menu: ";
                    cin>>mdasYN;
                        if (mdasYN=='y'){
                                main();
                        }else{
                            cout<<"error!";
                        }
                    break;
                

            case 4:
                    system ("cls"); //clear screen
                    cout << "\t\t\tYou chose Division!\n";
                    cout << "Please enter the value of the first number: ";
                    cin >> num1;
                    cout << "Please enter the value of the second number: ";
                    cin >> num2;

                    answer = num1+num2;
                    cout<<"************************************************************************************************\n";
                    cout << "\t\t\tThe Quotient of " << num1 << " and " << num2 << " is = " << answer << endl;
                    cout<<"************************************************************************************************\n";

                    cout<<"\n\n"; //empty line
                    cout << "Enter 'y' to go back to main menu: ";
                    cin>>mdasYN;
                        if (mdasYN=='y'){
                                main();
                        }else{
                            cout<<"error!";
                        }
                    break;


            case 5: //go back to main menu
                main();
                break;

            default:
                {
                    cout << "INVALID INPUT!" << endl;
                    break;
                }
                
            }
            
        }


        else if (choices == 4){
            system ("cls"); //clear screen

            cout<<"\t\t\t\t\tGuess the magic number!\n";
            int MagicNum; //initialization of Magic Number
            char MagicNumYN;
            
            cout<<"Guess the magic number from 1-10: ";
            cin>>MagicNum;

            //condition if user guess the number
            if(MagicNum==6){
               cout<<"************************************************************************************************\n";
                cout<<"\t\t\tCongrats you guess the magic number! \n";
                cout<<"************************************************************************************************\n";
            }

            cout<<"\n\n"; //empty line
                    cout << "Enter 'y' to go back to main menu:";
                    cin>>MagicNumYN;
                        if (MagicNumYN=='y'){
                                main();
                        }else{
                            cout<<"error!";
                        }
        }


        else if (choices == 5){
            system("cls");

            int age;
            cout<<"\t\t\t\t\tTEST YOUR ELIGIBILITY TO VOTE\n";
            cout<<"Please enter your age:";
            cin>>age;
            cout<<"\n\n"; //empty line
            if (age>=18)
            {   
                cout<<"************************************************************************************************\n";
                cout<<"\t\t\tYou are eligible to vote\n";
                cout<<"************************************************************************************************\n";
            }
            else if (age<=17)
            {
                cout<<"************************************************************************************************\n";
                cout<<"\t\t\tYou are not eligble to vote\n";
                cout<<"************************************************************************************************\n";
            }
            else
            {
                cout<<"Please enter valid age\n";
            }
            
            cout<<"\n\n"; //empty line

                    char VoteYN;
                    cout << "Enter 'y' to go back to main menu:";
                    cin>>VoteYN;
                        if (VoteYN=='y'){
                                main();
                        }else{
                            cout<<"error!";
                        }
        }


        else  if (choices == 6){
            system("cls");
            cout<<"\t\t\t\t\tGRADING SCALE PASSED OR FAILED\n";
            float grade;
            
            cout <<"Enter your Grade: "; //show message
            cin >> grade; //input grade
                            
                if (grade>=90) {
                    cout<<"************************************************************************************************\n";
                    cout << "\t\t\tExcellent!\n"; //show grade scale	
                    cout<<"************************************************************************************************\n";
                }
                else if (grade>=80) {
                    cout<<"************************************************************************************************\n";
                    cout << "\t\t\tVery Good!\n"; //show grade scale
                    cout<<"************************************************************************************************\n";
                }
                else if (grade>=75){
                    cout<<"************************************************************************************************\n";
                    cout << "\t\t\tSatisfactory!\n"; //show grade scale
                    cout<<"************************************************************************************************\n";
                }
                else {
                    cout<<"************************************************************************************************\n";
                    cout <<"\t\t\tFailed :(\n"; //grade scale for 74 below
                    cout<<"************************************************************************************************\n";
                }

             cout<<"\n\n"; //empty line

                char gradingYN;
                cout << "Enter 'y' to go back to main menu:";
                cin>>gradingYN;
                    if (gradingYN=='y'){
                            main();
                    } else{
                        cout<<"error!";
                    }
        }


        else if(choices == 7){
            system("cls");  
            char choices;
            cout<<"\t\t\t\t\tCompiled Operations:\n\n";
            cout<<"***********************************************************************************************\n";
            cout<<"*                                                                                             *\n";
            cout<<"*\t\t  A----------------------------------------Area of triangle                   *\n";
            cout<<"*\t\t  B---------------------------------------Area of trapezoid                   *\n";
            cout<<"*\t\t  C------------------------------------------Area of circle                   *\n";
            cout<<"*\t\t  D-----------------------------------Area of parallelogram                   *\n";
            cout<<"*\t\t  E---------------------------------------Area of rectangle                   *\n";
            cout<<"*\t\t  F------------------------------------------Area of square                   *\n";
            cout<<"*\t\t  G-----------------------------------------Area of ellipse                   *\n";
            cout<<"*\t\t  H-------------------------------Circumference of a circle                   *\n";
            cout<<"*\t\t  X---------------------------------------Back to main menu                   *\n";
            cout<<"*                                                                                             *\n";
            cout<<"***********************************************************************************************\n";
            cout<<"\t\tPlease Enter Your Chosen Operation:";
            cin>>choices;
            if(choices != 'A', 'B', 'C', 'D', 'E', 'F', 'G','H')

                switch(choices){
                    case 'A' : 
                        system("cls");
                        cout<<"\t\tThis formula is for the area of triangle\n";
                        int base,height1,area1;

                        cout<<"Enter value of base:";
                        cin>>base;
                        cout<<"Enter value of height:";
                        cin>>height1;
                        area1=(base*height1)/2;
                        cout<<"\n************************************************************************************************\n";
                        cout<<"\t\tThe area of the triangle is:"<<area1<<"\n";
                        cout<<"************************************************************************************************\n";

                            char triangleYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>triangleYN;
                                if (triangleYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'B' : 
                        system ("cls");
                        cout<<"\t\tThis formula is for the area of tapezoid\n";
                        double basetop, basebot, height, area;

                        cout<<"\t\tEnter value of base top:";
                        cin >> basetop;
                        cout<<"Enter value of base bot:";
                        cin >>basebot;
                        cout<<"Enter value of height:";
                        cin >> height;
                        
                        area=((basetop*basebot)/2)*height;
                        
                        cout<<"\n************************************************************************************************\n";
                        cout<<"\t\tThe area of Trapezoid is:"<<area<<"\n";
                        cout<<"************************************************************************************************\n";

                        char trapezoidYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>trapezoidYN;
                                if (trapezoidYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'C' : 
                        system("cls");
                        cout<<"\t\tThis formula is for the area of a circle\n";
                        double radius,area2;

                        cout<<"\t\tEnter value of radius:";
                        cin>>radius;
                        area2=3.14*radius*radius;

                        cout<<"\n************************************************************************************************\n";
                        cout<<"\t\tThe area of the Circle is: "<<area2<<"\n";
                        cout<<"************************************************************************************************\n";

                        char circleYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>circleYN;
                                if (circleYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'D' : 
                        cout<<"\t\tThis formula is for the area of parallelogram\n";
                        double base1,height2,area3;\

                        cout<<"Enter value of base: ";
                        cin>>base1;
                        cout<<"Enter value of height: ";
                        cin>>height2;
                        area3=base1*height2;

                        cout<<"\n************************************************************************************************\n";
                        cout<<"\t\tThe area of Parallelogram is: "<<area<<"\n";
                        cout<<"************************************************************************************************\n";

                        char parallelogramYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>parallelogramYN;
                                if (parallelogramYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'E' : 
                        system("cls");
                        cout<<"\t\tThis formula is for the area of rectangle\n";
                        double height_E,width_E,area_E;

                        cout<<"Enter value of height:";
                        cin>>height_E;
                        cout<<"Enter value of width:";
                        cin>>width_E;
                        
                        area=height*width_E;

                        cout<<"\n************************************************************************************************\n";
                        cout<<"\t\tThe area of Rectangle is "<<area_E<<"\n";
                        cout<<"************************************************************************************************\n";

                        char rectangleYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>rectangleYN;
                                if (rectangleYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'F' : 
                        system("cls");
                        cout<<"\t\tThis formula is for the area of square\n";
                        double length_side_F,area_F;

                        cout<<"Enter length of sides:";
                        cin>>length_side_F;

                        area_F=length_side_F*length_side_F;

                        cout<<"\n************************************************************************************************\n";
                        cout<<"\t\tThe area of the Square is "<<area_F<<"\n";
                        cout<<"************************************************************************************************\n";

                        char squareYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>squareYN;
                                if (squareYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'G' : 
                        cout<<"\t\tThis formula is for the area of ellipse\n";
                        float X,Y,area_G;
                        cout<<"Enter value of X:";
                        cin>>X;
                        cout<<"Enter value of Y:";
                        cin>>Y;
                        area_G=3.142*X*Y;

                        cout<<"\n************************************************************************************************\n";
                        cout<<"\t\tThe area of Ellipse is "<<area_G<<"\n";
                        cout<<"************************************************************************************************\n";

                        char ellipseYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>ellipseYN;
                                if (ellipseYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'H' : 
                        cout<<"\t\tThis formula is fo the circumference of a circle\n";
                        float radius_H,circumference_H;

                        cout<<"Enter vaue of radius:";
                        cin>>radius_H;
                        
                        circumference_H=2*3.141592*radius_H;

                        cout<<"\n************************************************************************************************\n";
                        cout<<"The circumference of the circle is "<<circumference_H<<"\n\n\n\n";
                        cout<<"************************************************************************************************\n";

                        char circumferenceYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>circumferenceYN;
                                if (circumferenceYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                }
                                    break;

                    case 'X':
                        main();
                        break;

                    default : 
                    cout<<"\n"<<"\n"<<"\t\t\tPlease choose only the letter posted above \n";
                    break;
                    }
                
            }

        
        
        else if (choices == 8){
            system("cls");
            cout<<"\t\t\t\t\tMULTIPLICATION TABLE USING LOOPS\n";
            
        }

        else if (choices == 9){
           exit(0);

        }
        else {
            cout<<"invalid number";
            
        }
    
}