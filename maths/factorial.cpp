#include <iostream>
using namespace std;
int fact(int n)
{
   if (n == 1 || n == 0)
      return 1;
   return n * fact(n - 1);
}
int trailingZero(int n)
{
   int res = 0;
   for (int i = 5; i <= n; i = i * 5)
   {
      res += n / i;
   }
   return res;
}
bool plindrome(int n)
{
   int temp=n,num=0;
   while(temp)
   {
      int rem=temp%10;
      num=num*10+rem;
      temp/=10;
   }
   if(num==n)
   return 1;
   else
   return 0;
}

int main()
{
   int n;
   cin >> n;
   // cout << fact(n);
   // cout << "\n trailing zeros are : " << trailingZero(n);
   // cout << "\n Number is a palindrome(1-true/0-false) : " << plindrome(n);
   return 0;
}