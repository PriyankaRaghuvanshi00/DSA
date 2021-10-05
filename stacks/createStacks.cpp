#include <iostream>
using namespace std;
class Stack
{
public:
   int *arr;
   int top;
   int len;
   Stack(int n)
   {
      len = n;
      arr = new int(n);
      top = -1;
   }
   void Push(int d)
   {
      top++;
      if (len < top)
      {
         cout << "\n out of limit";
         top--;
         return;
      }
      else
      {
         arr[top] = d;
      }
   }
   void Pop()
   {
      if (top == -1)
      {
         cout << "\n empty!";
         return;
      }
      top--;
   }
   int Top()
   {
      if (top == -1)
      {
         return -1;
      }
      return arr[top];
   }
   void print()
   {
      if (top == -1)
      {
         cout << "\n no element to display";
         return;
      }
      for (int i = top; i >= 0; --i)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
};
// int main()
// {
//    Stack s(10);
//    s.Push(1);
//    s.Push(2);
//    s.Push(3);
//    s.print();
//    cout << s.Top() << "  > " << endl;
//    s.Pop();
//    cout << s.Top() << "  > " << endl;
//    s.Pop();
//    s.print();

//    return 0;
// }