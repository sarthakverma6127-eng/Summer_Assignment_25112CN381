//Write a program to Merge two sorted arrays.
#include<stdio.h>
int main(){
    //Initialize arrays, sizes, and index counters.
    int arr1[50], arr2[50], merged[100];
    int n1, n2, i, j, k;
    
    //Take the input for the size and elements of the first sorted array.
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter sorted elements for first array: ");
    for(i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    
    //Take the input for the size and elements of the second sorted array.
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter sorted elements for second array: ");
    for(j=0; j<n2; j++){
        scanf("%d", &arr2[j]);
    }
    
    i=0; j=0; k=0;              //Reset counters for traversal.

                                //Compare elements from both arrays and merge them in sorted order.
    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            merged[k] = arr1[i];
            i++;
        }
        else{
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }
    
                                //Copy any remaining elements from the first array.
    while(i<n1){
        merged[k] = arr1[i];
        i++;
        k++;
    }
    
                                //Copy any remaining elements from the second array.
    while(j<n2){
        merged[k] = arr2[j];
        j++;
        k++;
    }
    
    printf("Merged sorted array: ");
    for(i=0; i<(n1+n2); i++){
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;
    
}