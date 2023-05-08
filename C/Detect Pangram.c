/*
A pangram is a sentence that contains every single letter of the alphabet at least once. For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.

*/
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool is_pangram(const char * str_in) {

    char arr[26];

    for(int i = 0; i < strlen(str_in); i++)
    {
        if(isalpha(str_in[i]))
        {
            arr[tolower((int)str_in[i])-97] = '1';
        }
    }
    for(int i=0; i < 26; i ++)
    {
      
        if(arr[i] != '1')
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    char * input = "The quick, brown fox jumps over the lazy dog!";
    if(is_pangram(input))
    {
        printf("WORKS 1!\n");
    }

    input = "The quick, brown fox jumped over the lazy dog!";
    if(!is_pangram(input))
    {
        printf("WORKS 2!\n");
    }
    
    return 0;
}