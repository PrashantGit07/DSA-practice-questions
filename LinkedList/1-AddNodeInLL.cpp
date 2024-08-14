#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    // adding data into node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Insert a node at head of the LinkedList

// steps -
//  take a node and a data variable
// point the new temp node at head of the linked list
// now make the newly inserted node the head of the linked list
void InsertAtHead(Node *&head, int data)
{

    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// printing the LinkedList
void PrintLinkedList(Node *&head)
{
    Node *temp = head;

    while (temp->next != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Node *node1 = new Node();

    // created a new node

    Node *node1 = new Node(10);

    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // printing before adding new node at head
    PrintLinkedList(node1);
    // inserting new node at head of the linked list using function InsertAtHead()
    Node *head = node1;
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);

    // printing after adding new node at head of the LL
    PrintLinkedList(head);
}