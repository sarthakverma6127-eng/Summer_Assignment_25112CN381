//Write a program to bubble sort.
#include<stdio.h>
int main(){
    //Initialize a[100],i,n,j and temp.
    int a[100],i,n,j,temp;
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n);
    //Entering the element in array.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //Bubble sort.
    for(i=0;i<n-1;i++){                          //Outer loop. 
        for(j=0;j<n-i-1;j++){                    //Inner loop for comparing the element.
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];                     //Swapping the smallest element to the first. 
                a[j+1]=temp;
            }
        }
    }
    printf("===Bubble sort===\n");
    for(i=0;i<n;i++){                                 //Print the array.
        printf("%d\t",a[i]);
    }
    return 0;
}