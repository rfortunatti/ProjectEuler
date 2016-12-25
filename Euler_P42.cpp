#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compareAlpha(char*, char);
int boolTriangleValue(float);

int main ()
{
    int count_triWords = 0, sumWord = 0;
    float nValueWord = 0;
    char vetAlpha[27] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
     'Y', 'Z'};
     char ch;
     FILE *wordFile;

     fopen("WORDS_Euler42.txt", "r");
     if (wordFile == NULL){
        printf ("Erro ao abrir o arquivo. Defina-o como WORDS_Euler42.txt.");
        exit (1);
     }

     while (!feof(wordFile)){
        fscanf (wordFile, "%c", &ch);
        if (compareAlpha (vetAlpha, ch) != 0){
            sumWord = sumWord + (compareAlpha(vetAlpha, ch));
            continue;
        }
        if (compareAlpha (vetAlpha, ch) == 0){
            if (sumWord > 0){
                if (boolTriangleValue (sumWord) == 1);
                    count_triWords++;
                    sumWord = 0;
            }
            continue;
        }

     }
     printf ("%d", count_triWords);
     system("PAUSE");
}

int compareAlpha (char* alphaVect, char chtoCmp)
{
    char strAlpha[2];
    for (int i = 0; i < 26; i++){
        strcpy(strAlpha, alphaVect[i])
        if (strcmp(strAlpha, chtoCmp) == 1)
            return i;
        else
            continue;
    }
    return 0;
}

int boolTriangleValue(float v)
{
    float j = 0;
    j = ((sqrt((8*v) + 1)) - 1) / 2;
    if ((j == (int) v) == 1){
        return 1;
    }
    else
        return 0;
}
