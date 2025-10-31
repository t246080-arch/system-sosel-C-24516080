#include <stdio.h>

int main()
{
    int k;
    
    printf("How many points?");
    
    scanf("%d", &k);
    
    if (k < 60)
    {
        printf("%d? you are idiot", k);
    }
    
    else if (60 <= k && k < 80)
    {
        printf("%d? Hmm..you are normal", k);
    }

    else 
    {
        printf("%d?! you are cool", k);
    }
    
    return 0;
}