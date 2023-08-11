#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
printf("Uppercase Alphabets are: \n");
ch='A';
while(ch<='Z'){
printf("%c",ch);
printf(" ");
 ch++;
}
printf("\n");
printf("\nLowercase Alphabets are: \n");
ch='a';
while(ch<='z'){
printf("%c",ch);
printf(" ");

ch++;
}
    getch();
    return 0;
}
