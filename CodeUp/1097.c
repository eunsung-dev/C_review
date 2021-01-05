#include <stdio.h>
int main(void){
    int n = 0, x = 0, y = 0;
    int array[20][20] = {0,};
    for(int i = 1; i <= 19; i++){
        for(int j = 1; j <= 19; j++){
            scanf("%d", &array[i][j]);
        }
    }
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        for(int j = 1; j <= 19; j++){
            if(array[x][j] == 1)
                array[x][j] = 0;
            else
                array[x][j] = 1;
        }
        for(int j = 1; j <= 19; j++){
            if(array[j][y] == 1)
                array[j][y] = 0;
            else
                array[j][y] = 1;
        }
    }
    for(int i = 1; i <= 19; i++){
        for(int j = 1; j <= 19; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}