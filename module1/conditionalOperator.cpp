#include<iostream>

using namespace std;


int main(){


    int x,y,num1,num2;

    cout<<"please enter two number : ";
    cin>>num1>>num2;


    x = (num1>num2) ? num1 : num2;

    y = (num2<num1) ? num2 : num1;


    cout<<x<<endl;
    cout<<y<<endl;





}
