#include <iostream>
#include <map>
using namespace std;
int main()
{
   string s = "CODEBANC", t = "ABC";
   int i = 0, j = 0;
   map<char, int> m;
   int a[2] = {0, 0};
   for (int i = 0; i < t.length(); ++i)
      m[t[i]]++;
   int count = m.size(), min = 9999990, min_temp = 0;
   while (j < s.length())
   {
      if (count == 0)
      {
         while (count == 0)
         {
            m[s[i]]++;
            if (m[s[i]] > 0)
            {
               count++;
               if (count != 0)
               {
                  min_temp = (j - i);
                  min = min_temp < min ? min_temp : min;
                  if (min = min_temp)
                  {
                     a[0] = i;
                     a[1] = j-1;
                  }
               }
            }
            i++;
         }
      }
      else
      {
         m[s[j]]--;
         if (m[s[j]] == 0)
         {
            count--;
         }
      }
      j++;
   }
   cout << min << endl;
   for (int j = a[0]; j <= a[1]; ++j)
      cout << s[j];
   return 0;
}