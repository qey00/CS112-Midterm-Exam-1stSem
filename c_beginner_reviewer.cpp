#include <iostream>
using namespace std;
int main()
{
    int choices;
    do
    {
       
    cout<<"\t\tc+ + for BOOBIES\n";
    cout<<"\t\tSwitch Menu\n";
    cout<<"************************************************************************************************\n";
    cout<<"*                                                                                              *\n";
    cout<<"*\t\t  1----------------------------------------DISPLAY HELLO WORLD!                *\n";
    cout<<"*\t\t  2----------------------------------------cin print 'Hello My name: ______    *\n";
    cout<<"*\t\t  3----------------------------------------MDAS CALCULATOR                     *\n";
    cout<<"*\t\t  4----------------------------------------GUESS THE MAGIC NUMBER              *\n";
    cout<<"*\t\t  5----------------------------------------TEST YOUR ELIGIBILITY TO VOTE       *\n";
    cout<<"*\t\t  6----------------------------------------GRADE SCALE PASSED/FAILED           *\n";
    cout<<"*\t\t  7----------------------------------------COMPILED OPERATIONS (switch+dowhile)*\n";
    cout<<"*\t\t  8-------------------------------MULTIPLICATION TABLE USING-FOR-WHILE-DOWHILE *\n";
    cout<<"*\t\t  9-------------------------------------!EXIT!---!EXIT!---!EXIT!---            *\n";
    cout<<"*                                                                                              *\n";
    cout<<"************************************************************************************************\n";
    cout<<"Please enter your choice:";
    cin>>choices;
switch (choices)
{
case 1 : cout<<"You have chosen to display 'hello world!\n";
    cout<<"HELLO WORLD\n";
    break;
case 2: char name;
    cout<<"Hello my name is:";
    cin>>name;
    break;
case 3 : cout << "You have chosen the MDAS calculator! \n";
    int num1, num2, answer;
    int variable;
    cout << "please choose your desired operator listing from: \n";
    cout << "1.) ADDITION\t" << "2.) SUBTRACTION\t" << "3.) MULTIPLICATION\t" << "4.) DIVISION.\n"; 
    cout << "Your input: ";
    cin >> variable;
      
      
     switch (variable)
    {   
     case 1: 
            cout << "You chose Addition!\n";
            cout << "Please enter the value of the first number: ";
            cin >> num1;
            cout << "Please enter the value of the second number: ";
            cin >> num2;

            answer = num1+num2;
            cout << "The sum of " << num1 << " and " << num2 << " is = " << answer << endl;
        
        break;

     case 2:
            cout << "You chose Subtraction!\n";
            cout << "Please enter the value of the first number: ";
            cin >> num1;
            cout << "Please enter the value of the second number: ";
            cin >> num2;

            answer = num1-num2;
            cout << "The difference of " << num1 << " and " << num2 << " is = " << answer << endl;

        break;

     case 3:
            cout << "You chose Multiplication!\n";
            cout << "Please enter the value of the first number: ";
            cin >> num1;
            cout << "Please enter the value of the second number: ";
            cin >> num2;

            answer = num1*num2;
            cout << "The Product of " << num1 << " and " << num2 << " is = " << answer << endl;

        break;

     case 4:
            cout << "You chose Division!\n";
            cout << "Please enter the value of the first number: ";
            cin >> num1;
            cout << "Please enter the value of the second number: ";
            cin >> num2;

            answer = num1+num2;
            cout << "The Quotient of " << num1 << " and " << num2 << " is = " << answer << endl;
    
        break;

     default:
        {
            cout << "INVALID INPUT!" << endl;
        }
        break;
    }
    break;
    case 4 : cout<<"You have chosen option no.4 to guess the magic number!\n";
    int MagicNum; //initialization of Magic Number
	cout<<"Guess the magic number: ";
	cin>>MagicNum;

    //condition if user guess the number
	if(MagicNum==6){
		cout<<"++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"+++ Congrats you guess the magic number! +++\n";
		cout<<"++++++++++++++++++++++++++++++++++++++++++++\n";
	}
    break;



    case 5 : cout<<"You have chosen to check your age eligibiliy to vote!\n";
    int age;
    cout<<"TEST YOUR ELIGIBILITY TO VOTE\n";
    cout<<"Please enter your age:";
    cin>>age;
    if (age>=18)
    {
        cout<<"You are eligible to vote\n";
    }
    else if (age<=17)
    {
        cout<<"You are not eligble to vote\n";
    }
    else
    {
        cout<<"Please enter valid age\n";
    }
    break;
    
    case 6 : cout<<"GRADING SCALE PASSED OR FAILED\n";
    float grade;
	
	cout <<"Enter ur Grade: "; //show message
	cin >> grade; //input grade
	
    
	if (grade>=90) 
	{
	    cout << "Excellent!"; //show grade scale	
	}
    else if (grade>=80)
    {
    	cout << "Very Good!"; //show grade scale
	}
	else if (grade>=75)
    {
    	cout << "Satisfactory!"; //show grade scale
	}
	else
	{
	    cout <<"Failed :("; //grade scale for 74 below
	}
    break;
    case 7 :  char choices;
    do{
    cout<<"\t\t\t\t\tCompiled Operations:\n\n";
    cout<<"***********************************************************************************************\n";
    cout<<"*                                                                                             *\n";
    cout<<"*\t\t  A----------------------------------------Area of triangle                   *\n";
    cout<<"*\t\t  B----------------------------------------Area of trapezoid                  *\n";
    cout<<"*\t\t  C----------------------------------------Area of circle                     *\n";
    cout<<"*\t\t  D----------------------------------------Area of parallelogram              *\n";
    cout<<"*\t\t  E----------------------------------------Area of rectangle                  *\n";
    cout<<"*\t\t  F----------------------------------------Area of square                     *\n";
    cout<<"*\t\t  G----------------------------------------Area of ellipse                    *\n";
    cout<<"*\t\t  H----------------------------------------Circumference of a circle          *\n";
    cout<<"*\t\t  X-------------------------------------!EXIT!---!EXIT!---!EXIT!---           *\n";
    cout<<"*                                                                                             *\n";
    cout<<"***********************************************************************************************\n";
    cout<<"\t\tPlease Enter Your Chosen Operation:";
    cin>>choices;
    if(choices != 'A', 'B', 'C', 'D', 'E', 'F', 'G','H')

    switch(choices){
        case 'A' : cout<<"\t\tThis formula is for the area of triangle\n";
        int base,height1,area1;

        cout<<"\t\tEnter value of base:";
        cin>>base;
        cout<<"\t\tEnter value of height:";
        cin>>height1;
        area1=(base*height1)/2;
        cout<<"\t\tThe area of the triangle is:"<<area1<<"\n";
        break;

        case 'B' : cout<<"\t\tThis formula is for the area of tapezoid\n";
        double basetop, basebot, height, area;

        cout<<"\t\tEnter value of base top:";
        cin >> basetop;
        cout<<"\t\tEnter value of base bot:";
        cin >>basebot;
        cout<<"\t\tEnter value of height:";
        cin >> height;
        area=((basetop*basebot)/2)*height;
        cout<<"\t\tThe area of Trapezoid is:"<<area<<"\n";
        break;

        case 'C' : cout<<"\t\tThis formula is for the area of a circle\n";
        double radius,area2;

        cout<<"\t\tEnter value of radius:";
	    cin>>radius;
	    area2=3.14*radius*radius;
	    cout<<"\t\tThe area of the Circle is: "<<area2<<"\n";
        break;

        case 'D' : cout<<"\t\tThis formula is for the area of parallelogram\n";
        double base1,height2,area3;\

        cout<<"\t\tEnter value of base: ";
	    cin>>base1;
	    cout<<"\t\tEnter value of height: ";
        cin>>height2;
        area3=base1*height2;
        cout<<"\t\tThe area of Parallelogram is: "<<area<<"\n";
        break;

        case 'E' : cout<<"\t\tThis formula is for the area of rectangle\n";
        double height_E,width_E,area_E;

        cout<<"\t\tEnter value of height:";
	    cin>>height_E;
	    cout<<"\t\tEnter value of width:";
	    cin>>width_E;
	    area=height*width_E;
	    cout<<"\t\tThe area of Rectangle is "<<area_E<<"\n";
        break;

        case 'F' : cout<<"\t\tThis formula is for the area of square\n";
        double length_side_F,area_F;

        cout<<"\t\tEnter length of sides:";
	    cin>>length_side_F;
	    area_F=length_side_F*length_side_F;
	    cout<<"\t\tThe area of the Square is "<<area_F<<"\n";
        break;

        case 'G' : cout<<"\t\tThis formula is for the area of ellipse\n";
        float X,Y,area_G;
        cout<<"\t\tEnter value of X:";
	    cin>>X;
	    cout<<"\t\tEnter value of Y:";
	    cin>>Y;
	    area_G=3.142*X*Y;
        cout<<"\t\tThe area of Ellipse is "<<area_G<<"\n";
        break;

        case 'H' : cout<<"\t\tThis formula is fo the circumference of a circle\n";
        float radius_H,circumference_H;

        cout<<"\t\tEnter vaue of radius:";
	    cin>>radius_H;
	    circumference_H=2*3.141592*radius_H;
	    cout<<"\t\tThe circumference of the circle is "<<circumference_H<<"\n\n\n\n";
        break;

        default : cout<<"\n"<<"\n"<<"\t\t\tPlease choose only the letter posted above (:\n"<<"\t\t\tTHANK YOU\n";
        break;
        }
        
    }while (choices != 'X');
    return 0;
    break;

    case 8 : cout<<"MULTIPLICATION TABLE USING LOOPS\n";
    break;

    
    default:
        break;
    }
    } while (choices !=9 );
    


return 0;
}