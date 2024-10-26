#include<bits/stdc++.h>

using namespace std;

int main()
{

    int x,y,z;

    cin>>x>>y>>z;

    int minimum,maximum;

    if(x<=y && x<=z){

       minimum = x;

    }else if(y<=x && y<=z){

        minimum = y;

    }else{

        minimum = z;

    }


    if(x>=y && x>=z){

        maximum = x;

    }else if(y>=x && y>=z){


        maximum = y;


    }else {


        maximum = z;

    }


    cout<<minimum << " " << maximum;


}


