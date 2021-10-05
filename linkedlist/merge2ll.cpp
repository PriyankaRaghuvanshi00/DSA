#include <iostream>
#include "creatingll.cpp"

Node *MergeSorted(Node *h1, Node *h2)
{
   Node *head = NULL, *tail = NULL;
   Node *temp1 = h1, *temp2 = h2;
   while (temp1 != NULL && temp2 != NULL)
   {
      int x;
      if (temp1->data < temp2->data)
      {
         x = temp1->data;
         temp1 = temp1->next;
      }
      else
      {
         x = temp2->data;
         temp2 = temp2->next;
      }
      Node *n = new Node(x);
      if (head == NULL)
      {
         head = n;
         tail = n;
      }
      else
      {
         tail->next = n;
         tail = n;
      }
   }
   while (temp1 != NULL)
   {
      Node *n = new Node(temp1->data);
      if (head == NULL)
      {
         head = n;
         tail = n;
      }
      else
      {
         tail->next = n;
         tail = n;
      }
      temp1 = temp1->next;
   }
   while (temp2 != NULL)
   {
      Node *n = new Node(temp2->data);
      if (head == NULL)
      {
         head = n;
         tail = n;
      }
      else
      {
         tail->next = n;
         tail = n;
      }
      temp2 = temp2->next;
   }
   return head;
}
int main()
{
   Node *head = NULL;
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   Node *head2 = NULL;
   head2 = Insert(head2);
   head2 = Insert(head2);
   head2 = Insert(head2);
   head2 = Insert(head2);
   head2 = Insert(head2);
   print(head);
   print(head2);
   Node *fhead = MergeSorted(head, head2);
   print(fhead);
}