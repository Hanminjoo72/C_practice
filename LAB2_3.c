//��ǻ���а� 20210820 �ѹ���

#include <stdio.h>
int main(void)
{
	int totalminute;
	int hour;
	int minute;

	totalminute = 130;

	hour = totalminute / 60;

	minute = totalminute % 60;

	printf("%d��:\n%dh %dm", totalminute , hour , minute);
	    
}