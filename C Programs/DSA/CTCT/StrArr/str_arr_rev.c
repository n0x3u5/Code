#include <stdio.h>

char* str_rev(char* char_arr) {
    int end = 0, start = 0;
    while(char_arr[end] != '\0') {
        end++;
    }
    end--;
    while (start < end) {
        char temp = char_arr[start];
        char_arr[start] = char_arr[end];
        char_arr[end] = temp;
        end--;
        start++;
    }
    return char_arr;
}

int main() {

    char char_arr[30];
    gets(char_arr);

    puts(str_rev(char_arr));
}
