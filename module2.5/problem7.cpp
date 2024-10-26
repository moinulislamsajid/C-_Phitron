#include<iostream>
using namespace std;

int main(){

     int a,m;

     cin>>a  ;
     int * A = new int[a];


     for(int i = 0; i<a; i++){

        cin>>A[i];

     }

     cin>>m;
     int * B = new int[m];

    // copy element

    for(int i = 0; i<a; i++){


            B[i] = A[i];
    }
    delete [] A;

    for(int i = 0; i<m; i++){

         cin>>B[i];
    }

    for(int i = 0; i<m; i++){

        cout<<B[i];

    }


    cout<<endl;


    delete[] B;



}
