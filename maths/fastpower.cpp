#include <iostream>
#include <math.h>
using namespace std;
int power(int a, int b)
{
   while (b)
   {
      if (b % 2 == 0)
         return (power(a, b / 2) * power(a, b / 2));
      else
         return (a * power(a, floor(b / 2)));
   }
   return a;
}
int main()
{
   int a, b;
   cin >> a >> b;
   cout << power(a, b);
   return 0;
}