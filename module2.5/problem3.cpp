#include<bits/stdc++.h>

using namespace std;


int main(){


        int n;

        cin>>n;


        int number[n];




        for(int i = 0; i<n; i++){

            cin>>number[i];
        }



        for(int i = 0; i<n - 1; i++){

            for(int j = 0; j<n - i - 1; j++){

                if(number[j] > number[j+1]){

                        swap(number[j],number[j+1]);
                }
            }
        }

        for(int i = 0; i<n; i++){

            cout<<number[i]<<" ";
        }

        }




