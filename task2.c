#include <stdio.h>

int main() 
{
    int a, b;
    scanf("%i%i", &a, &b);
    
    for(int i = b-1; i > a; --i) 
    {
        printf("%i ", i);
    }
    
    printf("\n %i", (b-a-1));
    
    return 0;
}
