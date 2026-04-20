#include <stdio.h>

int main(void) {
    int answer, guess, count = 0;
    
    scanf("%d ", &answer);
    printf(" -> 정답입력: %d\n", answer);
    
    do { 
        scanf("%d", &guess);
        count++;
        
        if (guess > answer) {
            printf("%d > ? -> %d 보다 낮습니다\n", guess);
        }
        else if ( guess < answer) {
            printf("%d < ? -> %d 보다 높습니다\n", guess);
        }
        else { 
            printf("%d == ? -> %d 정답입니다\n", guess);
        }
        
    }while (guess != answer);
    
    printf("%d -> 시도횟수는 %d회 \n", answer, count);
    
    return 0;
    
}
