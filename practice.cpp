#include <iostream>
using namespace std;
#include <math.h>
#include <map>
// printintg last character that is not repeated
string print(string s)
{
   string ch = "-1";
   map<char, int> m;
   for (int i = 0; i < s.size(); ++i)
      m[s[i]] = 0;
   for (int i = 0; i < s.size(); ++i)
      m[s[i]]++;
   for (int i = s.size() - 1; i >= 0; --i)
      if (m[s[i]] == 1)
      {
         ch = s[i];
         break;
      }
   return ch;
}

// largest continuous sorted array in givenn array
void largest(int a[], int n)
{
   int i = 0, j = 0, cnt = 0, max = 0, start = 0, end = 0, f_st = 0, f_en = 0;
   while (j < n)
   {
      j++;
      if (a[j] > a[j - 1])
      {
         cnt = j - i + 1;
         start = i;
         end = j;
      }
      else
      {
         if (max < cnt)
         {
            max = cnt;
            f_st = start;
            f_en = end;
         }
         start = 0;
         end = 0;

         i++;
         j = i;
      }
   }
  for(int i=f_st;i<=f_en;++i)
  cout<<a[i]<<" ";
}
int lenLargest(int a[],int n)
{
   long int i = 0, j = 0, cnt = 0, max = 0;
   while (j < n)
   {
      j++;
      if (a[j] > a[j - 1])
      {
         cnt = j - i + 1;
      }
      else
      {
         if (max < cnt)
         {
            max = cnt;
         }
         i++;
         j = i;
      }
   }
return max;
}
int main()
{
   // string s;
   // cin >> s;
   // cout << print(s);
   int arr[] = {17, 3, 18};
   // largest(arr, 10);
   cout<<lenLargest(arr,3);
   return 0;
}