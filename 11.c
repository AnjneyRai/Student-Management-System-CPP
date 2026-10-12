#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    
    char myString[] = "rar";
    char orgstring[] = "rar";
    printf("Original String: %s\n", myString);
    reverseString(myString);
    printf("Reversed String: %s\n", myString);
    if(myString[3] == orgstring[3])
    {
        printf("\nPalindrome String");
    }
    else
    {
        printf("\nNot a Palindrome String");
    }

    return 0;
}
