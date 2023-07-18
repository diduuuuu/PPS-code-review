#include <stdio.h>

int main(void)
{
	int num;
	int cnt = 0;
	char name[30];
	int first[26] = {0,};

	scanf("%d", &num);

	for(int i = 0; i < num; i++){
		scanf("%s", name);
		first[name[0] -97]++;
	}
	for(int j = 0; j < 26; j++){
		if(first[j] >= 5){
			printf("%c", j + 97);
			cnt++;
		}
	}
	if(cnt == 0){
		printf("PREDAJA");
	}
	return 0;
}