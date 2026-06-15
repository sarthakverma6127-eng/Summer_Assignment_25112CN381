//Write s program to rotate array left.
#include<stdio.h>
int main(){
    //Initialize i,n,temp and a[100].
    int a[100],i,n,temp;
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n);
    //Entering the element of the array. 
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("===Before rotating the array to left===\n");
    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    //Shifting the last value to first value.
    if(n>0){
        temp=a[0];
        for(i=0;i<n-1;i++){
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }    
    printf("\n");
    printf("===After roataing the array===\n");
    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    return 0;
}