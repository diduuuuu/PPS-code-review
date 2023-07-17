class Solution {
  boolean solution(String s) {
    boolean answer = true;

    s = s.toLowerCase();

    int cntP = 0;
    int cntY = 0;

    for (int i = 0; i < s.length(); i++) {
      char a = s.charAt(i);
      if (a == 'p')
        cntP++;
      else if (a == 'y')
        cntY++;
    }

    if (cntP != cntY)
      answer = false;

    return answer;
  }
}