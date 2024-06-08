#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char a[] = "1";
char b[] = "2";
char c[] = "3";
char d[] = "4";
char e[] = "5";
char f[] = "6";
char g[] = "7";
char h[] = "8";
char i[] = "9";

char field[];

char* fields[] = {a, b, c, d, e, f, g, h, i};

char selection[];



void main() { 
    while (1) {
        printf("[%s][%s][%s]\n",a, b, c);
        printf("[%s][%s][%s]\n",d, e, f);
        printf("[%s][%s][%s]\n",g, h, i);
        printf("x's turn, choose a field: ");
        scanf("%s", &field);

        for (int j = 0; j < 9; j++) {
            if (strcmp(field, fields[j]) == 0) {
                selection[0] = 'a' + j;

                strcpy(fields[j], "x");
                break;
            }
        }

        printf("[%s][%s][%s]\n",a, b, c);
        printf("[%s][%s][%s]\n",d, e, f);
        printf("[%s][%s][%s]\n",g, h, i);
        printf("o's turn, choose a field: ");
        scanf("%s", &field);

        for (int j = 0; j < 9; j++) {
            if (strcmp(field, fields[j]) == 0) {
                selection[0] = 'a' + j;

                strcpy(fields[j], "o");
                break;
            }
        }
    }
}
