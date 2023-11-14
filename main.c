#include "main.h"

int main(void)
{
	int len1 , len2;

	len1 = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len1, len1);
    	printf("Length:[%d, %i]\n", len2, len2);
	printf("%d\n", len1);
	printf("%d\n", len2);
	len1 = _printf("Character:[%c]\n", 'H');
        len2 = printf("Character:[%c]\n", 'H');
	printf("%d\n", len1);
	printf("%d\n", len2);
	len1 = _printf("Percent:[%%]\n");
        len2 = printf("Percent:[%%]\n");
	printf("%d\n", len1);
	printf("%d\n", len2);
	len1 = _printf("String:[%s, %s]\n", "I am a string !", "good");
        len2 = printf("String:[%s]\n", "I am a string !");
	printf("%d\n", len1);
	printf("%d\n", len2);
	len1 = _printf("%b\n", 98);
	_printf("%d\n", len1);
	printf("%d\n", len1);
	return (0);
}
