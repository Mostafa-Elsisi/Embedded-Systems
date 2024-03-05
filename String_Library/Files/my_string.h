/**                       Documentation section
==========================================================================
  @file           : my_string.h
  @author         : Mostafa Alaa Elsisi
  @brief          : Contains the header file
==========================================================================
**/

/*========================= File Guard Start ===========================*/
#ifndef _MY_STRING_H
#define _MY_STRING_H
#include <stdio.h>

/* ~~~~ Functions Prototypes ~~~~ */

void *my_memchr(const void *str, int c, const unsigned int n);

int my_memcmp(const void *str1, const void *str2, unsigned int n);

void *my_memcpy(void *dest, const void *src, unsigned int n);

void *my_memcpy(void *dest, const void *src, unsigned int n);

void *my_memset(void *str, int c, unsigned n);

char *my_strcat(char *dest, const char *src);

char *my_strncat(char *dest, const char *src, unsigned int n);

char *my_strchr(const char *str, int c);

int my_strcmp(const char *str1, const char *str2);

int my_strncmp(const char *str1, const char *str2, unsigned n);

int my_strcoll(const char *str1, const char *str2);

char *my_strcpy(char *dest, const char *src);

char *my_strncpy(char *dest, const char *src, unsigned int n);

unsigned int my_strcspn(const char *str1, const char *str2);

unsigned int my_strlen(const char *str);

char *my_strpbrk(const char *str1, const char *str2);

char *my_strrchr(const char *str, int c);

unsigned int my_strspn(const char *str1, const char *str2);

char *my_strstr(const char *haystack, const char *needle);

char *my_strtok(char *str, const char *delim);

unsigned int my_strxfrm(char *dest, const char *src, unsigned int n);

char *strTlwr(char *str);

char *strTuper(char *str);

char *strTog(char *str);

int sTi(char *str);

float sTf(char *str);

char *replaceCharWithChar(char *str, const char *delim, const char ch);

#endif
/*=========================== File Guard End ===========================*/

/**                            -History log-
==========================================================================
User           Date                 Brief
==========================================================================
Mostafa       29Feb2024           Starts Write Files
Mostafa       05Mar2024           Ends Write Files
==========================================================================
*/
