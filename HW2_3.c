//컴퓨터학과 20210820 한민주
#include <stdio.h>
int main(void)
{
	int totalsecond;
	int hour;
	int minute;
	int second;

	totalsecond = 14000;
	hour = totalsecond / 3600;

	minute = totalsecond % 3600 / 60;
	second = totalsecond % 3600 % 60;

	printf("%d seconds:\n%dh %dm %ds", totalsecond, hour, minute, second);
}