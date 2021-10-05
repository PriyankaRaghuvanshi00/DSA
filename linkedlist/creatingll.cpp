#include <iostream>
using namespace std;
class Node
{
public:
   Node *next;
   int data;

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
   int data;
   cout << "\nenter the data";
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

Node *InsertAtPos(Node *head)
{
   int pos, data;
   cout << "\nenter the position";
   cin >> pos;
   cout << "\nenter the data";
   cin >> data;
   pos--;
   Node *temp = head;
   Node *n1 = new Node(data);
   int i = 0;
   int len = Length(head);
   if (len < pos - 1)
   {
      cout << "\n Out of range";
      return head;
   }
   // if at beginning
   if (pos == i)
   {
      n1->next = head;
      head = n1;
      return head;
   }
   // annywhere or in end
   while (i != pos - 1)
   {
      i++;
      temp = temp->next;
   }

   n1->next = temp->next;
   temp->next = n1;
   return head;
}
Node *InsertBeg(Node *head)
{
   Node *temp = head;
   int data;
   cout << "\nenter the data";
   cin >> data;
   Node *n1 = new Node(data);
   n1->next = head;
   head = n1;
   return head;
}

Node *Delete(Node *head)
{
   head = head->next;
}

Node *DeleteEnd(Node *head)
{
   Node *temp = head;
   while (temp->next->next != NULL)
   {
      temp = temp->next;
   }
   temp->next = NULL;
   return head;
}
int lenRecur(Node *head)
{
   if (head == NULL)
      return 0;
   return 1 + lenRecur(head->next);
}
Node *DeleteAtPos(Node *head)
{
   int pos, data;
   cout << "\nenter the position";
   cin >> pos;
   pos--;
   Node *temp = head;
   int i = 0;
   int len = Length(head);
   if (len < pos - 1)
   {
      cout << "\n Out of range";
      return head;
   }
   // if at beginning
   if (pos == i)
   {
      return Delete(head);
   }
   // annywhere or in end
   while (i != pos - 1)
   {
      i++;
      temp = temp->next;
   }

   temp->next = temp->next->next;
   return head;
}

// int main()
// {
//    Node *head = Insert();
//    print(head);
//    head = InsertAtPos(head);
//    print(head);
//    head = InsertEnd(head);
//    print(head);
//    head = InsertEnd(head);
//    print(head);

//    cout << "\n Length" << Length(head) << endl;
//    cout << "\n  Recursive Length" << lenRecur(head) << endl;
//    head = Delete(head);
//    print(head);
//    // head = DeleteEnd(head);
//    // print(head);
//    // head = DeleteAtPos(head);
//    // print(head);

//    return 0;
// }