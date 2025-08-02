#include<stdio.h>
int main (void)

{
    int n,m,i,mid,key;


    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the number of elements: ");
    scanf("%d",&m);


    printf("Enter the elements: ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }

    int beg=0;
    int end=m-1;
    int res=-1;



    printf("Enter the value want to search: ");
    scanf("%d",&key);

    while(beg<=end)

    {
         mid=((beg+end)/2);


        if(a[mid]==key)
        {
           res=mid;
           break;
        }

        else if(a[mid]>key)
        {
            end=mid-1;
        }

        else
        {
            beg=mid+1;
        }

    }

        if(res!=-1)
        {
            printf("THE VALUE FOUND AT %d \n",res);
        }


        else
        {
            printf("ERRPR");
        }



    return 0;
}
