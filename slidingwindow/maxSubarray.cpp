#include <iostream>
using namespace std;
int main()
{
   int a[20] = {1, 3, -1, -3, 5, 3, 6, 7}, n = 8, sum[20], K = 3, i = 0, j = 0, k = 0, s = 0;
   while (j < n)
   {
      s += a[j];
      if ((j - i + 1) == K)
      {
         sum[k++] = s;
         s = s - a[i];
         i++;
         j++;
      }
      else
         j++;
   }
   for (int i = 0; i < k; ++i)
      cout << sum[i] << " ";
cout<<endl;
   return 0;
}