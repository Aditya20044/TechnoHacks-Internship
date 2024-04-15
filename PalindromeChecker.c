#include <stdio.h>
#include <string.h>
#include <ctype.h>


int is_letter(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}


int is_palindrome(char *str) {
    int len = strlen(str);
    int i = 0, j = len - 1;
    
    while (i < j) {
       
        while (i < j && !is_letter(str[i])) {
            i++;
        }
        while (i < j && !is_letter(str[j])) {
            j--;
        }
        
       
        if (tolower(str[i]) != tolower(str[j])) {
            return 0; 
        }
        
        i++;
        j--;
    }
    
    return 1; 
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    
    if (is_palindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}

