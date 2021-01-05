#include <stdio.h>
int main(void){
    int n = 0, x = 0, y = 0;
    int array[20][20] = {0,};
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        array[x][y] = 1;
    }
    for(int i = 1; i <= 19; i++){
        for(int j = 1; j <= 19; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}