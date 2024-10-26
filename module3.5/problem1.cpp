#include<bits/stdc++.h>

using namespace std;


int main(){


    int x,y;
    char sym;

    cin>>x>>sym>>y;


    if((sym == '>' && x>y) || (sym == '<' && x < y) || (sym == '=' && x==y)){


        cout<<"Right\n";


    }else {

            cout<<"Wrong\n";

     }



}
