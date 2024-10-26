#include<bits/stdc++.h>

using namespace std;

class Student{

public :

    int roll;
    int cls;
    float gpa;

    // create a constructor


    Student(int roll,int cls, float gpa){


        this->roll = roll;
        this->cls =  cls;
        this->gpa =  gpa;



    }


    void display(){


    cout<<"Your Roll is : "<<roll;
    cout<<"\nYour class is : "<<cls;
    cout<<"\nYour gpa is : "<<gpa;

    }



};

     Student fun(){

            Student s1(101,3,3.33);

            return s1;


     }






int main(){


    Student stu = fun();

    stu.display();



}
