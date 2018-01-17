#include <stdio.h>

FILE *f;
void Display(FILE *f);

int main()
{
    f = fopen("C:\\Users\\alex21\\Desktop\\LAB.10\\file1.txt", "r");

    if(f == NULL)
        printf("Error opening file");

    while(feof(f) == 0)
    {
        Display(f);
    }

    fclose(f);
    return 0;
}

void Display(FILE *f)
{
    char c;
    while(c != EOF)
    {
        c=fgetc(f);
        printf("%c", c);
    }
}
