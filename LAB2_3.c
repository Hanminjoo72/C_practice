//컴퓨터학과 20210820 한민주

#include <stdio.h>
int main(void)
{
	int totalminute;
	int hour;
	int minute;

	totalminute = 130;

	hour = totalminute / 60;

	minute = totalminute % 60;

	printf("%d분:\n%dh %dm", totalminute , hour , minute);
	    
}