#include<stdio.h>
int main(){
  int row, col;
  scanf("%d %d", &row , &col);
  int a[row][col];
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        scanf("%d", &a[i][j]);
    }
  }
//row and column equal kina
  int flag=1;
  if(row!=col){
    printf("not diagonal matrix\n");
  }

  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        if(i+j==row-1){
            if(a[i][j]!=1){
                flag=0;
            }
            continue;
        }
        if(a[i][j]!=0){
            flag=0;
        }
    }
  }
  if(flag==1){
    printf("secondary unit matrix\n");
  }
  else{
    printf("Not unit matrix\n");
  }
  return 0;
}
