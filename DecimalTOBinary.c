#include <stdio.h>
/
int main() {
    //printf("%zu", sizeof(N));   // for size_t
  //X value here is 5 which will be converted to 2 Byte binary value using bitwise operators operators
    int x=5,n=0,i,j;
    for (i=15;i>=0;i--){
      n=1<<i;
      j=n&x;
      if(j==0)
      printf("0");
      else
      printf("1");
     // break;
    }

}
