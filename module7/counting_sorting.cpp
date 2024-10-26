#include<bits/stdc++.h>

using namespace std;

int main()

{

    string name;
    cin>>name;

    int freq[26] = {0};

    for(char s : name){

        freq[s - 'a']++;
    }

    // print create sorting

    for(char i = 'a'; i<='z'; i++){

        for(int j = 0; j<freq[i - 'a']; j++){

            cout<<i;
        }
    }
}
