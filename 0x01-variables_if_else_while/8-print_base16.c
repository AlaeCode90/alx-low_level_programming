/*
 * File: 6-print_numberz.c
 * Auth: Alae LGATT
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 * Return: Always 0.
 */

#include <stdio.h>

int main() {
    int i;

    for(i=0; i<16; i++) {
        if(i<10) {
            putchar(i+'0');
        } else {
            putchar(i-10+'a');
        }
    }

    putchar('\n');

    return 0;
}
