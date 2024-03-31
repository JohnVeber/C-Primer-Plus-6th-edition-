/* intconv.c -- inconsistency when converting integer types */

#include <stdio.h>
#include <limits.h> 
#define PAGES 336
#define WORDS 65618

int main(void){
	short num = PAGES;
	short mnum = -PAGES;

    // Sample 1.
	printf("num as short type and unsigned short type: %hd %hu\n", num,num);

    // Sample 2.
	printf("-num as short type and unsigned short type: %hd %hu\n", mnum, mnum);
    // Illustration of 2's complement
    /* А %u specifier will not discard the sign of a signed number, 
       but leads an incorrect output result.*/
    
    // Sample 3.
	printf("num as int type and char type: %d %c\n", num, num); 
    // A short type in my system consist of 2 bytes, but char only one byte (max value- 255)
    // printf function check only one (1st) byte \
     from two bytes which involved in 336 storage when use %c specifier
    // This is equivalent to dividing an integer by 256 (max char value- 255 and 0)\
     and keeping only the remainder
    // In this case the remaining is 80, and it corresponds to  'P' character of ASCII table.
 
    // Sample 4.
    printf("WORDS as int type, short and char types: %d %hd %c\n", WORDS, WORDS, WORDS);
    // An uint type in my system consist of 4 bytes,\
     but unsigned short int (%hd) onty 2 (max value- 65535)
    // printf function check only two (1st and 2nd) bytes \
     from four bytes which involved in 65618 storage when use %hd specifier
    // This is equivalent to dividing an integer by 65536\
     (max 2 bytes unsidned short int value- 65535 and 0) and keeping only the remainder
    // In this case the remaining is 82, and it corresponds to  'R' character of ASCII table.
    
	printf("%d\n\n\n", SHRT_MAX);

	return 0;
}

// Note 1.
// Details can be found at page 139.

// Note 2.
// If divisor placed between 32767 (max short value) and 65536 (max unsigned short value)\
 you can see negative number in the output.
