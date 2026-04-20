#include <stdio.h>

int main(void) {
    int N ;
    scanf("%d\n", &N);
    
    int cntLower = 0, cntDigit = 0, maxLower = 0, maxDigit =0;

    
    for ( int i =0; i < N; i++) {
        char c;
        scanf(" %c", &c);
        
        if (c >= 'a' && c <= 'z') {
            cntLower++;
            if (cntLower > maxLower) maxLower = cntLower;
        } else {
            cntLower = 0;
        }
        
        if (c >= '0' && c <= '9') {
            cntDigit++;
            if (cntDigit > maxDigit) maxDigit = cntDigit;
        } else {
            cntDigit = 0;
        } 
    } 
    
    printf("%d\n%d\n", maxLower, maxDigit);
    
    return 0;
}
