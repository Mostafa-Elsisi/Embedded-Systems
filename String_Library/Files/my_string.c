/* ~~~~~~~~~~ Includes ~~~~~~~~~~~ */
#include "my_string.h"
#include <stdio.h>

/*~~~~~~~~~~~~~~~my_memchr~~~~~~~~~~~~~~~*/
void *my_memchr(const void *str, int c, const unsigned int n) {
  if (NULL == str) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  } else {
    char const *ptr = str;
    char ch = (char)c;
    unsigned int i = 0;
    for (i = 0; i < n; i++) {
      if (*(ptr + i) == ch) {
        return ((void *)(ptr + i));
      }
    }
    return NULL;
  }
}

/*~~~~~~~~~~~~~~~my_memcmp~~~~~~~~~~~~~~~*/
int my_memcmp(const void *str1, const void *str2, unsigned int n) {
  if ((NULL == str1) || (NULL == str2)) {
    printf("ERROR: Invalid input!\n");
    return -2;
  } else {
    const char *Ptr1 = str1;
    const char *Ptr2 = str2;
    unsigned int i = 0;
    for (i = 0; i < n; i++) {
      if (*(Ptr1 + i) > *(Ptr2 + i)) {
        return 1;
      } else if (*(Ptr1 + i) < *(Ptr2 + i)) {
        return -1;
      }
    }
    return 0; // IF STR1 == STR2
  }
}
/*~~~~~~~~~~~~~~~my_memcpy~~~~~~~~~~~~~~~*/
void *my_memcpy(void *dest, const void *src, unsigned int n) {
  if ((NULL == dest) || (NULL == src)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  } else {
    unsigned int cnt = 0;
    unsigned char *tempdest = dest;
    const unsigned char *tempsrc = src;
    for (cnt = 0; cnt < n; cnt++) {
      *(tempdest + cnt) = *(tempsrc + cnt);
    }
    return dest;
  }
}

/*~~~~~~~~~~~~~~~my_memmove~~~~~~~~~~~~~~~*/
void *my_memmove(void *dest, const void *src, unsigned int n) {
  unsigned char *d = dest;
  const unsigned char *s = src;
  if ((NULL == s) || (NULL == d)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }

  // Check for overlap by calculate if s,d share same block of memory by
  // addresses
  if (s < d && s + n > d) {
    // Copy from end to start to avoid overwriting source prematurely
    s += n;
    d += n;
    while (n--)
      *--d = *--s;
  } else {
    // Copy from start to end
    while (n--)
      *d++ = *s++;
  }

  return dest;
}

/*~~~~~~~~~~~~~~~my_memset~~~~~~~~~~~~~~~*/
void *my_memset(void *str, int c, unsigned n) {
  if ((NULL == str)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  } else {
    char *ptr = str;
    unsigned char ch = (unsigned char)c;
    unsigned int cnt = 0;
    for (cnt = 0; cnt < n; cnt++) {
      *(ptr + cnt) = ch;
    }
    return ptr;
  }
}

/*~~~~~~~~~~~~~~~my_strcat~~~~~~~~~~~~~~~*/
char *my_strcat(char *dest, const char *src) {
  if ((NULL == dest) || (NULL == src)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  } else {
    const char *src_ptr = src;
    char *dest_ptr = dest;
    unsigned int i = 0;             // counter for destination
    while (*(dest_ptr + i) != '\0') // to find end of dest string
    {
      i++;
    }
    unsigned int j = 0;            // counter for source
    while (*(src_ptr + j) != '\0') // to add the new string
    {
      *(dest_ptr + i) = *(src_ptr + j);
      i++;
      j++;
    }
    *(dest_ptr + i) = '\0';
    return dest_ptr;
  }
}

/*~~~~~~~~~~~~~~~my_strncat~~~~~~~~~~~~~~~*/
char *my_strncat(char *dest, const char *src, unsigned int n) {
  if ((NULL == dest) || (NULL == src)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  } else {
    const char *src_ptr = src;
    char *dest_ptr = dest;
    unsigned int i = 0;             // counter for destination
    while (*(dest_ptr + i) != '\0') // to find end of dest string
    {
      i++;
    }
    unsigned int j = 0;                   // counter for source
    while (*(src_ptr + j) != '\0' && n--) // to add the new string
    {
      *(dest_ptr + i) = *(src_ptr + j);
      i++;
      j++;
    }
    *(dest_ptr + i) = '\0';
    return dest_ptr;
  }
}

