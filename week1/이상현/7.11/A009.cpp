#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    bool answer = true;

  if(strlen(s) == 4 || strlen(s) == 6){
      char a = s[0];
  int k = strlen(s);
  
  for(int i=1; i<k; i++){
    if(isdigit(a) != isdigit(s[i])){
      answer = false;
      break;
  }
  }
  }else{
      answer = false;
  }
  
  
    return answer;
}