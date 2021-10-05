#include<iostream>
using namespace std;
// prime factorisation in O(logn)
void primeFactor(int n)
{
   for(int i=2;i*i<=n;++i)
   {
      if(n%i==0)
      {
         int temp=n ,cnt=0;
         while(temp%i==0)
         {
            cnt++;
            temp/=i;
         }
         cout<<i<<"^"<<cnt<<endl;
      }
   }
   if(n>1)
   cout<<n<<"^"<<1<<endl;
}
int main()
{
   int n;
   cin>>n;
   primeFactor(n);
   return 0;
}