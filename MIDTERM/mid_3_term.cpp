#include<bits/stdc++.h>
using namespace std;

int main(){


    int t,n,s;

    cin>>t;

    for(int i = 0; i<t; i++){

        cin>>n>>s;

        int number[n];

        for(int i = 0; i<n; i++){


            cin>>number[i];


        }

        bool found = false;

        for(int i = 0; i< n - 2 && !found; i++){

            for(int j = i + 1; j < n -1 && !found; j++){

                for(int k = j + 1; k<n && !found; k++){

                    if(number[i] + number[j] + number[k] == s){

                    found = true;
                    cout<<"YES\n";
                    break;
                    }

                }
            }
        }

        if(!found){

            cout<<"NO\n";
        }


     }




}
