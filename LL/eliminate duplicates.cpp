#include <iostream>
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
using namespace std;
#include "solution.h"
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        head = removeDuplicates(head);
        print(head);
    }
    return 0;
}
*/

Node *removeDuplicates(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return head;
    Node *current = head;
    while (current->next != NULL)
    {
        if (current->data == (current->next->data))
        {
            Node *temp = current->next->next;
            delete current->next;
            current->next = temp;
        }
        else
            current = current->next;
    }
    return head;
}
