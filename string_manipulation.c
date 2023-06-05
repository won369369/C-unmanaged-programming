//strlen
char str[] = "Hello, World!";
printf("%zu\n", strlen(str));  // Outputs: 13

//strcpy
char src[] = "Hello, World!";
char dest[50];
strcpy(dest, src);
printf("%s\n", dest);  // Outputs: Hello, World!

//strcat 
char dest[50] = "Hello";
char src[] = ", World!";
strcat(dest, src);
printf("%s\n", dest);  // Outputs: Hello, World!

//strcmp
char str1[] = "abc";
char str2[] = "ABC";
printf("%d\n", strcmp(str1, str2));  // Outputs a value > 0, as 'abc' is lexicographically greater than 'ABC'

//strncpy
char src[] = "Hello, World!";
char dest[50];
strncpy(dest, src, 5);
dest[5] = '\0';  // Manually null-terminate the string
printf("%s\n", dest);  // Outputs: Hello

//strncat   
char dest[50] = "Hello";
char src[] = ", World!";
strncat(dest, src, 7);
printf("%s\n", dest);  // Outputs: Hello, World

//strncmp
char str1[] = "abcdef";
char str2[] = "abcXYZ";
printf("%d\n", strncmp(str1, str2, 3));  // Outputs: 0, as the first 3 characters of str1 and str

