#include<iostream>
#include<string>
using namespace std;
main()
{
    string c;
    cin>>c;
    int n= c.size();
    int freq[n];
    for(int i=0;i<n;i++)
    {
        freq[i] = -1;
    }
    for(int i=0;i<n;i++)
    {
        int count =1;
        for(int j=i+1;j<n;j++)
        {
            if(c[i]==c[j])
            {
                count++;
                freq[j]=0;
            }
        }
         if(freq[i]!=0)
         {
             freq[i] = count;
         }
    }

    for(int i=0;i<n;i++)
    {
        if(freq[i]!=0)
        {
            cout<<c[i]<<" "<<freq[i]<<endl;
        }
    }

}
