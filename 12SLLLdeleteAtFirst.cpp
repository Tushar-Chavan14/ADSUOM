// 12. Program to delete first element from SLLL

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
Node *removeFirstNode(struct Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;

    delete temp;

    return head;
}

int main()
{
    Node *head = NULL;
    push(&head, 7);
    push(&head, 1);
    head = removeFirstNode(head);
    for (Node *temp = head; temp != NULL; temp = temp->next)
        cout << temp->data << " ";
    return 0;
}