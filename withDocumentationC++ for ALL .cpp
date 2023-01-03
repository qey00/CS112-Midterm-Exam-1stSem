#include <iostream> //provides input and output function

using namespace std; 

int main(){ 

    //Introductory to the program
    string yes_no;
    system("cls"); //clear screen
    system("Color 0A"); //set the terminal color
    cout<<"\n\n\n";
    cout<<" ::::::::                                  :::::::::: ::::::::  :::::::::           :::     :::        :::        \n";
    cout<<":+:    :+:     :+:           :+:           :+:       :+:    :+: :+:    :+:        :+: :+:   :+:        :+:        \n";
    cout<<"+:+            +:+           +:+           +:+       +:+    +:+ +:+    +:+       +:+   +:+  +:+        +:+        \n";
    cout<<"+#+       +#++:++#++:++ +#++:++#++:++      :#::+::#  +#+    +:+ +#++:++#:       +#++:++#++: +#+        +#+        \n";
    cout<<"+#+            +#+           +#+           +#+       +#+    +#+ +#+    +#+      +#+     +#+ +#+        +#+        \n";
    cout<<"#+#    #+#     #+#           #+#           #+#       #+#    #+# #+#    #+#      #+#     #+# #+#        #+#        \n";
    cout<<" ########                                  ###        ########  ###    ###      ###     ### ########## ########## \n\n\n\n";
    firstchoice: //label for goto statement to be 
    cout<<"\t\t\tDo you want to see the real deal?\n\n";
    cout<<"\t\t\t Y=Yes       N=No\n\n";
    cout<<"\t\t\tENTER YOUR CHOICE:";
    cin>>yes_no;
    if (yes_no == "Y")
    {
    
    system ("cls"); //clear screen
    system("color 0B");
    MainMenu:
    
    string choices;   
    cout<<"\t\t\t\t\t C++ FOR ALL\n";
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
    cout<<"*\t\t  9------------------------------------------------------ABOUT US              *\n";
    cout<<"*\t\t  10---------------------------------------------------------EXIT              *\n";
    cout<<"*                                                                                              *\n";
    cout<<"************************************************************************************************\n";
    cout<<"Please enter your choice: ";
    cin>>choices;
    //cin>>choices;
    
    system ("color 0B");//color change to white if first input is invalid
    
        //DISPLAY HELLO WORLD OPTION
        if (choices == "1"){
            displayMenu: //opt1 label for menu

            system("color 0B"); //color to Aqua
            system ("cls"); //clear screen 
            int HelloWorldChoice;
            int HelloWorldSwitch;
            cout<<"\t\t\t\t\tDisplay Hello World:\n\n";
            cout<<"************************************************************************************************\n";
            cout<<"*                                                                                              *\n";
            cout<<"*\t\t  1------------------------------------------display HELLO WORLD!              *\n";
            cout<<"*\t\t  2---------------------------------------display HAPPY BIRTHDAY!              *\n";
            cout<<"*\t\t  3------------------------------------------display COMPUTER ART              *\n";
            cout<<"*\t\t  4------------------------------------------go back to main menu              *\n";
            cout<<"*                                                                                              *\n";
            cout<<"************************************************************************************************\n";
            cout<<"\t\t\t\t\tPlease enter your choice: ";
            cin >> HelloWorldChoice;
            string HelloWorldYN; //initialization
            switch (HelloWorldChoice)
            {
            case 1:
                system ("cls"); //clear screen 
                //cout<<"Hello world!";
                
                system("color 3"); //color to aqua
                cout<<" /$$   /$$           /$$ /$$                                                   /$$       /$$\n";
                cout<<"| $$  | $$          | $$| $$                                                  | $$      | $$\n";
                cout<<"| $$  | $$  /$$$$$$ | $$| $$  /$$$$$$        /$$  /$$  /$$  /$$$$$$   /$$$$$$ | $$  /$$$$$$$\n";
                cout<<"| $$$$$$$$ /$$__  $$| $$| $$ /$$__  $$      | $$ | $$ | $$ /$$__  $$ /$$__  $$| $$ /$$__  $$\n";
                cout<<"| $$__  $$| $$$$$$$$| $$| $$| $$  \\ $$      | $$ | $$ | $$| $$  \\ $$| $$  \\__/| $$| $$  | $$\n";
                cout<<"| $$  | $$| $$_____/| $$| $$| $$  | $$      | $$ | $$ | $$| $$  | $$| $$      | $$| $$  | $$\n";
                cout<<"| $$  | $$|  $$$$$$$| $$| $$|  $$$$$$/      |  $$$$$/$$$$/|  $$$$$$/| $$      | $$|  $$$$$$$\n";
                cout<<"|__/  |__/ \\_______/|__/|__/ \\______/        \\_____/\\___/  \\______/ |__/      |__/ \\_______/\n";
                cout<<"\n\n";               
                cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                cin>>HelloWorldYN;
                    if (HelloWorldYN=="y"){
                        main();
                    }else{
                        goto displayMenu;
                    }
                
                break;

            case 2:
                system ("cls"); //clear screen 
                //cout<<"Hello world!";         
                system("color 5"); //color to purple    
                cout<<"  _    _                           ____  _      _   _         _             _ \n";
                cout<<" | |  | |                         |  _ \\(_)    | | | |       | |           | |\n";
                cout<<" | |__| | __ _ _ __  _ __  _   _  | |_) |_ _ __| |_| |__   __| | __ _ _   _| |\n";
                cout<<" |  __  |/ _` | '_ \\| '_ \\| | | | |  _ <| | '__| __| '_ \\ / _` |/ _` | | | | |\n";
                cout<<" | |  | | (_| | |_) | |_) | |_| | | |_) | | |  | |_| | | | (_| | (_| | |_| |_|\n";
                cout<<" |_|  |_|\\__,_| .__/| .__/ \\__, | |____/|_|_|   \\__|_| |_|\\__,_|\\__,_|\\__, (_)\n";
                cout<<"              | |   | |     __/ |                                      __/ |  \n";
                cout<<"              |_|   |_|    |___/                                      |___/   \n";
                cout<<"\n\n";
                cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                cin>>HelloWorldYN;
                    if (HelloWorldYN=="y"){
                        main();
                    }else{
                        goto displayMenu;
                    }
                
                break;
            
            case 3:
                system ("cls"); //clear screen 
                system("color 6"); //color to yellow

                cout<<"___________________\n";
                cout<<"| _______________ |\n";
                cout<<"| |XXXXXXXXXXXXX| |\n";
                cout<<"| |XXXXXXXXXXXXX| |\n";
                cout<<"| |XXXXXXXXXXXXX| |\n";
                cout<<"| |XXXXXXXXXXXXX| |\n";
                cout<<"| |XXXXXXXXXXXXX| |\n";
                cout<<"|_________________|\n";
                cout<<"     _[_______]_\n";
                cout<<" ___[___________]___\n";
                cout<<"|         [_____] []|__\n";
                cout<<"|         [_____] []|  \\__\n";
                cout<<"L___________________J     \' \'___\'/\n";
                cout<<" ___________________      /\\ \n";
                cout<<"/###################\\    (__)          \n";
                cout<<"\n\n";
                cout << "Enter 'y' to go back to main menu or enter anything to go back:";

                cin>>HelloWorldYN;
                    if (HelloWorldYN=="y"){
                        main();

                    }else{
                        goto displayMenu;
                    }
                
                break;


            case 4: //go back to main menu
                main();
                break;

            default:
                system("cls");//clear screen
                cout<<"INVALID INPUT! TRY AGAIN.\n";
                goto displayMenu;
                break;
            }
    
        }


        //CIN PRINT OPTION
        else if (choices == "2"){
        
        int CinChoice;
        string CinChoiceYN;
        string YourName;
            system ("cls"); //clear screen
            cinMenu: //opt2 label for menu
            

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
                cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                cin>>CinChoiceYN;
                    if (CinChoiceYN=="y"){
                        main();
                    }else{
                        goto cinMenu;
                    }
                
                break;

            case 2: //go back to main menu
                main();
                break;

            default:
                cout<<"INVALID INPUT! TRY AGAIN.\n";
                goto cinMenu;
                break;
            }
        }

        //MDAS CALCULATOR OPTION
        else if (choices == "3"){
            system ("cls"); //clear screen
            MDASMenu://opt3 label for menu

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
                    cout << "INVALID INPUT! TRY AGAIN." << endl;
                    goto MDASMenu;
                    break;
                }
                
            }
            
        }

        //no loop
        //GUESS THE MAGIC NUMBER OPTION
        else if (choices == "4"){
            system ("cls"); //clear screen
 

            cout<<"\t\t\t\t\tGuess the magic number!\n";
            int MagicNum; //initialization of Magic Number
            string MagicNumYN;
            
            
            cout<<"Guess the magic number from 1-10: ";
            cin>>MagicNum;

            //condition if user guess the number
            if(MagicNum==6){
               cout<<"************************************************************************************************\n";
                cout<<"\t\t\tCongrats you guess the magic number! \n";
                cout<<"************************************************************************************************\n";
            }

                    cout<<"\n\n"; //empty line
                    cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                    cin>>MagicNumYN;
                        if (MagicNumYN=="y"){
                                main();
                        }else{
                            cout<<"error!";
                        }
        }

        //ELIGIBILITY TO VOTE OPTION
        else if (choices == "5"){
            system("cls");
            voteMenu: //opt1 label for menu

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

        //GRADE SCALE OPTION
        else  if (choices == "6"){
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

        //COMPILED SHAPE AREA OPTION
        else if(choices == "7"){
            system("cls");  
            shapesMenu: //opt7 label for menu
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
            cout<<"*\t\t  X------------------------------------go back to main menu                   *\n";
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

                        cout<<"Enter value of base top:";
                        cin >> basetop;
                        cout<<"Enter value of base bot:";
                        cin >>basebot;
                        cout<<"Enter value of height:";
                        cin >> height;
                        
                        area=((basetop+basebot)/(2)*height);
                        
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
                        system("cls");//clear screen
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
                         system("cls");//clear screen
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
                        system("cls");//clear screen
                        cout<<"\t\tThis formula is fo the circumference of a circle\n";
                        float radius_H,circumference_H;

                        cout<<"Enter vaue of radius:";
                        cin>>radius_H;
                        
                        circumference_H=2*3.141592*radius_H;

                        cout<<"\n************************************************************************************************\n";
                        cout<<"The circumference of the circle is "<<circumference_H<<"\n";
                        cout<<"************************************************************************************************\n";

                        char circumferenceYN;
                            cout << "\nEnter 'y' to go back to main menu:";
                            cin>>circumferenceYN;
                                if (circumferenceYN=='y'){
                                        main();
                                } else{
                                    cout<<"error!";
                                    goto shapesMenu;
                                }

                                    break;





                                
                    case 'X':
                        main();
                        break;

                    default : 
                    cout<<"INVALID INPUT! TRY AGAIN!\n";
                    goto shapesMenu;
                    break;
                    }
                
            }

        
        //MULTIPLICATION TABLE OPTION
        else if (choices == "8"){
            tableMenu:
            system ("cls");
            int loop;
            char loop1, loop2;
            string loopYN;
            string MtBack;
            
            do{
                
                cout<<"\t\t\t\t\tMultiplication Table:\n\n";
                cout<<"************************************************************************************************\n";
                cout<<"*                                                                                              *\n";
                cout<<"*\t\t  ----------------Choose Your Loop:------------------------------              *\n";
                cout<<"*\t\t  1------------------------------------------------------for Loop              *\n";
                cout<<"*\t\t  2----------------------------------------------------While Loop              *\n";
                cout<<"*\t\t  3-------------------------------------------------Do-While Loop              *\n";
                cout<<"*\t\t  4------------------------------------------go back to main menu              *\n";
                cout<<"*                                                                                              *\n";
                cout<<"************************************************************************************************\n";
                cout << "Enter Your Choice:";
                cin>>loop;
            
            switch(loop){
                case 1:
                int i, a, b ;
                system ("cls");
                cout<< "\t\t\t\t\tFOR LOOP" << endl;		
                cout << "=========================================================="<<endl;	
                cout<<"Select Number to Multiply:";
                cin>> a;
                cout<<"Select the Number of Range:";
                cin>> b;
                cout << "==========================================================="<<endl;
                cout <<"Answers:"<< endl;
            
                for (i = 1 ; i<=b ; i++){
                cout<< a <<" x " << i <<" = " <<( a*i )<< endl;
                }
                cout<<"\n\n";               
                cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                cin>>loopYN;
                    if (loopYN=="y"){
                        main();
                    }else{
                        goto tableMenu;
                    }
                break;
                
                case 2:
                system ("cls");
                cout<< "\t\t\t\t\t WHILE LOOP" << endl;
                cout << "=================================================================="<<endl;
                cout<<endl<<"Click Letter 'w' to start the While Loop!\n";
                cin>>loop1;
                
                if(loop1=='w'){
                    case 'w':
                    int nmbr = 1, c = 1;
                    cout << "==================================================================="<<endl;
                    cout << "Enter a Positive Integer: ";
                    cin >> nmbr;
                    
                
                    while (c <= 20) {
                        cout << nmbr <<"*"<< c <<"=" << nmbr * c <<endl;
                            ++c;}
                            
                        }
                        else{
                            cout<<endl<<"INVALID INPUT!";
                        }
                    cout<<"\n\n";               
                    cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                    cin>>loopYN;
                        if (loopYN=="y"){
                            main();
                        }else{
                            goto tableMenu;
                        }
                        break;
                    
                case 3:
                    system ("cls");
                    cout<<"\t\t\t\t\tDO-WHILE LOOP!"<<endl;
                    cout<< "================================================================="<<endl;
                    cout<<"Click Letter 'd' to start the Do-While Loop!\n";
                    cin>>loop2;
                        
                    if(loop2=='d'){
                        system ("cls");     
                        int p, a, b ;
                        char a1[1000], b1[1000];
                            cout<<"\t\t\tDo-While Loop"<< endl;
                        cout << "================================================================="<<endl;
                        cout<<"Select Number to Multiply:"<<a1;
                        cin>> a;
                        cout<<"Select the Number of Range:"<<b1;
                        cin>> b;
                        cout << "=================================================================="<<endl;
                        cout <<"Answers:"<< endl;

                        int m=1;
                        do{
                        cout<< a <<" x " << p <<" = " <<( a*p )<< endl;
                            p++;
                            }
                            while(p<=b);
                            cout<<endl;
                            }                
                
                        cout<<"\n\n";               
                        cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                        cin>>loopYN;
                            if (loopYN=="y"){
                                main();
                            }else{
                                goto tableMenu;
                            } break;



                case 4:
                    cout << "====================================================================="<<endl;
                    
                            cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                            cin>>MtBack;
                                if (MtBack=="y"){
                                    main();
                                }else{
                                    cout<<"error!";
                                }
                            
                        break;
                
                    
                default:
                cout<<"INVALID INPUT!";
                break;
            }
            }
            while(loop!=4);
                goto tableMenu;
            }

        //ABOUT US OPTION
        else if (choices == "9"){
            system("cls"); //clear screen
            cout<<"************************************************************************************************\n";
            cout<<"*                                                                                              *\n";
            cout<<"*\t\t  ---------------------------------------------------------------              *\n";
            cout<<"*\t\t  ------------------------ GROUP MEMBERS ------------------------              *\n";
            cout<<"*\t\t  -------------------DE GUZMAN, MIKAELA MAE L.-------------------              *\n";
            cout<<"*\t\t  ------------------------LAMUG, JASTIN G.-----------------------              *\n";
            cout<<"*\t\t  ----------------------MARAYAG, AXL ROSE T.---------------------              *\n";
            cout<<"*\t\t  -----------------------RAMOS, JOHN MARK B.---------------------              *\n";
            cout<<"*\t\t  ----------------SAGAYSAY, MICKYLLA JULIANA A.------------------              *\n";
            cout<<"*\t\t  -------------------VELASCO, FLORIE JOY A.----------------------              *\n";
            cout<<"*\t\t  ---------------------------------------------------------------              *\n";
            cout<<"*                                                                                              *\n";
            cout<<"************************************************************************************************\n";
            cout<<"\n\n";
                string AboutUsChoice;               
                cout << "Enter anything to go back:";
                cin>>AboutUsChoice;
                    if (AboutUsChoice==AboutUsChoice){
                        main();
                    }else{
                        cout<<"error";
                    }
            
            
            }


       //EXIT OPTION
        else if (choices == "10"){
           goto end;

        }
        //Display if user input an invalid option
       
        else { 
            system("color 4");           
            //cout<<"invalid input \t invalid input \t invalid input \t invalid input";
            main();
          
        }
   
   
}  
    else if(yes_no == "N")
    {
        end:
        system("cls");
        system("color 0A");
        cout<<" /$$$$$$$$ /$$   /$$  /$$$$$$  /$$   /$$ /$$   /$$       /$$     /$$ /$$$$$$  /$$   /$$ /$$\n";
        cout<<"|__  $$__/| $$  | $$ /$$__  $$| $$$ | $$| $$  /$$/      |  $$   /$$//$$__  $$| $$  | $$| $$\n";
        cout<<"   | $$   | $$  | $$| $$  \\ $$| $$$$| $$| $$ /$$/        \\  $$ /$$/| $$  \\ $$| $$  | $$| $$\n";
        cout<<"   | $$   | $$$$$$$$| $$$$$$$$| $$ $$ $$| $$$$$/          \\  $$$$/ | $$  | $$| $$  | $$| $$\n";
        cout<<"   | $$   | $$__  $$| $$__  $$| $$  $$$$| $$  $$           \\  $$/  | $$  | $$| $$  | $$|__/\n";
        cout<<"   | $$   | $$  | $$| $$  | $$| $$\\  $$$| $$\\  $$           | $$   | $$  | $$| $$  | $$    \n";
        cout<<"   | $$   | $$  | $$| $$  | $$| $$ \\  $$| $$ \\  $$          | $$   |  $$$$$$/|  $$$$$$/ /$$\n";
        cout<<"   |__/   |__/  |__/|__/  |__/|__/  \\__/|__/  \\__/          |__/    \\______/  \\______/ |__/\n";
        }
            else{
                system("cls");
                goto firstchoice;
            }


    return 0;
        } 

