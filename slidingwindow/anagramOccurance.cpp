#include <iostream>
#include <map>
using namespace std;
bool find(string s, char str)
{
   int i = 0;
   while (i < s.size())
   {
      if (s[i] == str)
         return 1;
      i++;
   }
   return 0;
}
int main()
{
   // xdofr
   string str = "fororxorf", ana = "for", ana_str = "";
   map<char, int> ana_map;
   for (int i = 0; i < ana.size(); ++i)
      ana_map[ana[i]]++;
   int size = str.length(), k = ana.size();
   int j = 0, i = 0, flag = 1;
   while (j < size)
   {
      cout << ana_str << " " << i << " " << j << " " << str[j]<<endl;
      if (ana_map[str[j]] > 0)
      {
         ana_str+= str[j];
         ana_map[str[j]]--;
      }
      if (j - i + 1 == k)
      {
         if(ana_str.size()==k)
         cout << "\n ana_str: " << ana_str << endl;
         ana_map[str[i]]++;
         ana_str=ana_str.substr(1,ana_str.size());
         i++;
         j=i;
      }
      else if (j - i + 1 < k)
         j++;
   }
   return 0;
}