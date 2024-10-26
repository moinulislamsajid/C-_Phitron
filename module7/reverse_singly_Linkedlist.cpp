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
        this->next = NULL;
    }

};

void print_rec(Node * n)
{

    if(n == NULL)
    {

        return ;
    }
    else{

        cout<<n->value << " ";
        print_rec(n->next);
    }
}

void printReverse(Node * h)
{

    if(h == NULL)
    {

        return;
    }else
    {

        printReverse(h->next);
        cout<<h->value<<" ";
    }
}

void print(Node * head)

{

    Node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->value<<" ";
        temp = temp->next;
    }

    cout<<endl;
}

void reverse_(Node * &head, Node * curr)

{


    if(curr->next == NULL)
    {

        head = curr;
        return;
    }

    reverse_(head,curr->next);
    curr->next->next = curr;
    curr->next = NULL;




}


int main()

{

    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);

    // connected the node

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;


   // print(head);
   // print_rec(head);
   // printReverse(head);

   reverse_(head,head);
   print(head);
}
