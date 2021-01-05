#include <stdio.h>
int main(void){
    int h = 0, w = 0, n = 0, l = 0, d = 0, x = 0, y = 0;
    scanf("%d %d", &h, &w);
    scanf("%d", &n);
    int array[h+1][w+1];
    for(int i = 0; i < h+1; i++){
        for(int j = 0; j < w+1; j++){
            array[i][j] = 0;
        }
    }
    for(int i = 1; i <= n; i++){
    scanf("%d %d %d %d", &l, &d, &x, &y);
    for(int j = 0; j < l; j++){
        if(d == 0){
            array[x][y+j] = 1;
        }
        else{
            array[x+j][y] = 1;
        }        
    }
    }
    for(int i = 1; i <= h; i++){
        for(int j = 1; j <= w; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}