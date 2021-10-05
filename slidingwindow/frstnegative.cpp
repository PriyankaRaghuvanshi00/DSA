#include <iostream>
using namespace std;
int main()
{
   int a[] = {2, -1, -7, 8, -16, 30, 13,28}, n = 8,k=3;
   int i = 0, j = 0, flag = 0;
   while (j < n)
   {
       
         if (j - i + 1 == k)
      {
         if(flag!=1)
         cout<<0<<" ";
         flag = 0;
         i++;
         j = i;
      }
      if (a[j] < 0 && flag == 0)
      {
         cout << a[j] << " ";
         flag = 1;
      }
    
      j++;
     
   }

   return 0;
}