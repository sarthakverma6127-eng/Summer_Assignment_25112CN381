//Write a program to binary search.
#include<stdio.h>
int main(){
    //Initialize i,j,temp,a[100],mid,key,beg,end,n,found.
    int i,j,temp,a[100],mid,key,beg,end,n,found=0;
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n);
    //Entering the element in array.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //Using bubble sort sorting the array before search.
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //Take input in key.
    printf("Enter the element to search:");
    scanf("%d",&key);
    beg=0;                                
    end=n-1;
    while(beg<=end){                       //Checking the condition. 
        mid=beg+(end-beg)/2;               //Finding the middle element.
        if(a[mid]==key){                   //Element at middle condition.
            printf("%d element found at %d index.",key,mid);
            found=1;
            break;
        }
        if(a[mid]>key){                       //Element at half left side.
            end=mid-1;
        }
        else{
            beg=mid+1;                       //Element at half right side.
        }      
    }
    if(found==0){
        printf("Search is successfull but element not found.");
    }
    return 0;
}