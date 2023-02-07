#include<iostream>
#include<conio.h>

using namespace std;

int main(){

 int n;
 cout<<"Enter the value of n : ";
 cin>>n;

// Method-1

 int count=0;
 for(int i=2; i<n; i++){

   if(n%i==0){
    count++;
    break;
   }

 }

 if(count==0){
    cout<< "Prime";
 }else{
    cout<<"not prime";
 } 






    getch();
}