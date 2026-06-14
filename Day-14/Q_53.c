//Write a program to Linear search.
#include<stdio.h>
int main(){
    //Initialize a[100],i,n,key,found.
    int a[100],i,n,key,found=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);                                        //Take input in n.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                                    //Entering the element of array.
    }
    printf("Enter the searching element:");
    scanf("%d",&key);                                 //Take input the searching element.
    for(i=0;i<n;i++){
        if(a[i]==key){
            printf("%d element will found at %d index.",key,i);               //Found the element will change the value of found.
            found=1;
            break;
        }
        
    }
    if(found==0){
        printf("===Search is successful but element not found===");  //If element not found then this message will display.
    }
    return 0;
}