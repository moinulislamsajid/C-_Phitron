#include<iostream>

using namespace std;

    int * fun( ){

        int *b = new int;

        *b = 129;

        cout<<"\nAddress of fun function"<<b;

        return b;

    }


int main(){

    int * c = new int; // dynamic variable creation

    *c = 484;

    cout<<c;
    cout<<endl;
    cout<<*c;

    int* j = fun();

    cout<<"\nValue of : "<<*j;



}
