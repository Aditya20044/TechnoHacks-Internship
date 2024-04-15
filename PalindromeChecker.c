Last login: Sun Apr 14 23:08:27 on ttys000
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano pthread5.c
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano pthread5.c
adityakumar@ADITYAs-MacBook-Air-2 ~ % gcc pthread5.c
adityakumar@ADITYAs-MacBook-Air-2 ~ % ./a.out
inside thread
sum is 8
inside main process
thread returned:sum calculated
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano pthread5.c
adityakumar@ADITYAs-MacBook-Air-2 ~ % gcc pthread5.c
adityakumar@ADITYAs-MacBook-Air-2 ~ % ./a.out
inside thread
sum is 8
inside main process
thread returned:sum calculated
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano pthread5.c
adityakumar@ADITYAs-MacBook-Air-2 ~ % gcc pthread5.c
adityakumar@ADITYAs-MacBook-Air-2 ~ % ./a.out
inside thread
sum is 8
inside main process
thread returned:sum calculated
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano
adityakumar@ADITYAs-MacBook-Air-2 ~ % gcc Palindrome checker
clang: error: no such file or directory: 'Palindrome'
clang: error: no such file or directory: 'checker'
clang: error: no input files
adityakumar@ADITYAs-MacBook-Air-2 ~ % gcc Palindrome checker.c
clang: error: no such file or directory: 'Palindrome'
clang: error: no such file or directory: 'checker.c'
clang: error: no input files
adityakumar@ADITYAs-MacBook-Air-2 ~ % gcc Palindromechecker.c
clang: error: no such file or directory: 'Palindromechecker.c'
clang: error: no input files
adityakumar@ADITYAs-MacBook-Air-2 ~ % nano

























  UW PICO 5.09                                                                                     New Buffer                                                                                     Modified  

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





^G Get Help                       ^O WriteOut                       ^R Read File                      ^Y Prev Pg                        ^K Cut Text                       ^C Cur Pos                        
^X Exit                           ^J Justify                        ^W Where is                       ^V Next Pg                        ^U UnCut Text                     ^T To Spell                      
