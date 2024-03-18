
// Chef defines a pair of positive integer
// (a,b) to be a 
// Oneful Pair
// Oneful Pair, if a+b+(a⋅b)=111
//Constraints
//1≤a,b≤1000
# include <stdio.h>
int main(){
        int a, b;
    scanf("%d %d", &a, &b);
    if(1<=a&&a<=1000&&1<=b&&b<=1000){
        if(a+b+(a*b)==111){
            printf("Yes");
        }
    else{
        printf("No");
    }    
        }
    else{}  
    return 0;
}