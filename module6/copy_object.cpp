#include<iostream>
using namespace std;

class persion{

public :


    string name;
    int age;

    persion(string name, int age){


        this->name = name;
        this->age = age;

    }


};

int main()

{


    persion * sajid = new persion("Ayman Sajid",23);
    persion * juniyad = new persion("Juniyad Akndah",24);

    // now copy to sajid to juniyad

    *sajid = * juniyad;

    delete juniyad;

    cout<<sajid->name<<" "<<sajid->age<<endl;



}
