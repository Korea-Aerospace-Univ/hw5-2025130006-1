#include <stdio.h>

int main(void)
{
    int N;
    int total = 0;
    int A = 0, B = 0, C = 0;
    bool is_none = false;
    
    scanf("%d", &N); 
    
    for (A = 1; A <= N / 900; A++) { 
        for (B = 2; B <= N / 750; B += 2) {
            for (C = 1; C <= N / 200 ; C++) {
                total = A * 900 + B * 750 + C * 200;
                if (total == N) {
                    if (C < A || C < B){
                        printf("%d %d %d\n",A, B, C);
                        is_none = true;
                    }
                }
            }
        }
    }
    if (is_none == false)
        printf("none");
    
    return 0;
}
