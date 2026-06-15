//Write a program to reverse array.
#include<stdio.h>
int main(){
    //Initialize i,n,a[100].
    int i,n,a[100];
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n);
    //Entering the element of array.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("===Reverse of array===\n");
    //Print the reverse of array.
    for(i=n-1;i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}