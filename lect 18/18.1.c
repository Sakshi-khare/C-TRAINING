//2d array
#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
         printf("%d",arr[i][j]);
      }printf("\n");
      
    }
    
}
//calculate sum of 2d array 
#include<stdio.h>
int main(){
    int sum=0;
       int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
     {
        sum=sum+arr[i][j];
}
printf("%d",sum);
    }
}
//find max and min value in 2d array
#include<stdio.h>
int main(){
  int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
  int i,j;
  int max=arr[0][0],min=arr[0][0];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j <3; j++)
    {
        if (arr[i][j]>max)
        {
            max=arr[i][j];
        }
        if (arr[i][j]>min)
        {
            min =arr[i][j];
        }
        
    }
    
  }
  printf("max value of arr:%d\n",max);
  printf("min value of arr:%d\n",min);
  return 0;
}
//calculate sum of 2d array row wise
#include<stdio.h>
int main(){
      int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
      for (int i = 0; i < 3; i++)
      {
        int sum=0;
        for (int j = 0; j < 3; j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d",sum);
      }
      
}
//convert 2d array in 1d array
#include<stdio.h>
int main(){
       int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        int arr1[9];
        int k=0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                arr1[k]=arr[i][j];
                k++;
            }
      printf("%d",arr1[k]);
        }

}
//take two array and print max value
//transpose the matrix
#include<stdio.h>
int main(){
  int arr[2][3]={{1,2,3},{4,5,6}};
  int transpose=[3][2];
  int i,j;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      transpose[j][i]=arr[i][j];
    }
    
  }
  printf("transpose of matrix:\n");
  for (int i = 0; i <3; i++)
  {
    for (int j = 0; i < 2; j++)
    {
      printf("%d",transpose[j][i]);
    }
    printf("\n");
  }
  return 0;
}

