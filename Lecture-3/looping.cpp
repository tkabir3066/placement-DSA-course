#include<iostream>
#include<conio.h>

using namespace std;

int main(){

// looping
 
 //print 1 to n
/*  int n;
 cout<<"Enter a digit : ";
 cin>>n;

 int i=1;
 while (i<=n)
 {
    cout<< i<<endl;
    i++;
 }
  */

// print sum 1 to n

  int n;
  cout<<"Enter an integer : ";
  cin>>n;

  int i=0, sum=0;

  while(i<=n){
    sum=sum+i;
    i++;
  }
  
cout<<"sum = "<<sum;
    getch();
}