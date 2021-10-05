#include <iostream>
using namespace std;
class Node
{
public:
   int data;
   Node *prev;
   Node *next;
   Node(int dta)
   {
      this->data = dta;
      this->next = NULL;
      this->prev = NULL;
   }
};
Node *InsertEnd(Node *head)
{
   int x;
   cout << "\n enter the data: ";
   cin >> x;
   Node *n, *tail = NULL;
   n = new Node(x);
   if (head == NULL)
   {
      head = n;
   }
   else
   {
      tail = head;
      while (tail->next != NULL)
         tail = tail->next;
      tail->next = n;
      n->prev = tail;
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
void printRev(Node *head)
{
   Node *temp = head;
   while (temp->next != NULL)
   {
      temp = temp->next;
   }
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->prev;
   }
   cout << endl;
}
Node *InsertBeg(Node *head)
{

   int x;
   cout << "\n enter the data: ";
   cin >> x;
   Node *n, *tail = NULL;
   n = new Node(x);
   if (head == NULL)
   {
      head = n;
   }
   else
   {
      n->next = head;
      head->prev = n;
      n->prev = NULL;
      head = n;
   }
   return head;
}
int Length(Node *head)
{
   int i = 0;
   Node *t = head;
   while (t != NULL)
   {
      i++;
      t = t->next;
   }
   return i;
}
Node *InsertPos(Node *head)
{
   int x, pos;
   cout << "\n enter the position: ";
   cin >> pos;
   if (pos == 1)
   {
   }
   else
   {
      cout << "\n enter the data: ";
      cin >> x;
   }

   Node *n, *tail = NULL;
   n = new Node(x);
   int len = Length(head);
   if (len < pos)
   {
      cout << "\n out of range ";
      return head;
   }
   if (pos == 1)
   {
      return InsertBeg(head);
   }
   if (pos == len)
      return InsertEnd(head);
   int i = 0;
   pos--;
   Node *t = head;
   while (i < pos - 1)
   {
      i++;
      t = t->next;
   }
   n->next = t->next;
   n->prev = t;
   t->next = n;
   return head;
}
Node *DeleteBeg(Node *head)
{
   head->next->prev = NULL;
   head = head->next;
   return head;
}
Node *DeleteEnd(Node *head)
{
   Node *t = head;
   if (head->next == NULL)
      return NULL;
   while (t->next != NULL)
   {
      t = t->next;
   }
   t->next = NULL;
   return head;
}
Node *DeletePos(Node *head)
{
   int pos;
   cout << "\n enter the position";
   cin >> pos;
   Node *t = head;
   if (t->next == NULL || t == NULL)
      return NULL;
   int len = Length(head);
   if (pos > len)
      return head;
   if (pos == 1)
   {
      head = head->next;
      head->prev = NULL;
      return head;
   }
   int i = 0;
   t = head;
   pos--;
   while (i < pos - 1)
   {
      i++;
      t = t->next;
   }
   cout << t->data;

   Node *temp = t->next;
   temp->next->prev = t;
   t->next = temp->next;
   return head;
}
/*
 
   */
Node *Reverse(Node *head)
{
   Node *cur = head, *prev = NULL;
   while (cur != NULL)
   {
      prev = cur->prev;
      cur->prev = cur->next;
      cur->next = prev;
      cur = cur->prev;
   }
   return prev->prev;
}
int main()
{
   Node *head = NULL;
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   head = InsertEnd(head);
   cout << "\n Output : ";
   print(head);
   // cout << "\n Output In Reverse : ";
   // printRev(head);
   // head = Reverse(head);
   // head = DeleteBeg(head);
   // head = DeleteEnd(head);
   // head = DeletePos(head);
   cout << "\n Output : ";
   print(head);
   // cout << "\n Output In Reverse : ";
   // printRev(head);
   return 0;
}