#include <stdio.h>
#pragma comment(lib, "CoreDLL.lib")

int sum(int, int);

int main()
{
	printf("DLL Import Call Function Sum = %d", sum(5, 6));
}