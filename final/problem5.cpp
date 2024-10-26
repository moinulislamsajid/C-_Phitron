#include<bits/stdc++.h>

using namespace std;

class Student

{

public :

    string name;
    int cls;
    char sec;
    int id;
    int math_m;
    int eng_m;





};

bool cmp(Student a, Student b)
{

    if(a.eng_m < b.eng_m)
    {
        return true;
    }else if(a.eng_m > b.eng_m){

        return false;
    }else{

        if(a.math_m < b.math_m){

            return true;

        }else if(a.math_m > b.math_m){

            return false;

        }else{

            if(a.id>b.id){

                return true;
            }else{

                return false;
            }

        }

    }


}

int main()

{

    int n;

    cin>>n;

    Student stu[n];

    for(int i = 0; i<n; i++)
    {

        cin>>stu[i].name>>stu[i].cls>>stu[i].sec>>stu[i].id>>stu[i].math_m>>stu[i].eng_m;
    }



    sort(stu,stu+n,cmp);
    for(int i = 0; i<n; i++)
    {

        cout<<stu[i].name<<" "<<stu[i].cls
        <<" "<<stu[i].sec<<" "<<stu[i].id<<" "
        <<stu[i].math_m<<" "<<stu[i].eng_m<<endl;
    }


}
