
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int answer;
    int myanswer;
    srand(time(NULL));
    answer = 8;
    
    for(int chance = 5; chance > 0; chance--){
        printf("남은 기회 %d번\n", chance);
        printf("숫자를 맞춰 보세요.(1~100) : ");
        scanf("%d", &myanswer);

        if(myanswer > answer){
            printf("DOWN\n");
            continue;  //없어도 작동은 가능(그냥 빨리 for 문 돌리기 위해 사용)
        }
        else if (myanswer < answer){
            printf("UP\n");
            continue;  //없어도 작동은 가능(그냥 빨리 for 문 돌리기 위해 사용)
        }
        else {
            printf("정답\n");
            break;
        }

        if(chance == 1){
            printf("모든 기회 사용\n");
            break;
        }
    }
    
    return 0;
}
