//reverse 2d array row wise
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j>=0; j--)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");  
    }
}
//spiral array
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int top=0,bottom=2,left=0,right=2;
    int i;
    while (top<=bottom&&left<=right)
    {
        for ( i = left; i < =right; i++)
        {
            printf("%d",arr[top][i]);
        }
        top++;
        for ( i = top; i < =bottom; i++)
        {
            printf("%d",arr[i][right]);
        }
        right--;
        if (top<=bottom)
        {
            for (int i = right; i >=left; i--)
            {
                printf("%d",arr[bottom][i]);
            }
            bottom--;
        }
        if (left<=right)
        {
            for ( i = bottom; i >=top; i--)
            {
                printf("%d",arr[i][left]);
            }
            left++;
        }
    }
    return 0;
}
//zig zag pattern
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
        if (i==0 || i==2)
        {
         printf("%d",arr[i][j]);
        }
        else if (j=3-i-1)
        {
            printf
        }
        
    }
    
}