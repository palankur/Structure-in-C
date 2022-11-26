#include<stdio.h>               //time period difference
struct time
{
    int seconds;
    int minutes;
    int hours;
};
void time_diff(struct time start,struct time stop,struct time *diff)
{
    while(stop.seconds>start.seconds)
    {
        --start.minutes;
        start.seconds+=60;
    }
    diff->seconds=start.seconds-stop.seconds;
    while(stop.minutes>start.minutes)
    {
        --start.hours;
        start.minutes+=60;
    }
    diff->minutes=start.minutes-stop.minutes;
    diff->hours=start.hours-stop.hours;
}
int main()
{
    struct time start_time, stop_time,diff;
    printf("Enter the start time in hours, minutes and seconds (HH:MM:SS) format : ");
    scanf("%d%d%d",&start_time.hours,&start_time.minutes,&start_time.seconds);
    printf("Enter the end time in hours, minutes and seconds (HH:MM:SS) format : ");
    scanf("%d%d%d",&stop_time.hours,&stop_time.minutes,&stop_time.seconds);
    time_diff(start_time,stop_time,&diff);


    printf("The difference between time period is : ");
    printf("%d : %d : %d",diff.hours,diff.minutes,diff.seconds);
    return 0;


}
