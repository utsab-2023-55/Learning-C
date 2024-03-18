// Water Consumption
// Recently, Chef visited his doctor. The doctor advised Chef to drink at least 2000 ml of water each day.
// Chef drank X ml of water today. Determine if Chef followed the doctor's advice or not.
// Input Format
// The first line contains a single integer T — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains one integer X — the amount of water Chef drank today.
// Output Format
// For each test case, output YES if Chef followed the doctor's advice of drinking at least 2000 ml of water. 
// Otherwise, output NO.
// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).
// Constraints
// 1≤T≤2000
// 1≤X≤4000
# include <stdio.h>
int main(){
        int t,x;
    scanf("%d",&t);
    if(1<=t&&t<=2000){
        for(int i=1;i<=t;i++){
            scanf("%d",&x);
         if(1<=x&&x<=4000){    
            if(x>=2000){
                printf("Yes\n");
            }
            else{
                printf("No\n");
            }
         }
         else{}
        } 
    }
    else{}
    return 0;
}