#include<iostream>
using namespace std;

    int * fun(int x){

        // create a dynamic arrays

        int* array = new int[x]; // ->> here x is a size of arrays.

        for(int i = 0; i<x; i++){

            cin>>array[i];
        }

        return array;


    }

int main(){

    int n;

    cin>>n;

    int * num = fun(n);

    for(int i = 0; i<n; i++){

        cout<<" "<<num[i];
    }




}



