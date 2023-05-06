#include <iostream>
using namespace std;

int main(){
    int x,a[99];
        cout<<"Enter sequence: ";
        cin>>x;
        
        a[0]=0;
        a[1]=1;
        for (int i=2; i<x; i++){
            a[i]= a[i-1]+a[i-2];
        }
        
        cout<<"the sequence is: ";
        for (int e=0; e<x; e++){
            cout<<" "<<a[e];
        }
        return 0; 
    
}