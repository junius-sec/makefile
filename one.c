#include <stdio.h>

// two() 함수는 two.c에 정의되어 있습니다.
extern int two(void);

int main(void) {
    printf("Go to Module Two--\n");
    two();
    printf("End of Module One.\n");
    return 0;
}
