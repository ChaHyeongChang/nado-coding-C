
#include <stdio.h>

int main(void){
    
    for(int i = 0; i <= 5; i++){
        for(int j = 1; j <= 5 - i; j++){
            printf(" ");
        }

        for(int k = 1; k <= 2 * i + 1; k++){
            printf("*");
        }
        
        printf("\n");
    }

    for(int a = 1; a <= 5; a++){
        for(int b = 1; b <= a; b++){
            printf(" ");
        }
        for(int c = 1; c < 12 - (2 * a) ; c++){
            printf("*");
        }
        printf("\n");

    }

    
   /* for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5 - i; j++){
            printf("*");
        }
        printf("\n");
    }
    */

    /*
    for(int i = 5; i > 0; i--){
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
    */

    ////////피라미드 쌓기////////
    /*
            int floor;
    printf("몇 층으로 쌓겟습니까?(5~100) : ");
    scanf("%d", &floor);

    for(int i = 0; i < floor; i++){
        for(int j = 0; j < floor - i - 1; j++){
            printf(" ");
        }
        for(int k = 0; k < 2 * i + 1; k++){
            printf("*");
        }
        printf("\n");
    }
    */
   
    return 0;
}
