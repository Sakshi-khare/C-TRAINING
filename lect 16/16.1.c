//sorted array
#include<stdio.h>
int main(){
    int arr[5]={1,4,5,65,3};
    int n=sizeof(arr)/sizeof(int);
    int i,j,temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }  
        }
        
    }
    printf("sorted array :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[j+1]);
    }
    return 0;
}
//BUBBLE SORT: SORTING IN DESCENDING ORDER
#include<stdio.h>
int main(){
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter input no.%d:",i+1);
        scanf("%d",a[i]);
    }
    for (int i= 0; i <5; i++)
    {
        int count=0;
        for (int j = 0; j < 4; j++)
        {
            if (a[j]<a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                count++;
            }
            
        }
        if (count==0)
        {
            break;
        }
        for (int j = 0; j <5; j++)
        {
            printf("%d\t",a[j]);
        }
        printf("\n");
    }
    printf("\nDESECENDING ORDER:\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
    
}