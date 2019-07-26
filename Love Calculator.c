
#include <stdio.h>
#include <string.h>

int main()
{
    int i, length1, length2, sum1 = 0, sum2 = 0, sum;
    char character1, character2;
    char string1[25], string2[25];
    printf("\n  **************----------###############---------***************");
    printf("\n  *                                                             *");
    printf("\n  **************----------LOVE CALCULATOR---------***************");
    printf("\n  *                                                             *");
    printf("\n  **************----------###############---------***************");

    printf("\n\n\tEnter Your Name Please : ");
    scanf("%[^\n]", string1);
    getchar();
    printf("\tEnter Your Lover's Name Please : ");
    scanf("%[^\n]", string2);

    length1 = strlen(string1);
    length2 = strlen(string2);

    for(i = 0; i < length1; i++) {
        character1 = (char)string1[i];
        if (character1 >= 'a' && character1 <= 'z')
            sum1 += (int)character1 - 32;
        else if (character1 >= 'A' && character1 <= 'Z')
            sum1 += (int)character1;
    }
     for(i = 0; i < length2; i++) {
        character2 = string2[i];
        if (character2 >= 'a' && character2 <= 'z')
            sum2 += (int)character2 - 32;
        else if (character2 >= 'A' && character2 <= 'Z')
            sum2 += (int)character2;
    }
    sum = (sum1+sum2);

    if (sum <= 1000)
        sum /= 10;
    else if (sum > 1000)
        sum /= 100;
    printf("\n\tThe love between  %s  and  %s, possibility is  %d%%.", string1, string2, sum);

    getch();
            printf ("\n\n\t      PROGRAMMER ASM AKASH  AKASH\n\t       UTTARA UNIVERSITY DHAKA");

            getch();

    return 0;
}
