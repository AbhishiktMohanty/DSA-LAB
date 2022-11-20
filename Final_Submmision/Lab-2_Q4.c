// #include<stdio.h>

struct time_2_4
{
    int hours;
    int minutes;
    int seconds;
};

int main_2_4()
{
    struct time_2_4 first, second, diff;

    printf("Enter the first time in 24 hour format:\n");
    printf("Enter hours, minutes and seconds respectively(hh mm ss): ");
    scanf("%d %d %d", &first.hours,&first.minutes, &first.seconds);
    
    printf("Enter the second time in 24 hour format:\n");
    printf("Enter hours, minutes and seconds respectively(hh mm ss): ");
    scanf("%d %d %d", &second.hours,&second.minutes, &second.seconds);

    if(first.seconds > second.seconds)
    {
        second.seconds += 60;
        --second.minutes;
    }

    if(first.minutes > second.minutes)
    {
        second.minutes += 60;
        --second.hours;
    }

    diff.seconds = second.seconds - first.seconds;
    diff.minutes = second.minutes - first.minutes;
    diff.hours = second.hours - first.hours;

    printf("\nTIME PERIOD : %d:%d:%d - ", first.hours, first.minutes, first.seconds);
    printf("%d:%d:%d ", second.hours, second.minutes, second.seconds);
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}