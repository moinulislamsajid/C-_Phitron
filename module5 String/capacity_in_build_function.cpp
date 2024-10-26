#include<bits/stdc++.h>

using namespace std;

int main()

{

    string str = "Ayman Sajid";

    // size of string

    cout<<str.size()<<endl;

    // maximum size of string my machine

     cout<<str.max_size()<<endl;

     //  now check capacity

     cout<<str.capacity( )<<endl;

     // create a new variable to check his capacity

     string check_capacity;

     cout<<check_capacity.capacity()<<endl;


     // check clear

     string name = "Ayman Sajid";
     cout<<name;

     // then use clear method

     name.clear();

     // then print the value

     cout<<name<<endl;

     // check empty or not in string

     // empty is the bool  return type return true or false.
     // whenever return true than the string is empty either string is not empty.

     string uni_name = "DIU";

     if(uni_name.empty() == true){

        cout<<"This is empty !!\n";
     }else{

        cout<<"This is not empty\n";
     }

     // resize  function

     string home = "Faridpur";

     home.resize(5);
     home.resize(15,'S');

     cout<<home.size()<<endl;
     cout<<home<<endl;




}
