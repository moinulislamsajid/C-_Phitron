#include<bits/stdc++.h>
using namespace std;

class Student{


public :

    string name;
    int roll;
    int marks;


};

int main()

{

    int n;

    cin>>n;

    // create an arrays of objects

    Student stu[n];

    for(int i = 0; i<n; i++){

        cin>>stu[i].name>>stu[i].roll>>stu[i].marks;
    }

    for(int i = 0; i<n; i++){

        cout<<stu[i].name<<" "<<stu[i].roll<<" "<<stu[i].marks<<endl;
    }

    Student st;

    st.marks = INT_MAX;

    for(int i = 0; i<n; i++)
    {

         if(stu[i].marks < st.marks){

            st = stu[i]; // retain the minimum number of the student.
         }

    }

    cout<<st.name<<" "<<st.roll<<" "<<st.marks<<endl;


}
