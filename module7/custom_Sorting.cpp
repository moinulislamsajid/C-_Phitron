#include<bits/stdc++.h>

using namespace std;

class Freq{

    public:

        char value;
        int count;




};

bool cmp(Freq a, Freq b)
{

    if(a.count == b.count){

        return a.value < b.value;
    }

    else

    {
            return a.count > b.count;

    }
}


int main()

{

    string name;

    cin>>name;

    Freq ff[26];

    // initialization the value

    for(int i = 0; i< 26; i++)
    {

        ff[i].value = char (i + 'a');
        ff[i].count = 0;

    }

     // for count

     for(char s : name)
     {

         int asci = int(s - 97);
         ff[asci].count++;
     }

     sort(ff,ff+26,cmp);

     for(int i = 0; i<26; i++)
     {

         if(ff[i].count > 0){

            for(int j = 0; j<ff[i].count; j++){

                cout<<ff[i].value;
            }
         }
     }
}
