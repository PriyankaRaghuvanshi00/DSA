#include <iostream>
using namespace std;
class Node
{
public:
   Node *next;
   char data;

   Node()
   {
      this->next = NULL;
   }
   Node(int data)
   {
      this->data = data;
      this->next = NULL;
   }
};
void print(Node *head)
{
   cout << "\n output: ";
   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }
   cout << endl;
}

Node *Insert(Node *head)
{
   Node *tail = NULL;
   char data;
   cin >> data;
   Node *n1 = new Node(data);
   if (head == NULL)
   {
      head = n1;
      tail = n1;
      return head;
   }
   else
   {
      tail = head;
      while (tail->next != NULL)
      {
         tail = tail->next;
      }
      tail->next = n1;
      tail = n1;
   }
   return head;
}
int Length(Node *head)
{
   Node *temp = head;
   int i = 0;
   while (temp != NULL)
   {
      i++;
      temp = temp->next;
   }
   return i;
}

bool isVowel(char c)
{
   if (c == 'a' || c == 'A' || c == 'e' || c == 'E')
      return 1;
   if (c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
      return 1;
   return 0;
}
Node *arrange(Node *head)
{
   //Code here
   Node *t = head, *v = head;
   int pos = 0;
   while (v != NULL)
   {

      if (isVowel(v->data))
      {
         v = v->next;
      }
      else
      {
         break;
      }
      pos++;
   }

   int i = 0;
   while (i < pos - 1 && t != NULL)
   {
      t = t->next;
      i++;
   }
   v = t->next;
   while (v != NULL)
   {
      if (isVowel(v->next->data))
      {
         Node *temp = v->next;
         v->next = temp->next;
         temp->next = t->next;
         t->next = temp;
         t = temp;
      }
      v = v->next;
   }
   return head;
}

int main()
{
   char str[] = "Acropolis";
   int a = -56;
   cout << ~a;
}