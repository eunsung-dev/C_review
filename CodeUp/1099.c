#include <stdio.h>
#include <stdlib.h>
int main(void){
    int array[11][11] ={0,};
    int x = 2, y = 2;
    for(int i = 1; i < 11; i++){
        for(int j = 1; j < 11; j++){
            scanf("%d", &array[i][j]);
        }
    }
    while(array[x][y] != 2){
        if(array[x][y+1] == 0){
            array[x][y] = 9;
            y += 1;
        }
        else if(array[x][y+1] == 1){
            array[x][y] = 9;
            x += 1;
        }
        else{
            array[x][y+1] = 9;
            break;
        }
        if(array[x][y] == 2){
            array[x][y] = 9;
            break;
        }
    }
printf("\n");
for(int i = 1; i < 11; i++){
    for(int j = 1; j < 11; j++){
        printf("%d ", array[i][j]);
    }
    printf("\n");
}
return 0;
}