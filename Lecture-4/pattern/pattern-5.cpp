#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"Enter a value: ";
cin>>n;

int row=1;
int count=1;

while(row<=n){
    int col=1;
    while(col<=row){
      cout<<"*"<<" ";
     
      col++;
    }

   cout<<endl;
   row++;
}


    getch();
}

/* 

*       
* *     
* * *   
* * * *
 */

 