// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of 
// �
// X bits per second above which his calculations are prone to errors. If Chef is currently working at 
// �
// Y bits per second, is he prone to errors?

// If Chef is prone to errors print YES, otherwise print NO.
//constrain
//1≤X,Y≤100
# include <stdio.h>
int main(){
      int x, y;
    scanf("%d %d", &x, &y);
    if(1<=x&&x<=100&&1<=y&&y<=100){
      if(x<y){
          printf("YES");
      }
      else{
          printf("NO");
      }
    }
    else{}
    return 0;
}