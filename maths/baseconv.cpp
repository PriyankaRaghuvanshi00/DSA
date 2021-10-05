#include <iostream>
#include <vector>
using namespace std;
vector<int> ans;
void decimal(int n)
{
   if (n == 1)
   {
      ans.push_back(n);
      return;
   }
   ans.push_back(n % 2);
   decimal(n / 2);
}
int main()
{
   int n;
   cin >> n;
   decimal(n);
   string str="";
   for (int i = ans.size()-1; i >=0; --i)
      str+=to_string(ans[i]);
   cout<<str;
   return 0;
}