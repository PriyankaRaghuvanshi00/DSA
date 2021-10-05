#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int  carry = 0;
   vector<int> v;
   v.push_back(1);
   for (int i = 2; i <= n; ++i)
   {
      for (int j = 0; j < v.size(); ++j)
      {
         int mul = v[j] * i + carry;
         v[j] = mul % 10;
         carry = mul / 10;
      }
      while (carry)
      {
         v.push_back(carry % 10);
         carry /= 10;
      }
   }
   for (int k = v.size()-1; k>=0; --k)
      cout << v[k] << " ";
   cout << endl;

   return 0;
}