//Write a program to Count even and odd elements.

#include<stdio.h>
int main(){
    //Initialize a[100],i,n,even and odd.
    int a[100],i,n,even=0,odd=0;
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n); 
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);                         //Enter the element in array.
        if(a[i]%2==0){
            even++;                                  //Add number of value in even.
        }
        else{
            odd++;                                     //Add number of value in odd.
        }
    }
    printf("Even elements:%d\n",even);
    printf("Odd elements:%d",odd);
    return 0;
} 