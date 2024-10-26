#include<bits/stdc++.h>

using namespace std;

int main()

{
    string name;

    getline(cin,name);

    stringstream string_strm(name);

    string word;

    while(string_strm >> word){


        cout<<word<<endl;
    }


}
