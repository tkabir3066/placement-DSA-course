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
    while(col<=row){
      cout<<row<<" ";
     
      col++;
    }

   cout<<endl;
   row++;
}


    getch();
}

/*

1       
2 2     
3 3 3   
4 4 4 4

 */

 