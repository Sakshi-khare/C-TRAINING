//swapping of 3 array
#include<stdio.h>
int main(){
    int a1[5]={4,0,3,5,0};
    int a2[5]={4,5,3,0,0};
    int a3[5]={3,5,4,0,6};
    int temp;
    //swapping of non zero elements
    for (int i = 0; i < 5; i++)
    {
        if (a1[i]!=0&&a2[i]!=0&&a3[i]!=0)
        {
            temp=a1[i];
            a1[i]=a2[i];
            a2[i]=a3[i];
            a3[i]=temp;
        }
    }
    //printing arrays after swapping
    printf("array 1:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",a1[i]);
    }
    printf("\n array 2:");
   for (int i = 0; i < 5; i++)
   {
      printf("%d",a2[i]);
   }
   printf("\n array 3:");
   for (int i = 0; i < 5; i++)
   {
     printf("%d",a3[i]);
   }
   
    
}