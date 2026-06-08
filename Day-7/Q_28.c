    //Write a program to Recursive reverse number.
    #include<stdio.h>
    //Initialize recursive function reversedigit.
    int reversedigit(int n,int rev){
        
        // Base case: If the number becomes 0, stop and return 0
        if(n==0){
            return rev;
        }
        
        return reversedigit(n / 10, rev * 10 + (n % 10));
    }
    int main(){
        int x;
        int res;

        printf("Enter the number:");
        scanf("%d",&x);

        res=reversedigit(x,0);

        if(x<0){
            printf("Invlaid input:Enter the positive integer.");
        }
        else{
            printf("Reverse digit of %d is %d",x,res);
        }

        return 0;
    }