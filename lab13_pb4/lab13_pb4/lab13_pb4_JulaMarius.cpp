/*
Author: Jula Marius
Date: 13/1/2017
Description: Write a program that reads from a text file 10 integer numbers. The file has to be
previously created using a different code or by using the operating system�s facilities.
Write the functions that:
- order the integers array in ascending/descending order and displays the result
- count the number of even numbers in the array and display the result
Write the generated results into the original file.
	FILE *f;
	{
		printf("Error opening the file!");
		_getch();
		exit(1);
	}
	while (!feof(f))
	{
		fscanf(f, "%d", &arr[i++]);
	}
	int i, j, *p;
	int i, j, *p;
	int i, *p;
	int i, count, *p;