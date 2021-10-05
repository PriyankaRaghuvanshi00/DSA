#include <iostream>
using namespace std;
int binary_expon(int base, int power)
{
   int res = 1;
   while (power != 0)
   {
      if (power % 2 == 0)
      {
         base = base * base;
         power/=2;
      }
      else
      {
         res = base * res;
      power--;
      }
   }
   return res;
}
int main()
{
   int a, n;
   cin >> a >> n;
   cout<<binary_expon(a,n);
   return 0;
}