#include <iostream>
#include "creatingll.cpp"
// o(n)
Node *mid(Node *head)
{
   // Node *temp = head;
   // int len = Length(head);
   // Node *fast, *slow;
   // fast = temp->next;
   // slow = temp;
   // while (1)
   // {
   //    slow = slow->next;
   //    fast = fast->next->next;
   //    if (len % 2 == 0 && fast->next == NULL)
   //    {
   //       return slow->data;
   //    }
   //    else if (len % 2 != 0 && fast == NULL)
   //    {
   //       return slow->data;
   //    }
   // }
   Node *slow = head, *fast = head->next;
   if (head == NULL)
      return NULL;
   else if (head->next == NULL)
      return head;
   while (fast != NULL)
   {
      slow = slow->next;
      fast = fast->next->next;
   }
   return slow;
}
int main()
{

   Node *head = NULL;
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   print(head);
   cout << mid(head)->data;
}