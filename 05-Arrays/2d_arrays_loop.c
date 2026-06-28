#include <stdio.h>
int main(){ 
  int num[3][3]={
    {3,4,5},
    {7,8,9},
    {3,6,8}
  };
  for(int i=0; i<3; i++){
      for(int j=0; j<3; j++){
          printf(" %d",num[i][j]);
      }
       printf("\n");
  }
return 0;
}
