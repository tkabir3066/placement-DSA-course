// sum of 1 to n

#include<iostream>
#include<conio.h>


using namespace std;


int main(){


int n;
cout<<"Enter the value of n : ";
cin>>n;

int sum=0;

for(int i=1; i<=n; i++){
    sum += i;
}
cout<<sum;
    getch();
}