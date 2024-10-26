#include<iostream>

using namespace std;

class Student{

public :

    int roll;



};



int main()

{

    int n;

    cin>>n;

    Student stu[n];
    for(int i = 0; i<n; i++)
    {

        cin>>stu[i].roll;
    }



}
