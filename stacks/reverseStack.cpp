#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> s)
{
   cout << endl;
   while (!s.empty())
   {
      cout << s.top() << " ";
      s.pop();
   }
}

stack<int> reverse(stack<int> s, stack<int> &ans)
{
   if (s.size() == 1)
   {
      int x = s.top();
      s.pop();
      ans.push(x);
      return ans;
   }
   ans.push(s.top());
   s.pop();
   return reverse(s, ans);
}

stack<int> sorted(stack<int> s, int elem)
{
   if (s.size() == 0 || s.top() < elem)
   {
      s.push(elem);
      return s;
   }
   else
   {
      int x = s.top();
      s.pop();
      sorted(s, elem);
      s.push(x);
   }
}
stack<int> sort(stack<int> s)
{
   if (s.size() == 1)
   {
      return s;
   }
   int x = s.top();
   s.pop();
   stack<int> temp = sort(s);
   if (x > temp.top())
   {
      temp.push(x);
   }
   else
   {
      return sorted(temp, x);
   }
   return temp;
}
int main()
{

   stack<int> s, rev, a;
   s.push(4);
   s.push(1);
   s.push(2);
   print(s);
   // rev = reverse(s, a);
   rev = sort(s);
   cout << "Rc";
   print(rev);
   return 0;
}