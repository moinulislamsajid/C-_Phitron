#include<iostream>

using namespace std;

int * fun(int n){

    int * num = new int[n];


    for(int i = 0; i<n; i++){

        cin>>num[i];
    }

    return num;




}


int main(){

    int n;

    cin>>n;

    int * number = fun(n);

    for(int i = 0; i<n; i++){

        cout<<number[i]<<" ";
    }



}
