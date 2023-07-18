#include <stdio.h>

int main(void) {
  char alpha[1000001];
  int count[26]={0};
  int max,max_num;
  
  scanf("%s",alpha);

  max=count[0];

  for(int i=0; alpha[i]!='\0'; i++){
    if(alpha[i]<97){
      alpha[i]+=32;
    }
    count[alpha[i]-97]++;
  }

  for(int i=1; i<26; i++){
    if(max<count[i]){
      max=count[i];
      max_num=i;
    }
    else if(max==count[i]){
      max_num=-1;
    }
  }
  if(max_num==-1)
    printf("?");
    else
    printf("%c",max_num+65);

}