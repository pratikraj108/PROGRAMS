#include <stdio.h>
int main(){
	int a=00000101;
	int b=00000100;
	printf("%d",a&b);
	printf("%d",a|b);
	printf("%d",~a);
	printf("%d",~b);
	printf("%d",a^b);
	printf("%d",a<<1);
	printf("%d",a>>1);
	return 0;
}
