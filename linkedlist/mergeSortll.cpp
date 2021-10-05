#include <iostream>
#include "./creatingll.cpp"
using namespace std;
void MidPoint(Node *head, Node **first, Node **second)
{
   Node *slow = head, *fast = head->next;
   while (fast != NULL)
   {
      fast = fast->next;
      if (fast != NULL)
      {
         fast = fast->next;
         slow = slow->next;
      }
   }
   *first = head;
   *second = slow->next;
   slow->next = NULL;
}
Node *Merge(Node *first, Node *second);
void MergeSort(Node **head)
{
   Node *first, *second, *cur = *head;
   if (!cur || !cur->next)
      return;
   MidPoint(cur, &first, &second);
   MergeSort(&first);
   MergeSort(&second);
   *head = Merge(first, second);
}
Node *Merge(Node *first, Node *second)
{
   Node *answer = NULL;
   if (!first)
      return second;

   if (!second)
      return first;
   if (first->data < second->data)
   {
      answer = first;
      answer->next = Merge(first->next, second);
   }
   else
   {
      answer = second;
      answer->next = Merge(first, second->next);
   }
   return answer;
}
int main()
{
   Node *head = NULL, *first, *second;
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   head = Insert(head);
   print(head);
   MergeSort(&head);
   print(head);
}