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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        bool ans = isPalindrome(head);
        if (ans) cout << "true";
        else cout << "false";
        cout << endl;
    }
    return 0;
}
*/

bool isPalindrome(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return true;
    Node *current = head;
    Node *prev = NULL;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    if (head->data == current->data)
    {
        prev->next = NULL;
        delete current;
        return isPalindrome(head->next);
    }
    else
        return false;
}
