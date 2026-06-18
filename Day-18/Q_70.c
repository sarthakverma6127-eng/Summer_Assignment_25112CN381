//Write a program to selection sort.
#include<stdio.h>
//Initialize the void function selectionsort.
void selectionsort(int a[],int n){
    int i,j,min,temp;
    for(i=0;i<n-1;i++){
        min=i;                               //Storing the smallest value in min.
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){                 //Compare the min by  forward value.
                min=j;                       //Update the min value.
            }
        }
        temp=a[min];
        a[min]=a[i];                        //Swapped the smallest value toh the first place.
        a[i]=temp;
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){                        //Initialize the print function for print the array.
        printf("%d\t",a[i]);
    }
}
int main(){
    int x,b[100];
    printf("Enter the number of element:");           //Take input in x.
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        printf("Enter a[%d]:",i);                //Entering the element in array.
        scanf("%d",&b[i]);
    }
    printf("===Array before sort===\n");
    print(b,x);
    printf("\n");
    printf("===Array after sort using selection sorting===\n");               //Print the sorted array.
    selectionsort(b,x);
    print(b,x);
    return 0;
}