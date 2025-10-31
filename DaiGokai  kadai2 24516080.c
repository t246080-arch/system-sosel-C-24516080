#include <stdio.h>

int main()
{
    int e;
    int m;
    int all;
    
    printf("How many math points?");
    
    scanf("%d", &m);
    
    printf("How many english points?");
    
    scanf("%d", &e);
    
    all = m + e;
    
    if (all < 120)
    {
        printf("ALL point is %d? you are idiot", all);
    }
    
    else if (120 <= all && all < 160)
    {
        printf("ALL point is %d? Hmm..you are normal", all);
    }

    else 
    {
        printf("ALL point is %d?! you are cool", all);
    }
    
    return 0;
}
