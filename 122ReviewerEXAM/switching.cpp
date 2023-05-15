#include <iostream>
using namespace std;

void swapping(int a, int b){
    cout << "Before swapping"<<endl
         << a<<" "<< b <<endl;

    int temp=a;
    a=b;
    b=temp;
    cout << "after swapping"<<endl
         << a <<" "<< b <<endl;
    }

int main() {
        int a,b;
        cout<<"enter value for a: ";
        cin>>a;
        cout<<"enter value for b: ";
        cin>>b;
        swapping(a,b);

    return 0;
    }