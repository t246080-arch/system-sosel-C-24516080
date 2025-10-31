#include <stdio.h>

int main(void)
{
    int diff;
    char large;
    char small;
    
    printf("アルファベットの小文字を入力");
    
    scanf("%c", &small);
    
    diff = 'A' - 'a';
    
    large = small + diff;
    
    printf("大文字は%c　小文字は%c\n", small, large);

    return 0;
}