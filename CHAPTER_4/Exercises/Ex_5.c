/* Ex.5 -- A file download speed calculation */

#include <stdio.h>

int main(void){
	float speed_mbit, speed_mbyte, time, size;
	
	printf("Please enter the file download speed in megabits per second.\n"); /* My enter is: 18,12 */
	scanf("%f",&speed_mbit); 
	printf("Now enter the file size in megabytes.\n"); /* My enter is:  2,2 */
	scanf("%f", &size);
	
	speed_mbyte = speed_mbit / 8;
	time = size/speed_mbyte; 
	printf("With a download speed of %.2f mbit/s a %.2f mbyte file "
		"is downloaded in %.2f seconds.\n\n\n", speed_mbit, size, time); /* My result is:  0,97 seconds*/
	
	
	return 0;
}
