#include <stdio.h>
struct factory{
    int a;
    int b;
};
int main(void){
    int n = 0, temp_a = 0, temp_b = 0;
    scanf("%d", &n);
    struct factory array[n];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &array[i].a, &array[i].b);
    }
    for(int j = 0; j < n; j++){
    for(int i = 0; i < n-1; i++){
        if(array[i].a > array[i+1].a){
            temp_a = array[i].a;
            temp_b = array[i].b;
            array[i].a = array[i+1].a;
            array[i].b = array[i+1].b;
            array[i+1].a = temp_a;
            array[i+1].b = temp_b;
        }
    }
    }
    printf("\n");
    for(int i = 0; i < n; i++)
        printf("%d %d\n", array[i].a, array[i].b);
    return 0;
}