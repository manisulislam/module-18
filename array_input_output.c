#include<stdio.h>
int main(){
  int a[3][3]        ;

  //input 2d array
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        scanf("%d",&a[i][j]);
    }
  }

  //print 2d array
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        printf("%d ", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
