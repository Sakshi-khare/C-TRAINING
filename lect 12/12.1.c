//print array
#include<stdio.h>
int main(){
    int arr[6]={0,1,2,3,4,4};
    printf("%d",arr[2]);
}
//loop
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }
    
}
//reverse loop
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    for (int i = 4; i>=0 ; i--)
    {
        printf("%d",arr[i]);
    }
    
}
//sum of array
#include<stdio.h>
int main(){
    int arr[5]={1,1,2,3,4};
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
       sum=sum+arr[i];
    }
}
//max  or min number
#include<stdio.h>
int main(){
    int arr[5]={3,12,52,34,5};
    int max=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }  
    }
    return 0;
}
#include<stdio.h>
int main(){
    int arr[5]={3,12,52,34,5};
    int target=3;
    for (int i = 0; i < 5; i++)
    {
        if("%d",arr[i]==target){
       printf("%d",arr[i]);
       break;
        }
    }
} 