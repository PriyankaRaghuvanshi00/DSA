#include <iostream>
#include "creatingll.cpp"
using namespace std;
Node *Reverse(Node *head)
{
   Node *final = head->next;
   Node *cur = head, *prev = NULL;
   while (1)
   {
      prev = cur;
      if (final == NULL)
      {
         head = cur;
         return head;
      }
      cur = final;
      final = final->next;
      if (prev == head)
      {
         prev->next = NULL;
      }
      cur->next = prev;
   }
}
Node *RecuReverse(Node *head)
{
   if (head == NULL || head->next == NULL)
      return head;
   Node *subarry = RecuReverse(head->next);
   Node *t = subarry;
   while (t->next != NULL)
      t = t->next;
   t->next = head;
   head->next = NULL;
   return subarry;
}
int main()
{
   Node *head = NULL;
   cout << "\n enter the linkedlist\n";
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   print(head);
   // Node *h = Reverse(head);
   Node *h = RecuReverse(head);
   print(h);
   return 0;
}