#include<bits/stdc++.h>

using namespace std;

int main()

{

    string name;

    cin>>name; // this is a address or pointer

    //for(int i = 0; i<name.size(); i++){

        //cout<<name[i]<<endl;
    //}

    cout<<*name.begin()<<endl; // this can not be access able this is address of string or pointer.
    cout<<*(name.end()-1)<<endl; // if you access this type of address we need to dereferance


    //create a iterator


    string his = "You Save Me Plese";

     //string :: iterator it;

     for(auto it = his.begin(); it<his.end(); it++){


            cout<<*it<<endl;
     }





}
