#include <iostream>
using namespace std;
int main()
{
   // only for postitve
   int a[] = {4,1,1,1,2,3,5 }, n =7, k =5, j = 0, i = 0, s = 0, max = 0;
   while (j < n)
   {
    s+=a[j];
    if(s>k)
    {
       s-=a[i];
       i++;
    }
    if(s==k)
    {
       int len=(j-i+1);
       max=len>max?len:max;
    }
    j++;
   }
   cout<<max;
   return 0;
}