#include<iostream>
#include<conio.h>

using namespace std;


int main(){


  // Home Work-2
  // Print sum of all even number from 1 to n;

   int n;
   cout<<"Enter an integer : ";
   cin>>n;

   int i=2, sum=0;

  //method-1
  //  while (i<=n)
  //  {
    
  //   sum = sum+i;
  //   i+=2;
  //  }

// // method-2
//   while(i<=n){
//      if(i%2==0){
//       sum=sum+i;
//      }
//       i+=1;
//   }

   // method-3
  while(i<=n){
     if(i%2==0){
      sum=sum+i;
      i+=2;
     }
  }
   cout<<"Sum is = "<<sum;
   

  

    getch();
}