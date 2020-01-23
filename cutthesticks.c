#include <iostream>

using namespace std;

int main()
{
    int s;
    cin>>s;
    int stick[s];

    for(int i=0;i<s;i++)
    {
        cin>>stick[i];
    }
    int temp;
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
            if(stick[i]>stick[j])
            {
                temp=stick[i];
                stick[i]=stick[j];
                stick[j]=temp;
            }
        }

    }

    int left=s;
    int shortest = stick[0];
    cout<<left;
    for(int i=1;i<s;i++)
    {
        if(stick[i]!=shortest)
        {
            shortest = stick[i];
            left = s-i;
            cout<<left;

        }
    }


    return 0;
}

