#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node * next;
};

Node * insertNode(Node * head, int data)
{
    Node * new_elem = new Node;
    new_elem->data = data;
    new_elem->next = NULL;


    if (head == NULL)
        return head = new_elem;


    Node * tmp = head;

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = new_elem;
    return head;
}

void printList(Node * head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout <<endl;
}

Node * SortList(Node * A, Node * B)
{
    if (A == NULL)
        return B;
    if (B == NULL)
        return A;

    if (A->data < B->data)
    {
        A->next = SortList(A->next, B);
    }
    else
    {
        Node * tmp = B->next;
        B->next = A;
        A = B;
        B = tmp;
        A->next = SortList(A->next, B);
    }
    return A;
}

Node * swapNode(Node * head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node * tmp = head->next;
    head->next = head->next->next;
    tmp->next = head;
    head = tmp;

    head->next->next = swapNode(head->next->next);

    return head;
}

Node * reverse(Node * head)
{
    Node * prev = NULL;
    Node * curr = head;

    if (curr == NULL)
        return curr;

    while (curr->next != NULL)
    {
        Node * tmp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = tmp;
    }
    curr->next = prev;
    return curr;
}

Node * reverseR(Node * curr)
{
    if (curr == NULL)
        return NULL;
    if (curr->next == NULL)
        return curr;

    Node * head = reverseR(curr->next);
    curr->next->next = curr;
    curr->next = NULL;
    return head;
}
int main()
{
    Node * head = NULL;
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);
     head = insertNode(head, 32);
      head = insertNode(head, 34);
    Node * head2 = NULL;
    head2 = insertNode(head2, 8);
    head2 = insertNode(head2, 15);
    head2 = insertNode(head2, 25);
    head2 = insertNode(head2, 35);
    head2 = insertNode(head2, 45);

    //Node * sH = SortList(head, head2);
   // printList(head);
   // head = swapNode(head);
   Node * rH = reverseR(head);
    printList(rH);

}
