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






};

     Student* fun(){

            Student* p = new Student(101,3,3.33); // this is a dynamic objects


            return p;


     }






int main(){


    Student* stu = fun();

   cout<<stu->cls<<" "<<stu->roll<<" "<<stu->gpa;



}

