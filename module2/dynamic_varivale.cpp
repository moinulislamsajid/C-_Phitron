#include<iostream>

using namespace std;

int * fun(){

    //create a dynamic variable

    int * b = new int;

    * b = 400;

    cout<<"\n fun ar modda : "<<b;

        return b;
}

int main(){

    int* v = new int;

    *v = 100;

    cout<<*v;

    int * c = fun();

    cout<<"Function ar : "<<*c;


}
