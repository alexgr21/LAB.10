#include <stdio.h>

FILE *f;
int LineCounter(FILE *f);

int main()
{
    f = fopen("C:\\Users\\alex21\\Desktop\\LAB.10\\file1.txt", "r");

    if(f==NULL)
        printf("Error opening file");

    printf("Line count is: %i", LineCounter(f));

    fclose(f);
    return 0;
}

int LineCounter(FILE *f)
{
    char c;
    int cnt = 1;

    while(feof(f) == 0)
    {
        c = fgetc(f);

      if (c == '\n')
        cnt++;
    }

    return cnt;
}
