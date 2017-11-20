/* Laboratory 4 Problem 3
Description: displaying a defined value using cout and the << operator

Author: Jula Marius

Date: 29/10/17 */

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>

#define value DIM   /*define a value*/

using namespace std;

/*prototypes*/
void print_value(int);   

/*main function*/
void main()
{
	int DIM;
	printf("Enter a value: ");
	scanf("%d", &DIM);

	print_value(value);

	_getch();

}

/*function to print a given parameter*/
void print_value(int a)
{
	cout << "The value is " << a;
}