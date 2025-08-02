#include <stdio.h>
int main(void)

{
    int n,m,i,mid,key;

    printf("Ente rthe size of array: ");
    scanf("%d",&n);
    int a[n];


    printf("Enter the number of elements: ");
    scanf("%d",&m);


    printf("Enetr the elemnets: ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the want to search: ");
    scanf("%d",&key);
    if(m>10)
    {
        int beg=0;
        int end=m-1;
        int res=-1;

        while(beg<=end)
        {
             mid=(beg+end)/2;

            if(key==a[mid])
            {
                res=mid;
                break;
            }

            else if(a[mid]<key)
            {
                beg=mid+1;
            }

            else
            {
                end=mid-1;
            }
        }


        if(res!=-1)
        {
            printf("THE valuse found at %d",res);

        }
        else
        {
            printf("ERROR");
        }
    }

    else
    {
        int idx=-1;


        for(i = 0; i < m; i++)
        {
            if(key == a[i]) {
                idx = i;
                break;
            }
        }

        if(idx!=-1)
        {
            printf("THE valuse found at %d",idx);

        }
        else
        {
            printf("ERROR");
        }
    }



}

