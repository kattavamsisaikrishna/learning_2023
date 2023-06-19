#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char timeStr[9];
    printf("Enter time in hh:mm:ss format: ");
    fgets(timeStr, 9, stdin);

    char *hourStr = strtok(timeStr, ":");
    char *minuteStr = strtok(NULL, ":");
    char *secondStr = strtok(NULL, ":");


    unsigned long hour = strtoul(hourStr, NULL, 10);
    unsigned long minute = strtoul(minuteStr, NULL, 10);
    unsigned long second = strtoul(secondStr, NULL, 10);

    unsigned long totalSeconds = hour * 3600 + minute * 60 + second;

    printf("Total seconds: %lu\n", totalSeconds);

    return 0;
}

