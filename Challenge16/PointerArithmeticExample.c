#include <stdio.h>
#include <stdlib.h>

int stringLength(const char *string);

int main()
{
	printf("%d \n", stringLength("stringLength test"));
    printf("%d \n", stringLength(""));
    printf("%d \n", stringLength("jason"));
    
	return 0;
}

int stringLength(const char *string) {
    const char *lastAddress = string;
    
    while (*lastAddress) {  // if you dereference a null terminator => equal to zero, and zero is equal to false
        ++lastAddress;
    }
    return lastAddress - string;
}