#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;

    cin>>n;

    int number[n];

    for(int i = 0; i<n; i++){

         cin>>number[i];
    }

    int maxi = INT_MIN;




    for(int i = 0; i<n; i++){


            maxi = max(maxi,number[i]);

    }


    cout<<maxi<<endl;




}
