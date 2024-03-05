/*
/*~~~~~~~~~~~~~~~my_memchr~~~~~~~~~~~~~~~

const char str[] = "http://www.tutorialspoint.com";
const char ch = 'c';
char *ret;
ret = my_memchr(str, ch, 40);
printf("String after |%c| is - |%s|\n", ch, ret);

/*~~~~~~~~~~~~~~~my_memcmp~~~~~~~~~~~~~~~
char str1[15];
char str2[15];
int ret;

memcpy(str2, "ABCDEF", 6);
memcpy(str1, "Abcdef", 6);

ret = my_memcmp(str1, str2, 5);

if (ret == 1) {
  printf("str2 is less than str1\n");
} else if (ret == -1) {
  printf("str1 is less than str2\n");
} else if (ret == -2) {
  printf("It is NULL Pointer \n");

} else {
  printf("str1 is equal to str2\n");
}

/*~~~~~~~~~~~~~~~my_memcpy~~~~~~~~~~~~~~~

const char src[50] = "http://www.tutorialspoint.com";
char dest[50];
strcpy(dest, "Heloooo!!");
printf("Before my_memcpy dest = %s\n", dest);
my_memcpy(dest, src, strlen(src) + 1);
printf("After my_memcpy dest = %s\n", dest);

/*~~~~~~~~~~~~~~~my_memmove~~~~~~~~~~~~~~~

char dest[] = "oldstring";
const char src[] = "newstring";
printf("Before memmove dest = %s, src = %s\n", dest, src);
my_memmove(dest, src, 1);
printf("After memmove dest = %s, src = %s\n", dest, src);

/*~~~~~~~~~~~~~~~my_memset~~~~~~~~~~~~~~~
char str[50];
strcpy(str, "This is string.h library function");
puts(str);
my_memset(str, '$', 7);
puts(str);

/*~~~~~~~~~~~~~~~my_memset~~~~~~~~~~~~~~~

char src[50], dest[50];
strcpy(src, "This is source");
strcpy(dest, "This is destination");

my_strcat(dest, src);

printf("Final destination string : |%s|\n", dest);

/*~~~~~~~~~~~~~~~my_strncat~~~~~~~~~~~~~~~
char src[50], dest[50];

strcpy(src, "This is source");
strcpy(dest, "This is destination");

strncat(dest, src, 15);

printf("Final destination string : |%s|\n", dest);

/*~~~~~~~~~~~~~~~my_strchr~~~~~~~~~~~~~~~
const char str[] = "http://www.tutorialspoint.com";
const char ch = '.';
char *ret;

ret = my_strchr(str, ch);
printf("After found  |%c| is - |%s|\n", ch, ret);
printf("String after|%s|\n", str);

/*~~~~~~~~~~~~~~~my_strcmp~~~~~~~~~~~~~~~
char str1[15];
char str2[15];
int ret;

strcpy(str2, "ABCDEF");
strcpy(str1, "ABCDEF");

ret = my_strcmp(str1, str2);

if (ret == 1) {
  printf("str2 is less than str1\n");
} else if (ret == -1) {
  printf("str1 is less than str2\n");
} else if (ret == -2) {
  printf("It is NULL Pointer \n");

} else {
  printf("str1 is equal to str2\n");
}
/*~~~~~~~~~~~~~~~my_strncmp~~~~~~~~~~~~~~~
char str1[15];
char str2[15];
int ret;

strcpy(str2, "aBCDEF");
strcpy(str1, "ABCDEF");

ret = my_strncmp(str1, str2, 8);

if (ret == 1) {
  printf("str2 is less than str1\n");
} else if (ret == -1) {
  printf("str1 is less than str2\n");
} else if (ret == -2) {
  printf("It is NULL Pointer \n");

} else {
  printf("str1 is equal to str2\n");
}

/*~~~~~~~~~~~~~~~my_strcoll~~~~~~~~~~~~~~~

char str1[15];
char str2[15];
int ret;

strcpy(str1, "abc");
strcpy(str2, "ABC");

ret = my_strcoll(str1, str2);

if (ret > 0) {
  printf("str1 is less than str2");
} else if (ret < 0) {
  printf("str2 is less than str1");
} else {
  printf("str1 is equal to str2");
}
/*~~~~~~~~~~~~~~~my_strcpy~~~~~~~~~~~~~~~
char src[40];
char dest[100];

memset(dest, '\0', sizeof(dest));
strcpy(src, "This is tutorialspoint.com");
strcpy(dest, src);

printf("Final copied string : %s\n", dest);
/*~~~~~~~~~~~~~~~my_strncpy~~~~~~~~~~~~~~~
char src[40];
char dest[12];

memset(dest, '\0', sizeof(dest));
strcpy(src, "This is tutorialspoint.com");
strncpy(dest, src, 7);

printf("Final copied string : %s\n", dest);

/*~~~~~~~~~~~~~~~my_strcspn~~~~~~~~~~~~~~~
int len;
const char str1[] = "ABCDEF4960910";
const char str2[] = "013";

len = my_strcspn(str1, str2);

printf("First matched character is at %d\n", len + 1);

/*~~~~~~~~~~~~~~~my_strlen~~~~~~~~~~~~~~~
char str[50];
int len;

strcpy(str, "my name is mostafa");

len = my_strlen(str);
printf("Length of |%s| is |%d|\n", str, len);

/*~~~~~~~~~~~~~~~my_strpbrk~~~~~~~~~~~~~~~
const char str1[] = "abcde2fghi3jk4l";
const char str2[] = "Z";
char *ret;

ret = my_strpbrk(str1, str2);
if (ret) {
  printf("First matching character: %c\n", *ret);
} else {
  printf("Character not found");
}

/*~~~~~~~~~~~~~~~my_strrchr~~~~~~~~~~~~~~~
int len;
const char str[] = "https://www.tutorialspoint.com";
const char ch = '.';
char *ret;

ret = my_strrchr(str, ch);

printf("String after |%c| is - |%s|\n", ch, ret);

/*~~~~~~~~~~~~~~~my_strspn~~~~~~~~~~~~~~~
int len;
const char str1[] = "ABCDEFG019874";
const char str2[] = "ABCDEFG019874";

len = my_strspn(str1, str2);

printf("Length of initial segment matching %d\n", len);

/*~~~~~~~~~~~~~~~my_strstr~~~~~~~~~~~~~~~
const char haystack[20] = "TutorialsPoint";
const char needle[10] = "Point";
char *ret;
ret = my_strstr(haystack, needle);
printf("The substring is: %s\n", ret);
return 0;
/*~~~~~~~~~~~~~~~my_strtok~~~~~~~~~~~~~~~
char str[80] = "This is-www.tutorialspoint.com-website";
const char s[2] = "-";
char *token;

token = my_strtok(str, s);

while (token != NULL) {
  printf(" %s\n", token);

  token = my_strtok(NULL, s);
}
/*~~~~~~~~~~~~~~~my_strxfrm~~~~~~~~~~~~~~~
char dest[20];
char src[20];
int len;

strcpy(src, "Tutorials Point");
len = my_strxfrm(dest, src, 20);

printf("Length of string |%s| is: |%d|", dest, len);

/*~~~~~~~~~~~~~~~strTlwr~~~~~~~~~~~~~~~*
const char str1[] = "ABCDEFG019874";
strTlwr(str1);
printf("%s\n", str1);

/*~~~~~~~~~~~~~~~strTuper~~~~~~~~~~~~~~~

const char str1[] = "abcdefg019874";
strTuper(str1);
printf("%s\n", str1);
/*~~~~~~~~~~~~~~~strTog~~~~~~~~~~~~~~~
const char str1[] = "aBcDeFgH";
strTog(str1);
printf("%s\n", str1);

/*~~~~~~~~~~~~~~~sTi~~~~~~~~~~~~~~~
const char str1[] = "43";
int r = sTi(str1);
printf("%i\n", r);

/*~~~~~~~~~~~~~~~sTf~~~~~~~~~~~~~~~
const char str1[] = "3.3";
float r = sTf(str1);
printf("%f\n", r);
/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*/