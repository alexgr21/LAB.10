#include <stdio.h>

FILE *f;
int LongestLineLength(FILE *f);

int main()
{
    f = fopen("C:\\Users\\alex21\\Desktop\\LAB.10\\file1.txt", "r");

    if(f == NULL)
        printf("Error opening file");

    printf("File longest line length: %i", LongestLineLength(f));

    fclose(f);
    return 0;
}

int LongestLineLength(FILE *f)
{
    int max = -1;
    int length = 0;
    char c;

    while(feof(f) == 0)
    {
        c = fgetc(f);
        length++;

        if(c != EOF && c!= '\n')
        {
            if(length > max)
                max = length;

            length = 0;
        }
    }
    return max;
}
