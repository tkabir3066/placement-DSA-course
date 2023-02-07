#include<iostream>
#include<conio.h>


using namespace std;


int main(){


int a=1, b=2;


if(a-->0 || ++b>2){
    cout<<"Stage1 - Inside If"<<endl;
}else{
    cout<<"Stage2 - Inside If"<<endl;
}

cout<<a<<" "<<b<<endl; // 0 2

//Stage1 - Inside If
 //0 2

    getch();
}