/*~~~~~~~~~~~~~~~my_strchr~~~~~~~~~~~~~~~*/
char *my_strchr(const char *str, int c) {

  if ((NULL == str)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  } else {
    const char *str_ptr = str;
    unsigned char ch = c;
    while (*(str_ptr) != '\0') {
      if (*(str_ptr) == ch) {
        return (char *)str_ptr;
      }
      str_ptr++;
    }
    if (ch = '\0') {
      return (char *)str_ptr;
    }
    return NULL;
  }
}

/*~~~~~~~~~~~~~~~my_strcmp~~~~~~~~~~~~~~~*/
int my_strcmp(const char *str1, const char *str2) {
  if ((NULL == str1) || (NULL == str2)) {
    printf("ERROR: Invalid input!\n");
    return -2;
  }

  unsigned int cnt = 0;
  while (*(str1 + cnt) != '\0' && *(str2 + cnt) != '\0') {
    if (*(str1 + cnt) > *(str2 + cnt)) {
      return 1;
    } else if (*(str1 + cnt) < *(str2 + cnt)) {
      return -1;
    }
    cnt++;
  }

  // Check if one string is shorter than the other
  if (*(str1 + cnt) == '\0' && *(str2 + cnt) == '\0') {
    return 0; // Strings are equal
  } else if (*(str1 + cnt) == '\0') {
    return -1; // str1 is shorter
  } else {
    return 1; // str2 is shorter
  }
}

/*~~~~~~~~~~~~~~~my_strncmp~~~~~~~~~~~~~~~*/
int my_strncmp(const char *str1, const char *str2, unsigned int n) {
  if ((NULL == str1) || (NULL == str2)) {
    printf("ERROR: Invalid input!\n");
    return -2;
  }

  unsigned int cnt = 0;
  while (((*(str1 + cnt) != '\0' && *(str2 + cnt) != '\0')) && (n > 0)) {
    if (*(str1 + cnt) > *(str2 + cnt)) {
      return 1;
    } else if (*(str1 + cnt) < *(str2 + cnt)) {
      return -1;
    }
    cnt++;
    n--;
  }
  if (n == 0) {
    return 0;
  }
  if ((*(str1 + cnt) == '\0' && *(str2 + cnt) == '\0')) {
    return 0;
  } else if (*(str1 + cnt) == '\0') {
    return -1;
  } else {
    return 1;
  }
}

/*~~~~~~~~~~~~~~~my_strcoll~~~~~~~~~~~~~~~*/
int my_strcoll(const char *str1, const char *str2) {
  if ((NULL == str1) || (NULL == str2)) {
    printf("ERROR: Invalid input!\n");
    return -2;
  }

  unsigned int cnt = 0;
  while (*(str1 + cnt) != '\0' && *(str2 + cnt) != '\0') {
    if (*(str1 + cnt) > *(str2 + cnt)) {
      return 1;
    } else if (*(str1 + cnt) < *(str2 + cnt)) {
      return -1;
    }
    cnt++;
  }

  // Check if one string is shorter than the other
  if (*(str1 + cnt) != '\0') {
    return 1; // str1 is longer
  } else if (*(str2 + cnt) != '\0') {
    return -1; // str2 is longer
  }

  return 0;
}

/*~~~~~~~~~~~~~~~my_strcpy~~~~~~~~~~~~~~~*/

char *my_strcpy(char *dest, const char *src) {
  if ((NULL == dest) || (NULL == src)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }
  const char *src_ptr = src;
  char *dest_ptr = dest;
  unsigned int cnt = 0;
  while (*(src_ptr + cnt) != '\0') {
    *(dest_ptr + cnt) = *(src_ptr + cnt);
    cnt++;
  }
  *(dest_ptr + cnt) = '\0';
  return dest;
}

/*~~~~~~~~~~~~~~~my_strncpy~~~~~~~~~~~~~~~*/
char *my_strncpy(char *dest, const char *src, unsigned int n) {
  if ((NULL == dest) || (NULL == src)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }
  const char *src_ptr = src;
  char *dest_ptr = dest;
  unsigned int cnt = 0;
  while (*(src_ptr + cnt) != '\0' && n > 0) {
    *(dest_ptr + cnt) = *(src_ptr + cnt);
    cnt++;
    n--;
  }

  // Fill remaining characters in dest with null terminator.

  while (n > 0) {
    *(dest_ptr + cnt) = '\0';
    cnt++;
    n--;
  }
  return dest;
}

