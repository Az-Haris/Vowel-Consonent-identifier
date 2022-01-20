#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char letter;
    printf("Please Enter a Letter to Identify Vowel or Consonant : ");
    scanf("%c", &letter);
    if((letter=='a')||(letter=='e')||(letter=='i')||(letter=='o')||(letter=='u')||(letter=='A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U') )
    {
        printf("%c is Vowel", letter);
    }
    else
    {
        printf("%c is Consonant", letter);
    }

    getch();
    return 0;
}
