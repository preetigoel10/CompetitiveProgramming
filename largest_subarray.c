#include <stdio.h>

int main()
{
   int s,arr[100],i;

   scanf("%d",&s);

   for(int j=0;j<s;j++)
   {
       scanf("%d",&arr[j]);
   }
   int sum=0,maxsum=0;
   int begin=0,end,be;

   for(i=0;i<s;i++)
   {
       sum=sum+arr[i];
       if(sum<0)
       {
           sum=0;
           begin=i+1;
       } else if(sum>maxsum)
       {
           maxsum=sum;
           be=begin;
           end=i;
       }

   }

   printf("%d %d %d",maxsum,be,end);



    return 0;
}
