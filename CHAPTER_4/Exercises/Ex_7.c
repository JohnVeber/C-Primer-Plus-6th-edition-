/* Ex.7 -- check of corrrect decimal digits quantity. */

#include <stdio.h>
#include<float.h>

int main(void){
	float A;
	double B;
	
	A = 1.0 / 3.0;
	B = 1.0 / 3.0; /*Бля хз че тут с локалью, вводил значения через точку- все работало*/

	printf("%.4f %.4f\n", A, B);     /* Case 1 */
	printf("%.12f %.12f\n", A, B);   /* Case 2 */
	printf("%.16f %.16f\n", A, B);   /* Case 3 */
                                     /* Case 4 */
	printf("%d %d\n", FLT_DIG, DBL_DIG); /* numbers of corrrect decimal digits in appropriate types. */

	return 0;
}
