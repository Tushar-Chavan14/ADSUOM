// 11. Program to insert last element in SLLL
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
}

int main()
{
    Node *head = NULL;
    append(&head, 4);
    cout << "Created Linked list is: ";
    printList(head);
    return 0;
}