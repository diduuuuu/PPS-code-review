#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int testcase = 0;
    char *eqt[] = "";
    float num = 0.0;

    scanf("%d", &testcase);

    for (int i=0; i< testcase; i++){
        scanf("%s", &eqt);
        printf("%s", eqt[0]);

        for (int j=0; j< strlen(eqt); j++){
            if (j == 0)
                num = atoi(eqt[0]);
            else if (eqt[i] == '@')
                num = num * 3;
            else if (eqt[i] == '%%')
                num = num + 5;
            else if (eqt[i] == '#')
                num = num - 7;
        }
        printf("%0.2f", num);
    }
    return 0;
}