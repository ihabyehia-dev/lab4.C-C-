/***************************************************************** 

    File: lab2.c

    Author: [Ihab yehia]
    Seneca email: [Iyehia1@myseneca.ca]

    To compile program in codespaces, in terminal pane type:
        gcc -Wall lab2.c lab2main.c
    To run program in codespaces, in terminal pane type:
        ./a.out
        
***************************************************************/

#include <stdio.h>
int lastDigit(int number);
int wholeMinutes(int seconds);

int lastDigit(int number){
    int digit;
    digit=number%10;
    return digit;
}

int wholeMinutes(int seconds){
    int second;
    second = seconds /60;
    return second;
}