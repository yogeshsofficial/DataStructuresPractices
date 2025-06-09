#include <iostream>

using namespace std;
void main()
{
	cout << "Hello world! inside Arrays.cpp \n";
	int array[10];
	char chArray[10];
	if (sizeof(array[0]))
	{
		for (int i = 0; i < sizeof(chArray) / sizeof(chArray[0]); i++)
		{
			chArray[i] = 'A';
			cout << "array[" << i << "] is: " << chArray[i] << "\n";
		}//End of for loop

	}//End of if and else
}