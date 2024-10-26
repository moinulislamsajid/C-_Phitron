#include<bits/stdc++.h>

using namespace std;

class Student{

public:

    int roll;

};

bool cmp(Student a, Student b)
{
     if(a.roll > b.roll)   return true;
     else return false;
}


int main()

{

    int n;

    cin>>n;

    Student stu[n];

    for(int i = 0; i<n; i++)
    {

         cin>>stu[i].roll;
    }

    sort(stu,stu+n,cmp);

    for(int i = 0; i<n; i++)
    {

        cout<<stu[i].roll;
    }



}
