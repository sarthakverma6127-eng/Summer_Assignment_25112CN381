//Write a program to Find pair with given sum.
#include<stdio.h>
int main(){
    //Initialize i,j,n,a[100],key,count.
    int i,j,n,a[100],key,count=1;
    printf("Enter the number of element:");
    //Take input in c.
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);               //Entering the element in array.
        scanf("%d",&a[i]);
    }
    printf("Enter the sum:");
    scanf("%d",&key);                        //Take in sum in key.
    printf("===Pair for sum===\n");
    for(i=0;i<n-1;i++){                       //Outer loop for first number.
        for(j=i+1;j<n;j++){                   //Second loop for second number.
            if(a[i]+a[j]==key){               //Checking the condition and print the i and j.
                printf("(%d,%d)",a[i],a[j]);
                count=0;
            }
        }
        printf("\n");
    }
    //if the pair was not found.
    if(count==1){
        printf("===Pair not found===");       
    }
    return 0;
}