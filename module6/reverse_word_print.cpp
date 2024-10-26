#include<bits/stdc++.h>
using namespace std;

    void print(stringstream & gg){

        string data;

        if(gg >> data){

            print(gg);
            cout<<data<<endl;

        }


    }

int main(){

    string intro;

    getline(cin,intro);

    stringstream ss(intro);
    print(ss);



}
