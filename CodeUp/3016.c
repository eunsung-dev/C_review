#include <stdio.h>
struct student{
    char name[10];
    int score1, score2, score3;
};
int main(void){
    int n = 0, maxScore = 0, winner = 0, temp_score = 0, rank2 = 1, rank3 = 1;
    scanf("%d", &n);
    struct student list[n];
    for(int i = 0; i < n; i++){
        scanf("%s %d %d %d", list[i].name, &list[i].score1, &list[i].score2, &list[i].score3);
    }
    for(int i = 0; i < n; i++){
        if(list[i].score1 > maxScore){
            maxScore = list[i].score1;
            winner = i;
        }
    }
    int a = 0, b = 0;
    a = list[winner].score2;
    b = list[winner].score3;
    for(int i = 0; i < n; i++){
        if(list[i].score2 > a)
            rank2++;
        if(list[i].score3 > b)
            rank3++;
    }
    printf("%s %d %d",list[winner].name, rank2, rank3);

    return 0;
}