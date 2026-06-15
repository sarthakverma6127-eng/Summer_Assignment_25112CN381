//Write a program to rotate array right.
#include<stdio.h>
int main(){
    //Initialize i,n,temp and a[100].
    int i,n,temp,a[100];
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n);
    //Entering the element of array.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //Print the array before rotating.
    printf("===Array before rotating to right===\n");
    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    //Rotating the first element to last.
    if(n>0){
        temp=a[n-1];
        for(i=n-1;i!=0;i--){
            a[i]=a[i-1];
        }
        a[0]=temp;
    }
    //Print the array after rotating.
    printf("\n");
    printf("===Array after rotating to right===\n");
    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
}