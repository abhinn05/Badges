#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int count_even=0;
        int count_odd=0;
    for(int i=0;i<6;i++)
    {
        
        if(a[i]%2==0)
        {
           
            count_even++;
        } 
        else
        {
            count_odd++;
        }
        
    }
        printf("count even=%d\ncount odd= %d ",count_even,count_odd);

}