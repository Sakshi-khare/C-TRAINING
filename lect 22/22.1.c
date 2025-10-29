//malloc and calloc
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter size:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n* sizeof(int));
    //int*arr=(int*)calloc(n,sizeof(int));
    printf("enter %d elements:\n",n);
    for (int i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    free(arr);
 printf("\nnow enter new size:");
 int newsize;
 scanf("%d",&newsize) ;
 arr=(int*)realloc(arr, newsize*sizeof(int));
 printf("enter %d new elements:\n", newsize);
 for (int i = 0; i < newsize; i++)
 scanf("%d,&arr[i]");
 printf("\nupdated array:\n");
 for (int i = 0; i < newsize; i++)
 {
    printf("%d",arr[i]);
 }
 
}