/*~~~~~~~~~~~~~~~my_strcspn~~~~~~~~~~~~~~~*/
unsigned int my_strcspn(const char *str1, const char *str2) {
  if ((NULL == str1) || (NULL == str2)) {
    printf("ERROR: Invalid input!\n");
  }
  unsigned int cnt1 = 0;
  while (str1[cnt1] != '\0') {
    unsigned int cnt2 = 0;
    while (str2[cnt2] != '\0') {
      if (str1[cnt1] == str2[cnt2]) {
        return cnt1;
      }
      cnt2++;
    }

    cnt1++;
  }
  return cnt1;
}

/*~~~~~~~~~~~~~~~my_strlen~~~~~~~~~~~~~~~*/
unsigned int my_strlen(const char *str) {
  if (NULL == str) {
    printf("ERROR: Invalid input!\n");
  }
  unsigned int cnt = 0;
  while (str[cnt] != '\0') {
    cnt++;
  }
  return cnt;
}

/*~~~~~~~~~~~~~~~my_strpbrk~~~~~~~~~~~~~~~*/
char *my_strpbrk(const char *str1, const char *str2) {
  if ((NULL == str1) || (NULL == str2)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }

  unsigned int cnt1 = 0;
  while (str1[cnt1] != '\0') {
    unsigned int cnt2 = 0;
    while (str2[cnt2] != '\0') {
      if (str1[cnt1] == str2[cnt2]) {
        return &str1[cnt1];
      }
      cnt2++;
    }

    cnt1++;
  }

  return NULL;
}

/*~~~~~~~~~~~~~~~my_strrchr~~~~~~~~~~~~~~~*/
char *my_strrchr(const char *str, int c) {
  if (NULL == str) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }
  unsigned char ch = (unsigned char)c;
  char *lst_fnd = NULL;
  unsigned int i = 0;
  while (*(str + i) != '\0') {
    if (*(str + i) == ch) {
      lst_fnd = (str + i);
    }
    i++;
  }
  return lst_fnd;
}
/*~~~~~~~~~~~~~~~my_strspn~~~~~~~~~~~~~~~*/

unsigned int my_strspn(const char *str1, const char *str2) {
  if ((NULL == str1) || (NULL == str2)) {
    printf("ERROR: Invalid input!\n");
    return 0;
  }
  unsigned int cnt = 0;
  while (str1[cnt] != '\0') {
    unsigned int i = 0;
    while (str2[i] != '\0') {
      if (str1[cnt] == str2[i]) {
        break;
      }
      i++;
    }
    if (str2[i] == '\0') {
      break;
    }
    cnt++;
  }
  return cnt;
}

/*~~~~~~~~~~~~~~~my_strstr~~~~~~~~~~~~~~~*/
char *my_strstr(const char *haystack, const char *needle) {
  if ((NULL == haystack) || (NULL == needle)) {
    printf("ERROR: Invalid input!\n");
    return (char *)haystack;
  }
  while (*haystack != '\0') {
    const char *haystack_ptr = haystack;
    const char *needle_ptr = needle;
    while ((*needle_ptr != '\0') && (*haystack_ptr == *needle_ptr)) {
      haystack_ptr++;
      needle_ptr++;
    }
    // If the needle is fully matched,return the starting position

    if (*needle_ptr == '\0')
      return (char *)haystack;

    haystack++;
  }
  // If the needle is not found, return NULL
  return NULL;
}

/*~~~~~~~~~~~~~~~my_strtok~~~~~~~~~~~~~~~*/
char *my_strtok(char *str, const char *delim) {
  static char *next_token = NULL;

  // If a new string is to be tokenized
  if (str != NULL) {
    next_token = str;
  } else {
    if (next_token == NULL)
      return NULL;
  }
  // Find the start of the token
  char *start = next_token;
  // Find the end of the token
  next_token = my_strpbrk(next_token, delim);

  // If a token was found,
  // terminate it and move next_token to the next character
  if (next_token != NULL) {
    *next_token = '\0';
    next_token++;
  } else {
    // If no more tokens are found,
    // mark next_token as NULL for future calls
    next_token = NULL;
  }
  return start;
}

