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
    while(j<=n){

        cout<<n-j+1;
        j++;
    }

   cout<<endl;
   i++;
}


    getch();
}

/* 
4321
4321
4321
4321
 */