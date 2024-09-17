#include <stdio.h>

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0)
        return a / b;
    else
        return 0;
}

int main() 
{
	
	//declare function pointer
	int (*operation[2]) (int, int);

	operation[0] = &add;

	int result = operation[0](7,8);

	printf("Sum = %d\n", result);

	operation[1] = subtract;

	result = operation[1](9,2);
	printf("subtraction = %d\n", result);

	return 0;
}



