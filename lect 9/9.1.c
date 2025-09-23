//patterns
#include<stdio.h>
int main(){
    for (int i = 0; i < 4; i++)
    {
        for ( int j = 3; j>i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k<=i; k++)
        {
            printf("*");
        }
        for (int p = 1; p<=i; p++)
        {
            printf("*");
        }
        printf("\n");
    }
}
//
#include <stdio.h>
int main()
{
    for(int i=1;i<=4;i++){
         for(int j=1;j<=2*(4-i);j++){
             printf("*");
         }
         printf("\n");
     }
    }
    //
    #include<stdio.h>
    int main(){
     for (int i = 0; i < 4; i++)
     {
         for (int j = 0; j <= i; j++)
         {
             printf("*");
         }
         for (int k = 4; k > i; k--)
         {
             printf(" ");

           
         }
          for (int p = 4; p > i; p--)
             {
                 printf(" ");
             }
             for(int r=0;r<=i;r++){
                 printf("*");
             }
         printf("\n");
    }
}
//fill diagonal wise
#include<stdio.h>
int main(){
    int n=4;
    int arr[n][n];
    int num=1;
    for (int d = 0; d < 2*n-1; d++)
    {
        if (d%2==0)
        {
            for (int i = 0; i <=d; i++)
            {
              int j=d-i;
              if (i<n&&j<n)
              {
                arr[i][j]=num++;
              }
              
            }
            
        }
        else{
            for (int i = d; i >= 0; i--) {
                     int j = d - i;
                if (i < n && j < n) {
                {
                    arr[i][j]=num++;
                }
                
            }
            
        }
    }
    //print matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
        printf("%3d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
}
//
#include<stdio.h>
int main(){
    int n=4;
    int num=1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            int d= row+ col;
            int val;
            if (d % 2 == 0) {
                int i=row;
                int j=col;
                val=0;
                for (int x= 0; x <=d; x++)
                {
                    int a=x;
                    int b=d-x;
                    if (a<n&&b<n)val++;
                 
                }
                num+=val;
                printf("%3d",num-val);
                num-=(val-1);     
        }
    }
}
}
