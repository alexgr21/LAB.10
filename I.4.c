#include <stdio.h>

FILE *f;
int CharacterCounter(FILE *f);

int main()
{
    f = fopen("C:\\Users\\alex21\\Desktop\\LAB.10\\file1.txt", "r");

    if(f==NULL)
        printf("Error opening file");


    printf("File character count: %i", CharacterCounter(f));

    fclose(f);
    return 0;
}

int CharacterCounter(FILE *f)
{
    char c;
    int cnt = 1;

    while(feof(f)==0)
    {
        c=fgetc(f);
        if (c != ' ' && c != '\n')
             cnt++;

    }
    return cnt;
}
