#include <iostream>
#include <stack>

using namespace std;

stack<int> InsertEnd(stack<int> st, int d)
{
   stack<int> temp = st, push_back;
   while (!temp.empty())
   {
      push_back.push(temp.top());
      temp.pop();
   }
   temp.push(d);
   while (!push_back.empty())
   {
      temp.push(push_back.top());
      push_back.pop();
   }
   return temp;
}
stack<int> DeleteFront(stack<int> st)
{
   st.pop();
   return st;
}
void print(stack<int> s)
{
   cout << endl;
   while (!s.empty())
   {
      cout << s.top() << " ";
      s.pop();
   }
}
int main()
{
   stack<int> s;
   s = InsertEnd(s, 1);
   s = InsertEnd(s, 2);
   s = InsertEnd(s, 3);
   print(s);
   s = DeleteFront(s);
   s = DeleteFront(s);
   print(s);

   return 0;
}