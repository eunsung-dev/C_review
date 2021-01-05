#include <stdio.h>
struct sort{
    int data;
    int rank;
    int originalPlace;
};
int main(void){
    int N = 0, temp_data = 0, temp_originalPlace = 0, temp_rank = 0;
    scanf("%d", &N);
    struct sort array[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &array[i].data);
        array[i].originalPlace = i;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-1; j++){
            if(array[j].data > array[j+1].data){
                temp_data = array[j].data;
                temp_originalPlace = array[j].originalPlace;
                array[j].data = array[j+1].data;
                array[j].originalPlace = array[j+1].originalPlace;
                array[j+1].data = temp_data;
                array[j+1].originalPlace = temp_originalPlace;
            }
        }
    }
    for(int i = 0; i < N; i++){
        array[i].rank = i;
    }
    // for(int i = 0; i < N; i++)
    //     printf("%d %d %d\n", array[i].data, array[i].rank, array[i].originalPlace);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N-1; j++){
            if(array[j].originalPlace > array[j+1].originalPlace){
                temp_originalPlace = array[j].originalPlace;
                temp_rank = array[j].rank;
                array[j].originalPlace = array[j+1].originalPlace;
                array[j].rank = array[j+1].rank;
                array[j+1].originalPlace = temp_originalPlace;
                array[j+1].rank = temp_rank;
            }
        }
    }
    for(int i = 0; i < N; i++){
        printf("%d ", array[i].rank);
    }

    return 0;
}