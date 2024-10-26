#include<bits/stdc++.h>

using namespace std;

int main()

{


    string a = "Ayman ";
    string b = "Sajid";

    a+=b; // this called append with out keyword using operator

    cout<<a<<endl;

    // using append keyword

    string c = "sajid";
    string d = " sakib";

    c.append(d);

    cout<<c<<endl;

    // insert last index element

    string uni_name = "DI";

    //uni_name[2] = "U"; // this wrong process
    //uni_name = "DIU"; // rignt

    //uni_name += "U"; // right way

    // this is right why to insert last element

    uni_name.push_back('U');

    cout<<uni_name<<endl;
    //if you delete last element you use pop_back();    cout<<uni_name;

    uni_name.pop_back();

    cout<<uni_name<<endl;

    // now we try assign a value form another

    string people = "Allah";
    string alhamdullah;

    people.assign("Suban_Allah");

    cout<<people<<endl;

    // erase or any one character delete from string

    string village = "Goalpara";

    village.erase(4,2); // this erase function accept two parameter 1 first parameter use in which element delete at first and second how much element are deleted.
    cout<<village<<endl;

    // now time to work replace

    string college = "Yeasin college";
    cout<<college<<endl;

    // now replace

    college.replace(6,8,"University");
    cout<<college<<endl;

    string abbu = "Mojibur Rahman";

    abbu.replace(7,0,"Love You");

    cout<<abbu<<endl;

    // if you use insert

    string ammu = "Rebeka Akther";\

    ammu.insert(6,"Pakhi");
    cout<<ammu<<endl;






}
