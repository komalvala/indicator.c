#include <stdio.h>

int findStringLength(const char *str) {
    int length = 0;

    
    while (*str != '\0') {
        length++;
        str++; 
    }

    return length;
}

int main() {
    char inputString[100]; 
    int length;


    printf("Enter any string: ");
  
    fgets(inputString, sizeof(inputString), stdin);

    size_t len = strlen(inputString);
   if (len > 0 && inputString[len - 1] == '\n') 
   {
       inputString[len - 1] = '\0';
   }

    length = findStringLength(inputString);

    printf("The length of the string is: %d\n", length);

    return 0;
}
