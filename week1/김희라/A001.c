int compare(const void *a, const void *b);

int findContentChildren(int *g, int gSize, int *s, int sSize) {
  int output = 0;
  int y = 0;
  qsort(g, gSize, sizeof(g[0]), compare);
  qsort(s, sSize, sizeof(s[0]), compare);

  for (int i = 0; i < gSize; i++) {
    for (int j = y; j < sSize; j++) {
      if (g[i] <= s[j]) {
        y = j + 1;
        output++;
        break;
      }
    }
  }

  return output;
}

int compare(const void *a, const void *b) {
  return strcmp((char *)a, (char *)b);
}