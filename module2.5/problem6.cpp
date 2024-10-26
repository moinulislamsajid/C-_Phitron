#include<iostream>

using namespace std;

int* arrayN(int x){

        int*number = new int[x];

        for(int i = 0; i<x; i++){

            cin>>number[i];
        }

        return number;



}


 int main(){

    int n;

    cin>>n;

    int* num = arrayN(n);


    for(int i =0; i<n; i++){

        cout<<<<" "<<num[i];
    }





 }
