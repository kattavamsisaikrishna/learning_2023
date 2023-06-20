#include<stdio.h>
#include<stdlib.h>
struct time
{
	int hours;
	int minutes;
	int seconds;
};
typedef struct time time;
void timeDifference(time *t1,time *t2)
{
	int total_seconds1 = t1->hours*3600 + t1->minutes*60 + t1->seconds;
	int total_seconds2 = t2->hours*3600 + t2->minutes*60 + t2->seconds;
	
	int seconds_difference = abs(total_seconds1-total_seconds2);
	
	int hours = seconds_difference / 3600;
	seconds_difference %= 3600;
	int minutes = seconds_difference / 60;
	seconds_difference %= 60;
	int seconds = seconds_difference;
	
	printf("time difference = %d:%d:%d",hours,minutes,seconds);
}
int main()
{
	time t1,t2;
	printf("Enter the time in hh:mm:ss format\n");
	printf("Enter time1 : ");
	scanf("%d:%d:%d",&t1.hours,&t1.minutes,&t1.seconds);
	printf("Enter time2 : ");
	scanf("%d:%d:%d",&t2.hours,&t2.minutes,&t2.seconds);
	
	timeDifference(&t1,&t2);
}
