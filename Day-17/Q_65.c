//Write a program to merge arrays.
#include<stdio.h>
int main(){
    //Initialize a[100],b[100],i,n,m,s and j.
    int a[100],b[100],i,n,m,s,j;
    //Take input in n.
    printf("Enter the number of element of first array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Eneter a[%d]:",i);
        scanf("%d",&a[i]);                   //Entering the element in array a.
    }
    //Take input in m.
    printf("Enter the number of element of second array:");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        printf("Enter b[%d]:",i);
        scanf("%d",&b[i]);                    //Entering the element in array b.
    }
    s=n+m;                                    //Caluculate the size of merged array.
    int merge[s];
    for(i=0;i<n;i++){
        merge[i]=a[i];                       //Copying the element of array a.
    }
    for(i=0;i<m;i++){
        merge[n+i]=b[i];                     //Copying the element of array b.
    }
    printf("===Merged array===\n");
    for(i=0;i<s;i++){
        printf("%d\t",merge[i]);
    }
    printf("\n");
    return 0;    
}