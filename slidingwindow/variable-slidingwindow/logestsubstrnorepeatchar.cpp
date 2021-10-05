#include <iostream>
#include <map>
using namespace std;
int main()
{
   string str = "abacbbebe";
   int i = 0, j = 0, cnt = 0, max = 0;
   map<char, int> m;
   while (i < str.length())
   {
      m[str[j]]++;
      if (m.size() == (j - i + 1))
      {
         cnt = (j - i + 1);
         max = cnt > max ? cnt : max;
         j++;
      }
      else if (m.size() < (j - i + 1))
      {
         while (m.size() != (j - i + 1))
         {
            m[str[i]]--;
            if (m[str[i]] == 0)
               m.erase(str[i]);
            i++;
         }
         j++;
      }
      else
      {
         j++;
      }
   }
   cout << max << endl;
   return 0;
}