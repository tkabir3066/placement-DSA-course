#include<iostream>
#include<conio.h>


using namespace std;


int main(){


// method-2

 int n;
 cout<<"Enter the value of n : ";
 cin>>n;
 bool isPrime=1;  // true=1
 for(int i=2; i<n; i++){

   if(n%i==0){
    isPrime=0;
    break;
   }

 }


 if(isPrime==1){
    cout<< "Prime";
 }else{
    cout<<"not prime";
 } 




    getch();
}