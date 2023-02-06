#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"Enter a value: ";
cin>>n;

int row=1;

while(row<=n){
    int col=1;
    int value=row;
    while(col<=row){
      cout<<value;
      value= value + 1;
      col++;
    }

   cout<<endl;
   row++;
}


    getch();
}

/*

1    
2 3   
3 4 5  
4 5 6 7 
5 6 7 8 9

 */

 