#include <stdio.h>
#include <time.h>

int main() {
    time_t t;
    struct tm *current_time;

    // get the current system time
    t = time(NULL);
    current_time = localtime(&t);

    // print only the year
    printf("The year is %d\n", current_time->tm_year + 1900);

    return 0;
}
