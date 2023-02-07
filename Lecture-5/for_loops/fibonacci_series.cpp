#include<iostream>
#include<conio.h>

using namespace std;


int main(){

int n;
cout<<"Enter the value of n : ";
cin>>n;

int a=0, b=1;
cout<<a<<" "<<b<<" ";
for(int i=1; i<=n; i++){

    int nextNumber = a+b;
    cout<<nextNumber<<" ";

    a=b;
    b=nextNumber;
}




    getch();
}