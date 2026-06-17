//Write a program to find common element of arrays.
#include<stdio.h>
int main(){
    //Initialize a[100],b[100],i,j,s,temp,n and m.
    int a[100],b[100],i,j,s,temp,n,m;
    //Take input in n.
    printf("Enter the number of element in array a:");
    scanf("%d",&n);
    //Entering the element in array a.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //Take the element in m.
    printf("Enter the number of element in array b:");
    scanf("%d",&m);
    //Entering the element in array b.
    for(i=0;i<m;i++){
        printf("Enter b[%d]:",i);
        scanf("%d",&b[i]);
    }
    //Calculate the size of mereged array.
    s=n+m;
    //Inuitalize the merge array.
    int merge[s];
    for(i=0;i<n;i++){
        merge[i]=a[i];                  //Copying the element of array a in merge.
    }
    for(i=0;i<m;i++){
        merge[n+i]=b[i];               //Copying the element of array b in merge.
    }
    for(i=0;i<s-1;i++){
        for(j=0;j<s-i-1;j++){
            if(merge[j]>merge[j+1]){
                temp=merge[j];
                merge[j]=merge[j+1];                   //Sort the merge  array using bubbble sort.
                merge[j+1]=temp;
            }
        }
    }
    printf("===Initersection of arrays===\n");
    for(i=0;i<s-1;i++){
        if(merge[i]==merge[i+1]){
            printf("%d\t",merge[i]);                              //Print the dulpicate element.
        }
    }
    return 0;
}