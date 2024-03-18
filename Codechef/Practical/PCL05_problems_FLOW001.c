// // // Your task is very simple: given two integers 
// // // A and B, write a program to add these two numbers and output the sum.
// // Input Format
// // The first line contains an integer T, the total number of test cases.
// // Then follow T lines, each line contains two integers, A and B.
// Output Format
// For each test case, add A and B and display the sum in a new line.
// Constraints
// 1≤T≤1000
// 0≤A,B≤10000
# include <stdio.h>
int main(){
        int t,a,b;
    scanf("%d", &t);
    if(1<=t&&t<=1000){
    for(int i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        if(0<=a&&a<=10000&&0<=b&&b<=10000){
        printf("%d\n",a+b);
            }
        else{}
    }
}
    else{}
    return 0;
}