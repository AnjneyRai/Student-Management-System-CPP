#include <stdio.h>
void min(int [], int);
void max(int [], int);
int main(){
    int arr[5]= {2,5,1,8,3};
    min(arr,5);
    max(arr,5);
    return 0;
}

void min(int arr[], int n){
    int i;
    int ans=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<ans)
        ans = arr[i];
    }
    printf("%d is the smallest element \n", ans);
}

void max(int arr[], int n)
{
    int i;
    int ans = arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>ans)
        ans=arr[i];
    }
    printf("%d is the largest element", ans);
}