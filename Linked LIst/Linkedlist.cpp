#include <iostream>
using namespace std;
#include "nodeclass.cpp"

Node* takeInput()
{
    int data;
    cin>>data;

    Node *head = NULL;
    Node *tail = NULL;

    while(data != -1)
    {
        Node *newNode = new Node(data);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = tail->next;
        }
        cin>>data;
    }
    return head;
}

    void print(Node *head)
    {
        while(head != NULL)
        {
            cout<<head -> data << " ";
            head = head -> next;
        }
    }
int main()
{
    Node *head = takeInput();
    cout<<head<< endl;
    print(head);
/*
    Node n1(1);
// Node *head = &n1;
    Node n2(2);

    n1.next = &n2;
//  cout << head -> data <<endl;

    //Dynamically

    Node *n3 = new Node(10);
    Node *n4 = new Node(20);
    Node *head = n3;
    n3 -> next = n4;
    cout << head -> data << endl;


    Node n1(1);
    Node *head = &n1;

    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    print(head);
    print(head);
*/













}
