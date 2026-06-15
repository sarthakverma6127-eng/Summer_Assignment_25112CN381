//write a program to move zeros to the end.
#include<stdio.h>
int main(){
    //Initialize i,n,j,e,temp and a[100].
    int i,n,temp,a[100],j,e;
    //Take input in n.
    printf("Enter the number of element:");
    scanf("%d",&n);
    //Entering the element in array.
    for(i=0;i<n;i++){
        printf("Enter a[%d]:",i);
        scanf("%d",&a[i]);
    }
    e=n;   //To save the value of n.
    for(i=0;i<e;i++){                               //Outer loop for running values in series.
        if(a[i]==0){                                //Checking the element is zero or not.
            temp=a[i];
            for(j=i;j<e-1;j++){
                a[j]=a[j+1];                       //Shifting the values to left. 
                
            }
            a[e-1]=temp;                          //Shifting the zero to end.
            e--;                                  //Checking the element again after shifting.
            i--;
        }
    }
    //Print the array after filtering.
    for(i=0;i<n;i++){
        printf("a[%d]:%d\n",i,a[i]);
    }
    return 0;

}