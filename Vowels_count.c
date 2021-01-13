//
// Created by Adminn on 13-01-2021.
//
#include <stdio.h>
#include <string.h>
void main()
{
    char str[20];
    int length,count=0;
    printf("Enter a string : ");
    scanf("%s",&str);
    length=strlen(str);
    for (int i = 0; i < length; ++i) {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }
    printf("\nTotal number of vowels : %d  ",count);
}
