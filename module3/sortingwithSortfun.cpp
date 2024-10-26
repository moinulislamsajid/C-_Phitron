#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin>>n;

    int number[n];

    for(int i = 0; i<n; i++){

        cin>>number[i];
    }

    // using sort function to sort ascending order

    //sort(number, number+n) ;// here we need to 2 parameter first parameter is -> starting pointer and at last is ending + 1 pointer means size of arrays.

    // using descending order

    sort(number, number+n, greater<int>());


    for(int i = 0; i<n; i++){

         cout<<number[i]<<" ";
    }




}
