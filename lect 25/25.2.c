//best time to buy and sell stock
//find min price and using that find max profit
#include<stdio.h>
int main(){
    int arr[6] ={7,1,5,3,6,4};
    int minprice=arr[0];
    int maxp=0;
    for (int i = 1; i < 6; i++)
    if (arr[i]<minprice)
    {
        
        minprice = arr[i];
    }
    
   
    else
    {
        int profit=arr[i]-minprice;
        if ( profit>maxp)
        {
            maxp=profit;
        }
        
    }
    printf("%d",maxp);
}