#include <stdio.h>
int main(void){
    int n = 0;
    scanf("%d", &n);
    int array[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            array[i][j] = i*n + j+1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}