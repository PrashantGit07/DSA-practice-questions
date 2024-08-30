// #include <iostream>
// using namespace std;

// class Node
// {

// public:
//     int data;
//     Node *next;

//     // adding data into node
//     Node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };

// // Insert a node at head of the LinkedList

// // steps -
// //  take a node and a data variable
// // point the new temp node at head of the linked list
// // now make the newly inserted node the head of the linked list
// void InsertAtHead(Node *&head, int data)
// {

//     Node *temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }

// // printing the LinkedList
// void PrintLinkedList(Node *&head)
// {
//     Node *temp = head;

//     while (temp->next != nullptr)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main()
// {
//     // Node *node1 = new Node();

//     // created a new node

//     Node *node1 = new Node(10);

//     // cout << node1->data << endl;
//     // cout << node1->next << endl;

//     Node *head = node1;
//     // printing before adding new node at head
//     PrintLinkedList(head);
//     // inserting new node at head of the linked list using function InsertAtHead()
//     InsertAtHead(head, 12);
//     InsertAtHead(head, 15);

//     // printing after adding new node at head of the LL
//     PrintLinkedList(head);
// }
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // Constructor to initialize a node
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// Inserting at the head of the linked list
void InsertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Inserting at the tail of the linked list
void InsertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}

// Inserting in a particular position in the linkedList

void InsertAtPosition(Node *&tail, Node *&head, int position, int data)
{

    // case where desired position is start of the LL
    if (position == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }

    // case if desired position is end of the  linkedList
    if (temp->next == nullptr)
    {
        InsertAtTail(tail, data);
        return;
    }

    // creating a new node for the data to insert
    Node *newNodeToInsert = new Node(data);

    newNodeToInsert->next = temp->next;
    temp->next = newNodeToInsert;
}

// Printing the linked list
void PrintLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Initializing the linked list with one node
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    PrintLinkedList(head);

    // Inserting at the head
    InsertAtHead(head, 12);
    InsertAtHead(head, 15);
    PrintLinkedList(head);

    cout << "-------------------------" << endl;

    // Inserting at the tail
    InsertAtTail(tail, 17);
    InsertAtTail(tail, 20);
    PrintLinkedList(head);

    cout << "-------------------------" << endl;

    InsertAtPosition(tail, head, 4, 2);
    PrintLinkedList(head);
}
