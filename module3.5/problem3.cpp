#include<bits/stdc++.h>
using namespace std;

int main()
{


    int n,palin = 0;

    cin>>n;

    int number[n];

    for(int i = 0; i<n; i++)
    {

        cin>>number[i];


    }

    for(int i = 0; i<n/2 && n!=0; i++)

    {

            if(number[i] != number[n - i - 1]){

                palin = 1;
                break;

            }

    }

    if(palin == 1){

        cout<<"NO\n";
    }else{

        cout<<"YES\n";

    }


}

// for(int i = 0; i<n; i++){





