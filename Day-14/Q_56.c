//Write a program to find duplicates in array.
#include<stdio.h>
int main(){
    //Initialize a[100],i,j,n and temp.
    int a[100],i,j,temp,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);                                    //Take input in n.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                        //Entering the element in array.
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];                             //Sorting array by bubble sorting.
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("===Dulplicate element===\n");
    for(i=0;i<n;i++){
        if(a[i]==a[i+1]){
            printf("%d\n",a[i]);                      //Checking the duplicate element by cheching the forword element is equal or not.
        }
    }
    return 0;
}