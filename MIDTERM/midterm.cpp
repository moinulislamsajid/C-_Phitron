#include<bits/stdc++.h>
#include<string.h>

using namespace std;


int main()
{
    char str[100001];

    cin.getline(str,100001);
    getchar();

    int len = strlen(str);
    getchar();
    sort(str, str+len);


    cout<<str;



    }




