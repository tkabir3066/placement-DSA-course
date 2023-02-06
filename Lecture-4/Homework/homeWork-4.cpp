#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n;
cout<<"Enter a value: ";
cin>>n;

int row=1;
while(row<=n){
    int col=row;
   
    while(col<row*2){
      cout<<col<<" ";
      
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

 