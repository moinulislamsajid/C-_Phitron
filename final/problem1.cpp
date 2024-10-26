#include<bits/stdc++.h>

using namespace std;

int main()

{

    int t;
    cin>>t;

    for(int i = 0; i<t; i++)
    {

        string s,x;
        cin>>s>>x;

        int index;

        sub_string = "#";

        while(index = s.find(x))!=-1)
        {

            s.replace(index,x.length(),sub_string);

        }

        cout<<s<<endl;
    }
}
