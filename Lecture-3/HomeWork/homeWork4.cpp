#include<iostream>
#include<conio.h>
#include<string>


using namespace std;


int main(){
// check input number is prime or not
int num, count=0;
cout<<"Enter a number:";
cin>>num;

for(int i=2; i<num; i++){
  if(num%i==0){
   count++;
   break;
  }
}
 
 if(count==0){
  cout<<"Prime number";
  }else{
    cout<<"not Prime"; 
  }

  getch();
}

