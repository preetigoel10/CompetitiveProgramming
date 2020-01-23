#include <stdio.h>

int main()
{
    int i,size,arr[100],first,middle,last,search;
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&search);

    first=0;
    last=size-1;
    middle = (first+last)/2;

    while(first<=last)
    {
        if(search<arr[middle])
        {
            last=middle-1;
        } else if(search > arr[middle])
        {
            first=middle+1;
        }  else if (first != middle)
        {
        last = middle;
    } else
    {
            printf("found at %d",middle);
            break;
        }

        middle=(first+last)/2;


    }

    if(first>last)
    {
        printf("Not found");
    }




    return 0;
}
