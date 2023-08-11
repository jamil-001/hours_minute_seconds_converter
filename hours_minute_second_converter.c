
#include <stdio.h>

int main() {

    int seconds,hours,minute;
    scanf("%d",&seconds);
    hours= seconds/3600;
    seconds= seconds% 3600;
    minute = seconds/ 60;
    seconds= seconds%60;
    printf("%d:%d:%d",hours,minute,seconds);

    return 0;
}
