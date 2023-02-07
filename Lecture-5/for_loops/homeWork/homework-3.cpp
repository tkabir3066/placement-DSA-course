#include<iostream>
#include<conio.h>

using namespace std;


int main(){



for(int i=0; i<=15; i+=2){

    cout<< i<< " ";  //0 3 5 7 9 11 13 15 

    if(i&1){
        continue;
    }
    i++;
}
cout<<endl;
for(int i=0; i<=15; i+=2){

    cout<< i<< " "; //0 3 6 9 12 15

    // if(i&1){
    //     continue;
    // }
    i++;
}



    getch();
}