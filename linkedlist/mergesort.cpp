#include <iostream>
#include "creatingll.cpp"
using namespace std;
Node *Merge(int l, int mid, int r, Node *h)
{
   Node *head = NULL, *temp = h;
   int i = l, k = l, j = mid + 1;
   while (i <= mid && j <= r)
   {
   }
}
Node *MergeSort(int l, int r, Node *h1)
{
   if (l < r)
   {
      int mid = (l + r) / 2;
      MergeSort(l, mid, h1);
      MergeSort(mid + 1, r, h1);
      return Merge(l, mid, r, h1);
   }
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
   int len = Length(head);
   MergeSort(0, len, head);
}
