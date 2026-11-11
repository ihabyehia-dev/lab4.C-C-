/***************************************************************** 

    File: lab2main.c

    Author: Ihab yehia
    Seneca email: [Iyehia1@myseneca.ca]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/
//Uncomment the next line if you are using Visual Studio
//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/* 
this funtion returns the last digit of the integer number
@param number : integer number 
@return last digit of the integer number 
*/ 
int lastDigit(int number);
int wholeMinutes(int seconds);


int main(void)
{
int number, digit,second;

printf("Enter a number: \n");
scanf("%d",&number);

digit = lastDigit(number);

printf("%d is the last digit in the number %d. \n",digit,number);

printf("Enter the number of seconds: \n");

scanf("%d",&second);

int result2 = wholeMinutes(second);

printf("%d is %d minutes. \n",second, result2);

return 0;
}
