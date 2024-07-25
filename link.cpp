#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    // creating nodes
    Node *head = nullptr;
    Node *second = nullptr;
    Node *third = nullptr;

    // allcating memory for nodes
    head = new Node();
    second = new Node();
    third = new Node();

    // initaling node data and linking nodes
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;

    // Print the link list
    Node *temp = head;
    cout << "Oriaginal list ";
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " nullstr" << endl;

    // deallcation memory
    while (head != nullptr)
    {
        Node *toDelete = head;
        head = head->next;
        delete toDelete;
    }
    return 0;
}