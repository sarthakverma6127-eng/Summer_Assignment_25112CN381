//Write a progream to find the missing number of array.
#include<stdio.h>
int main(){
    //Initialize i,n,m,s,esum,asum,a[100].
    int i,n,s,a[100],esum,asum=0,m;
    //Take input in s.
    printf("Enter the number of element:");
    scanf("%d",&s);
    n=s+1;                   //Due to missing element the size of array will be 1 more. 
    for(i=0;i<s;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                         //Entering the elements in array.
    }
    esum=(n*(n+1))/2;                              //Calculate the expexted sum.
    for(i=0;i<s;i++){
        asum+=a[i];                                //Calculate the actual sum. 
    }
    m=esum-asum;                                   //Difference of expected sum and actual sum is the missing number.
    printf("Missing number of array will be %d.",m);
    return 0;
}