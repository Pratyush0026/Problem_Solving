#include <stdio.h>
main()
{
    char ch;
    printf("Enter any character:\n");
    scanf("%c",&ch);
    if (ch>='a' && ch<='z')
    ch=(int)ch-32;
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    printf("Vowel");
    else
    printf("Consonant");
}