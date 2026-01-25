#include <stdio.h>

int main(void) {
    float value = 0.0f;
    
    for (unsigned long long i = 0; i < 10000000000000000000ULL; i++) {
        value += 0.001f;
    }
    
    printf("Final value: %f\n", value);
    
    return 0;
}
