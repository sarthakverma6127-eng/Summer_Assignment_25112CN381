//Write a program to union of array.
#include<stdio.h>
int main(){
    //Initialize a[100],b[100],i,j,n,m,s and temp.
    int a[100],b[100],i,j,n,m,s,temp;
    //Take the input in n.
    printf("Enter the number of element in array a:");
    scanf("%d",&n);
    //Entering the element in array a.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //Take input in m.
    printf("Enter the number of element in array b:");
    scanf("%d",&m);
    //Entering the elelment in array b.
    for(i=0;i<m;i++){
        printf("Enter b[%d]:",i);
        scanf("%d",&b[i]);
    }
    //Caluclaute the size of merged array.
    s=n+m;
    //Initilaize the merge array.
    int merge[s];
    //Copy the element from array a to merge.
    for(i=0;i<n;i++){
        merge[i]=a[i];
    }
    //Copy the element from array b to merge.
    for(i=0;i<m;i++){
        merge[n+i]=b[i];
    }
    for(i=0;i<s-1;i++){
        for(j=0;j<s-i-1;j++){
            if(merge[j]>merge[j+1]){
                temp=merge[j];                      //Bubble sort.
                merge[j]=merge[j+1];
                merge[j+1]=temp;
            }
        }
    }
    for(i=0;i<s-1;i++){
        if(merge[i]==merge[i+1]){
            temp=a[i];
            for(j=i+1;j<s-1;j++){                  //Delete the dulplicate element from the array merge.
                merge[j]=merge[j+1];
            }
            s--;
            i--;
        }
    }
    printf("===Union of array===\n");
    for(i=0;i<s;i++){             
        printf("%d\t",merge[i]);                       //Print the filtered array.
    }
    printf("\n");
    return 0;

} 