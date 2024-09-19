#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *local_time;
    char time_str[100];
    while(1)
    {
    current_time = time(NULL);
    local_time = localtime(&current_time);
    strftime(time_str, sizeof(time_str), "%H:%M:%S", local_time);

    printf("Current time: %s\n", time_str);
    sleep(1);
    }
    return 0;
}