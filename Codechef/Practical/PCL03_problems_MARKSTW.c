// Alice has scored 
// �
// X marks in her test and Bob has scored 
// �
// Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.
//constraints
//1≤X,Y≤100
# include <stdio.h>
int main(){
       int x, y;
    scanf("%d %d", &x, &y);
    if(1<=x&&x<=100&&1<=y&&y<=100){
        if(x>=2*y){
            printf("Yes");
        }
    else{
        printf("No");
    }    
    }
    else{}
    return 0;
}