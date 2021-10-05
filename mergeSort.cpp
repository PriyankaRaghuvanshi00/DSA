#include <iostream>
using namespace std;
// long long cnt=0;
int merge(long long a[], long long l, long long m, long long r)
{
   long long int i = l, j = m + 1, k = l, temp[r],cnt=0;
   while (i <= m && j <= r)
   {
      if (a[i] < a[j])
      {
         temp[k] = a[i];
         i++;
      }
      else
      {
         temp[k] = a[j];
         j++;
         cnt+=m+1-i;
         // cout<<"i: "<<i<<"m: "<<m;
         // cout<<"counter: "<<cnt<<endl;
      }
      k++;
   }
   while (i <= m)
      temp[k++] = a[i++];
   while (j <= r)
      temp[k++] = a[j++];
   for (long long int kk = l; kk <= r; ++kk)
      a[kk] = temp[kk];
   return cnt;
}
long long mergesort(long long a[], long long l, long long r)
{
   long long cnt = 0;
   if (l < r)
   {
      int mid = l + (r - l) / 2;
      cnt+=mergesort(a, l, mid);
      cnt+=mergesort(a, mid + 1, r);
      cnt += merge(a, l, mid, r);
   }
   return cnt;
}
int main()
{
   long long int a[] = {2, 4, 1, 3, 5}, n = 5;
   cout<<mergesort(a, 0, n - 1)<<endl;
   for (int i = 0; i < n; ++i)
      cout << a[i] << " ";
   cout << endl;
   return 0;
}