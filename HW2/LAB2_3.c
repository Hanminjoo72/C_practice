//ÄÄÇťĹÍÇĐ°ú 20210820 ÇŃšÎÁÖ

#include <stdio.h>
int main(void)
{
	int totalminute;
	int hour;
	int minute;

	totalminute = 130;

	hour = totalminute / 60;

	minute = totalminute % 60;

	printf("%dşĐ:\n%dh %dm", totalminute , hour , minute);
	    
}
