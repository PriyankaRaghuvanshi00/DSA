#include <iostream>
#include <vector>
using namespace std;
string a[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printNo(int n)
{
   if (!n)
   {
      return;
   }
   printNo(n / 10);
   cout << a[n % 10] << " ";
}
int expo(int n)
{
   if (n == 0)
      return 1;
   return 2 * expo(n - 1);
}
void Subset(vector<int> arr, vector<int> out, int ind)
{
   if (ind >= arr.size())
   {
      for (int i = 0; i < out.size(); ++i)
         cout << out[i] << " ";
      cout << endl;
      return;
   }
   Subset(arr, out, ind + 1);
   out.push_back(arr[ind]);
   Subset(arr, out, ind + 1);
}
int Stair(int n)
{
   if (n == 1 || n == 0)
      return 1;
   if (n < 0)
      return 0;
   return Stair(n - 1) + Stair(n - 2) + Stair(n - 3);
}
void Subsequence(string a, int i, string answer)
{
   if (i >= a.size())
   {
      cout << answer << "   ";
      answer = "";
      return;
   }
   Subsequence(a, i + 1, answer);
   answer = answer + a[i];
   Subsequence(a, i + 1, answer);
}
int main()
{
   int n;
   // cin >> n;
   // printNo(n);
   // cout << expo(n) << " ";
   vector<string> a, b;
   // a.push_back(1);
   // a.push_back(2);
   // a.push_back(3);
   // Subset(a, b, 0);
   // cout << Stair(4) << endl;
   Subsequence("abc", 0, "");
   return 0;
}