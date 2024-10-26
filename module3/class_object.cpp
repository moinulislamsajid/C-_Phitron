#include<iostream>
using namespace std;


class Student{


    // to write access modifier

public :

    char name[100];

    int roll;

    float gpa;

    void show(){

        cout<<"\nYour name is : "<<name;
        cout<<"\nYour Roll is : "<<roll;
        cout<<"\nYour gpa is  : "<<gpa;

    }



};

int main(){


    Student s1;

    cin>>s1.name>>s1.roll>>s1.gpa;
    s1.show();



}
