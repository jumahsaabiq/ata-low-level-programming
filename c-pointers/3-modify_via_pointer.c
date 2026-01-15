#include <stdio.h>

int main(void)
{
    int score = 75;         // initialize score
    int *ptr_score = &score; // pointer pointing to score

    // Print initial value
    printf("Initial score: %d\n", score);

    // Modify value via pointer
    *ptr_score = 90;

    // Print modified value
    printf("Score after modification via pointer: %d\n", score);

    return 0;
}
