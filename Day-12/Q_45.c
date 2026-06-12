//Write a program to Write function for palindrome.

#include<stdio.h>
//Initialize the fuction palindrome.
int palindrome(int n){
    int n1,rev=0,r;

    n1=n;       //Protect the original value

    while(n1!=0){
        r=n1%10;
        rev=rev*10+r;         //Storing reverse of a given number in rev.
        n1/=10;
    }

    if(rev==n){
        printf("%d is Palindrome.",n);
    }
    else{
        printf("%d is not palindrome.",n);
    }
}

int main(){                                    //Calling function.
    int a;

    printf("Enter the number:");
    scanf("%d",&a);

    palindrome(a);                         //Function calling.

    return 0;
}