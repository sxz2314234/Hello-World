#include <stdio.h>
int main()
{
    int a[10]={0};
    int i=0,j;
    int removeDuplicates(int* nums, int numsSize);
    for(;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    j=removeDuplicates(a,10);
    printf("%d",j);
}
int removeDuplicates(int* nums, int numsSize)
{
 int fast=1,slow=0;
 while(fast<numsSize)
 {
     if(nums[fast]!=nums[slow])
     {
         nums[slow+1]=nums[fast];
         slow++;
     }
     fast++;
 }
 return slow+1;
}