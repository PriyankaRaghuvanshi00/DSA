#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
void Print(vector<int> arr, vector<int> &a, int n, int i, int sum)
{
   if (i >= n)
   {
      a.push_back(sum);
      sum = 0;
      return;
   }
   Print(arr, a, n, i + 1, sum);
   Print(arr, a, n, i + 1, sum + arr[i]);
}
void Print2(int prev, vector<int> &out)
{
   if (prev == 1)
   {
      out.push_back(prev);
      return;
   }
   out.push_back(prev);
   int cur;
   if (prev % 2 == 0)
   {
      cur = floor(sqrt(prev));
   }
   else
   {
      cur = floor(pow(prev, 1.5));
   }
   prev = cur;
   // cout << cur << endl;
   Print2(cur, out);
}
int main()
{
   vector<int> a, b;
   a.push_back(2);
   a.push_back(3);
   // Print(a, b, 2, 0, 0);
   Print2(9, b);
   for (int i = 0; i < b.size(); ++i)
      cout
          << b[i] << endl;
   return 0;
}