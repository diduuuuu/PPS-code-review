#include <stdio.h>

int main(void) {
  int m,n,sum,max;
  int asd[100]={0};

  scanf("%d%d",&n,&m);
  for(int i=0;i<n;i++){
    scanf("%d",&asd[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        sum=asd[i]+asd[j]+asd[k];
        if(sum>max && sum<=m)
          max=sum;
      }}}
  printf("%d",max);
}