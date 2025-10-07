#include<stdio.h>
#include <string.h>
int main() {
char str1[20] = "apple";
char str2[20] = "apple";
if(strcmp(str1, str2) == 0)
printf("Strings are equal");
else
printf("Strings are not equal");
return 0;
}
