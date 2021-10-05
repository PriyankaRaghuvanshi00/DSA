#include <iostream>
using namespace std;
class Node
{
public:
   int data;
   Node *next;
   Node(int data)
   {
      this->data = data;
   }
};
Node *InsertEnd(Node *head)
{
   Node *t = head, *n;
   int d;
   cout << "\n enter the data: ";
   cin >> d;
   n = new Node(d);
   if (head == NULL)
   {
      head = n;
      n->next = head;
      return head;
   }
   else if (head->next == head)
   {
      n->next = head;
      head->next = n;
      return head;
   }
   while (t->next != head)
   {
      t = t->next;
   }
   t->next = n;
   n->next = head;
   return head;
}
Node *InsertBeg(Node *head)
{
   Node *t = head, *n;
   int d;
   cout << "\n enter the data: ";
   cin >> d;
   n = new Node(d);
   n->next = head;
   while (t->next != head)
   {
      t = t->next;
   }
   head = n;
   t->next = head;
   return head;
}
void print(Node *head)
{
   Node *t = head;
   cout << head->data << " ";
   t = t->next;
   while (t != head)
   {
      cout << t->data << " ";
      t = t->next;
   }
   cout << endl;
}
int Length(Node *head)
{
   int cnt = 1;
   Node *t = head->next;
   while (t != head)
   {
      cnt++;
      t = t->next;
   }
   return cnt;
}
Node *InsertPos(Node *head)
{
   Node *t = head, *n;
   int d, p;
   cout << "\n enter the postion: ";
   cin >> p;
   int len = Length(head);
   if (p > len)
      return head;
   else if (p == 0)
      return InsertBeg(head);
   else if (p == len - 1)
      return InsertEnd(head);
   cout << "\n enter the data: ";
   cin >> d;
   n = new Node(d);
   int i = 0;
   while (i < p - 1)
   {
      t = t->next;
   }
   n->next = t->next;
   t->next = n;
   return head;
}

Node *DeleteBeg(Node *head)
{
   Node *t = head;
   while (t->next != head)
      t = t->next;
   t->next = head->next;
   head = head->next;
   return head;
}
Node *DeleteEnd(Node *head)
{
   Node *t = head;
   while (t->next->next != head)
   {
      t = t->next;
   }
   t->next = head;
   return head;
}
Node *DeletePos(Node *head)
{
   Node *t = head, *n;
   int d, p;
   cout << "\n enter the postion: ";
   cin >> p;
   int len = Length(head);
   if (p > len)
      return head;
   else if (p == 0)
      return DeleteBeg(head);
   else if (p == len - 1)
      return DeleteEnd(head);
   int i = 0;
   while (i < p - 2)
      t = t->next;
   t->next = t->next->next;
   return head;
}
Node *Reverse(Node *head)
{
   Node *final = head->next;
   Node *cur = head, *prev = NULL;
   while (1)
   {
      prev = cur;
      if (final == head)
      {
         head->next = cur;
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
int main()
{
   Node *head = NULL;
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   print(head);
   cout << "\n Length: " << Length(head) << endl;
   // head = InsertBeg(head);
   // head = InsertBeg(head);
   // head = InsertPos(head);
   // head = DeleteBeg(head);
   // head = DeleteEnd(head);
   head = DeletePos(head);
   print(head);
}