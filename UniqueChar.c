//
// Created by Adminn on 13-01-2021.
//
#include <stdio.h>
#include <string.h>
char caseconvertion(char temp)
{
    int toggle;
    char letter;
    toggle='a'-'A';
    letter =temp ^ toggle;
    return letter;
}
void main()
{
    char string[20],arr[20],temp,ch;
    int len;
    printf("\n ENter a string : ");
    scanf("%s",string);
    len=strlen(string);
    for (int i = 0; i < len; ++i) {
        arr[i]=string[i];
    }
    for (int i = 0; i < len; ++i) {
        temp=arr[i];
        ch=caseconvertion(temp);
        for (int j = i+1; j < len;) {
            if (arr[j]==temp || arr[j]==ch)
            {
                for (int k = j; k < len;k++) {
                    arr[k]=arr[k+1];
                }
                len--;
            } else
            {
                j++;
            }
        }
    }
    puts(arr);
}