/*~~~~~~~~~~~~~~~my_strxfrm~~~~~~~~~~~~~~~*/
unsigned int my_strxfrm(char *dest, const char *src, unsigned int n) {
  if ((NULL == dest) || (NULL == src)) {
    printf("ERROR: Invalid input!\n");
  }

  unsigned int cnt = 0;
  while ((cnt < n - 1) && (*(src + cnt) != '\0')) {
    *(dest + cnt) = *(src + cnt);
    cnt++;
  }
  *(dest + cnt) = '\0';
  return cnt;
}
/*~~~~~~~~~~~~~~~strlwr~~~~~~~~~~~~~~~*/
char *strTlwr(char *str) {
  if ((NULL == str)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }
  while (*str) {
    if ((*str >= 'A') && (*str <= 'Z')) {
      *str ^= 32;
    }
    str++;
  }
  return str;
}

/*~~~~~~~~~~~~~~~strlwr~~~~~~~~~~~~~~~*/
char *strTuper(char *str) {
  if ((NULL == str)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }
  while (*str) {
    if ((*str >= 'a') && (*str <= 'z')) {
      *str ^= 32;
    }
    str++;
  }
  return str;
}
char *strTog(char *str) {
  if ((NULL == str)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }
  while (*str) {
    if (((*str >= 'a') && (*str <= 'z')) || (*str >= 'A') && (*str <= 'Z')) {
      *str ^= 32;
    }
    str++;
  }
  return str;
}

/*~~~~~~~~~~~~~~~sTi~~~~~~~~~~~~~~~*/
int sTi(char *str) {
  if ((NULL == str)) {
    printf("ERROR: Invalid input!\n");
  }
  int result = 0;
  char sign = 1;
  int cnt = 0;
  if (str[cnt] == '-') {
    sign = -1;
    cnt++;
  } else if (str[cnt] == '+') {
    cnt++;
  }
  while (str[cnt] != '\0') {
    if ((str[cnt] >= '0') && (str[cnt] <= '9')) {
      result = result * 10 + (str[cnt] - '0');
    } else {
      printf("ERROR: Invalid input!\n");
      return 0;
    }
    cnt++;
  }
  return result * sign;
}
/*~~~~~~~~~~~~~~~sTf~~~~~~~~~~~~~~~*/
float sTf(char *str) {
  if ((NULL == str)) {
    printf("ERROR: Invalid input!\n");
  }
  float result = 0.0f;
  char sign = 1;
  int cnt = 0;
  if (str[cnt] == '-') {
    sign = -1;
    cnt++;
  } else if (str[cnt] == '+') {
    cnt++;
  }
  while (str[cnt] != '\0') {
    if ((str[cnt] >= '0') && (str[cnt] <= '9')) {
      result = result * 10 + (str[cnt] - '0');
    } else if (str[cnt] == '.') {
      cnt++;
      float divisor = 10.0f; // To handle decimal places
      while (str[cnt] != '\0' && str[cnt] >= '0' && str[cnt] <= '9') {
        result = result + (str[cnt] - '0') / divisor;
        divisor *= 10.0f;
        cnt++;
      }

      break;
    } else {
      printf("ERROR: Invalid input!\n");
      return 0.0f;
    }
    cnt++;
  }
  return result * sign;
}

/*~~~~~~~~~~~~~~~replaceCharWithChar~~~~~~~~~~~~~~~*/
char *replaceCharWithChar(char *str, const char *delim, const char ch) {
  if ((NULL == str) || (NULL == delim)) {
    printf("ERROR: Invalid input!\n");
    return NULL;
  }
  unsigned int cnt = 0;
  while (*(str + cnt) != '\0') {
    if (*(str + cnt) == *delim)
      *(str + cnt) = ch;

    cnt++;
  }
  return str;
}
/*~~~~~~~~~~~~~~~Isdigit~~~~~~~~~~~~~~~*/
unsigned char Isdigit(char n) { return ((n >= '0') && (n <= '9')); }

/*~~~~~~~~~~~~~~~Isletter~~~~~~~~~~~~~~~*/
unsigned char Isletter(char n) {
  return (((n >= 'a') && (n <= 'b')) || ((n >= 'A') && (n <= 'Z')));
}
/*~~~~~~~~~~~~~~~iTs~~~~~~~~~~~~~~~*/
char *iTs(int num, char *str) {
  char is_negative = 0;
  if (num < 0) {
    num = -num;
    is_negative = 1;
  }
  unsigned int cnt = 0;
  while (num != 0) {
    str[cnt++] = (num % 10) + '0';
    num /= 10;
  }
  if (is_negative) {
    str[cnt++] = '-';
  }

  str[cnt] = '\0';

  int j = 0;
  char tmp = 0;
  for (j = 0; j < cnt / 2; j++) {
    tmp = str[j];
    str[j] = str[cnt - j - 1];
    str[cnt - j - 1] = tmp;
  }

  return str;
}
