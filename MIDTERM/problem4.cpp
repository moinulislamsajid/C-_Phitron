#include <bits/stdc++.h>

using namespace std;



int main()
{
     int t;
     cin>>t;

    for(int i = 0; i<t; i++){

        int id[3],marks[3];
         string name[100];
         char section[3];

        for(int i = 0; i<3; i++){

             cin>>id[i]>>name[i]>>section[i]>>marks[i];

             }


        int index = 0;

        for(int i = 1; i<3; ++i){

            if(marks[i] > marks[index] || (marks[i] == marks[index] && id[i] < id[index])){

                index = i;
            }

        }

        cout<<id[index]<<" "<<name[index]<<" "<<section[index]<<" "<<marks[index]<<endl;





    }





    return 0;
}
