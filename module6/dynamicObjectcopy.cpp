#include<iostream>

using namespace std;

class persion{

public :

    string name;
    int age;

    // create a constructor

    persion(string name, int age){

        this->name = name;
        this->age = age;


    }



};

int main()

{

    persion * sajid = new persion("Ayman Sajid", 21);
    persion * sakib = new persion("Samiur Sakib",17);

    *sajid = *sakib;
    delete sakib;

    cout<<sajid->name<<"  "<<sajid->age<<endl;



}
