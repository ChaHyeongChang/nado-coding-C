
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
    return 0;
}
