#include<bits/stdc++.h>
using namespace std;

int main()
{
   unsigned long long n, i, ck, box, k, a, co;

   cin>>n>>k;
   long long mini, x;

   for(i=0; i<k; i++)
   {
       cin>>a;
        x = n%a;
        if(i==0){
           mini = x;
            ck = i+1;
            box = n/a;
        }

        else if(x<mini && i>0)
        {
            mini = x;
            ck = i+1;
            box = n/a;
        }
   }

   printf("%llu %llu\n", ck, box);

   return 0;
}
