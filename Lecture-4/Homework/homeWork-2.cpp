#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"Enter a value: ";
cin>>n;

int i=1;
while(i<=n){

    int j=1;
    int count=0;

    while (j<=i)
    {
       cout<<count;
        count++;
        j++;
       
    }
    
    cout<<endl;
    i++;
}




    getch();
}


/* 

9 8 7
6 5 4 
3 2 1 
 */