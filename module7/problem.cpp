#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string x = "I hate";

    for(int i = 1; i<n; i++)
    {
        if(i%2==1)
        {
            x+="that i love";

        }else{

            x+="that i hate";
        }

    }


    x+="it";
}
