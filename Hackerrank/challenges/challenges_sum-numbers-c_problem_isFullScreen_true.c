// your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

// Declare 4 variables: two of type int and two of type float.
// Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
// Use the + and - operator to perform the following operations:
// Print the sum and difference of two int variable on a new line.
// Print the sum and difference of two float variable rounded to one decimal place on a new line.
//  Constraints
//  1<=integer variables<=10000 
//  1<=float variables <=10000
# include <stdio.h>
int main(){
    int a,b;
float c,d;
scanf("%d %d",&a,&b);
scanf("%f %f",&c,&d);
if(1<=a&&a<=10000&&1<=b&&a<=10000){
    printf("%d %d",(a+b),(a-b));
} 
else{}
if(1.0<c&&c<=10000.0&&1.0<=d&&d<=10000.0){
    printf("%.1f %.1f",(c+d),(c-d));
}
else{} 
    return 0;
}