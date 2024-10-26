#include<bits/stdc++.h>
using namespace std;

class Node
{

public :

    int value;
    Node * next;

    Node(int value)
    {

        this->value = value;
        this->next = NULL:
    }
};


void insert_tail(Node * & head, Node * &tail,int val)


{

    Node * newNode = new Node(val);

    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;

    }else{

            tail->next = newNode;
            tail = newNode;

    }


}


void palimdrome(Node * head)
{

    vector<int> v;

    Node * temp = head;

    while(temp != NULL)

    {
        v.push_back(temp->value);
        temp = temp->next;
    }

    vector<int> t;

    t = v;

    reverse(t.begin(), v.end());

    if(v==t)
    {

        cout<<"YES";
    }
    else
    {

        cout<<"NO";
    }


}
