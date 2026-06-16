//Write a program to remove dupliactes from array.
#include<stdio.h>
int main(){
    //Initilaize i,j,n,a[100],temp,e and count.
    int i,j,n,a[100],temp,count=1,e;
    printf("Enter the number of element:");
    //Take the input in n.
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);             //Entering the elements in array.
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];         //Sorting the array by bubble sorting.
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            temp=a[i];
            for(j=i;j<n-1;j++){
                a[j]=a[j+1];             //checking the dupliacte elements in the sorted array.
                count=0;
            }
            i--;          //checking the elements again after shifting.
            n--;          //Reducing the size of the array.
        }
    }
    if(count==1){
        printf("===This have not any duplicate element===");
    }
    else{
        printf("===After removing dupliact elements===\n");
        for(i=0;i<n;i++){
            printf("%d\n",a[i]);
        }
    }
   
    return 0;
}