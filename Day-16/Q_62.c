//Write a program to find the maximum frequency element.
#include<stdio.h>
int main(){
    //Initialize i,n,j,a[100],temp,maxcount,currentcount,maxelement.
    int i,n,j,a[100],temp,maxcount=1,currentcount=1,maxelement;\
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                        //Entering the elements of array.
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];                          //Bubble sort to sort the array for counting. 
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    maxelement=a[0];
    for(i=1;i<n;i++){
        if(a[i]==a[i-1]){
            currentcount++;
        }
        else{
            if(currentcount>maxcount){                             //Finding the maximum frequency element by comparing the previous value of the sorted array.
                maxcount=currentcount;
                maxelement=a[i-1];
            }
            currentcount=1;
        }
    }
    if(currentcount>maxcount){
        maxcount=currentcount;                       //Again check the value and decide the element.
        maxelement=a[n-1];
    }
    printf("Maximum frequency of element is %d.",maxelement);
    return 0;
}