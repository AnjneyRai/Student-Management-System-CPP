#include <stdio.h>
int main()
    {
       int nums[10]={1,2,3,1,2,3,4,4,4,5};
       for(int i=0;i<10;i++)
       {
        int c =1;
        for(int j=i+1;j<10;j++)
        {
            if(nums[i]==nums[j])
            c++;
        }
        printf("Frequency of %d is %d\n", nums[i],c);
       }
    
    return 0;
}