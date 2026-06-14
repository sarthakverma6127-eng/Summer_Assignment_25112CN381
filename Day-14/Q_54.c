//Write a program to frequency of an element.
#include<stdio.h>
int main(){
    //Initialize a[100],i,n,count,key,found.
    int a[100],i,n,count=0,key,found=0;
    printf("Enter the number of element:");
    scanf("%d",&n);             //Take input in n.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                    //Entering the element of array.
    }
    printf("Enter the element to find the fequency:");
    scanf("%d",&key);                      //Enter the element to find the frequency.
    for(i=0;i<n;i++){
        if(a[i]==key){
            count++;                       //Finding the element ussing linear search and add the value to count.
            found=1;
        }
    }
    if(found==0){
        printf("Search was successful but the element not found.");
    }
    else{
        printf("Frequecy of %d:%d",key,count);
    }
    return 0;
}