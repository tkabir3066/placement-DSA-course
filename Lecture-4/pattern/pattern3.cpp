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

        cout<<j;
        j++;
    }

   cout<<endl;
   i++;
}


    getch();
}

/* 
output:
1234
1234
1234
1234

 */