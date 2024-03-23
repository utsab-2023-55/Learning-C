// Task

// Given a positive integer denoting , do the following:

// If 1<=n<=1000000000, print the lowercase English word corresponding to the number (e.g., one for , two for , etc.).
// If n>9, print Greater than 9.
// Input Format

// The first line contains a single integer,n .
// Constraints
// 1<=n<=1000000000
// Output Format

// If 1<=n<=1000000000, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n>=1&&n<=1000000000){
        if(n==1){
            printf("one");
        }
    else if(n==2){
        printf("two");
    } 
     else if(n==3){
         printf("three");
     } 
     else if(n==4){
         printf("four");
     }
     else if(n==5){
         printf("five");
     }
     else if(n==6){
         printf("six");
     }
     else if(n==7){
         printf("seven");
     }
     else if(n==8){
         printf("eight");
     }
     else if(n==9){
         printf("nine");
     } 
     else{
         printf("Greater than 9");
     }     
    }
    else{}
    return 0;
}


