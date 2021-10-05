#include <iostream>
using namespace std;

// complexity O(sqrt(N))
int isprime(int n)
{
   if(n==1)
   return 0;
   for(int i=2;i*i<n;++i)
   {
      if(n%i==0)
       return 0;
   }
   return 1;
}
// complexity O(N*N)
void seive_of_eratostheses(int n)
{
   bool prime[n + 1];
   for (int i = 2; i <= n; ++i)
   {
      prime[i] = true;
   }

   for (int i = 2; i * i <= n; ++i)
   {
      if (prime[i])
      {
         for (int j = 2 * i; j <= n; j += i)
         {
            if (j % i == 0)
            {
               prime[j] = 0;
            }
         }
      }
   }
   for (int i = 2; i <= n; ++i)
   {
      if (prime[i])
      {
         cout << i << endl;
      }
   }
}
int main()
{
   int n;
   cin >> n;
   seive_of_eratostheses(n);
   cout<<isprime(n);
   return 0;
}