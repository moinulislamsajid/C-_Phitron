#include<iostream>
using namespace std;

 int * fun(){

    int * v = new int;

    cout<<"fun v : "<<v;
    *v = 300;

    return v;

 }

int main(){


    // dynamic memory allocation

    int*b = new int;

    *b = 100;

    cout<<*b<<endl;

    // receive or call the function

    int * n =  fun();

    cout<<"\nmain ar "<<n;



}
