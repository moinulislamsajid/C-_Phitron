#include<iostream>

using namespace std;

 int* ret_fun(int x){


    int* number = new int[x];

    for(int i = 0; i<x; i++){

        cin>>number[i];
    }

    return number;


 }


int main(){

    int c;

    cin>>c;

    int* num = ret_fun(c);

    for(int i = 0; i<c; i++){

        cout<<" "<<num[i];
    }



}
