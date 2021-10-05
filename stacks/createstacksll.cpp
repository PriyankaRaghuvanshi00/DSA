#include <iostream>
#include "../linkedlist/creatingll.cpp"
int main()
{
   Node *head = NULL;
   head = InsertBeg(head);
   head = InsertBeg(head);
   head = InsertBeg(head);
   head = InsertBeg(head);
   print(head);
   head = Delete(head);
   head = Delete(head);
   print(head);
   return 0;
}