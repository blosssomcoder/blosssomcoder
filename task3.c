#include <stdio.h>

int main() 
{
    int k;
    scanf("%i", &k);
    
    switch(k)
    {
        case 1:
            printf("погано");
            break;
        case 2:
            printf("незадовільно");
            break;
        case 3:
            printf("задовільно");
            break;
        case 4:
            printf("добре");
            break;
        case 5:
            printf("відмінно");
            break;
        default:
            printf("помилка");
            break;
    }
    
    return 0;
}
