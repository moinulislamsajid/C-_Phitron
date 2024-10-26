#include<iostream>

using namespace std;

int main(){


    // dynamic arrays declared

    int n;

    cout<<"Enter your arrays size : ";
    cin>>n;


    int * a = new int[n];

    for(int i = 0; i<n; i++){

        cin>>a[i];
    }

    cout<<"Arrays Element : ";
    for(int i = 0; i<n; i++){

        cout<<" "<<a[i];
    }


}
