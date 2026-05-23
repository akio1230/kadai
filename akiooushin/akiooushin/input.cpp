#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Inputnum()
{
    printf("0`9‚ÌD‚«‚È”š‚ğ‚¢‚ê‚ÄEnter‚ğ‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");
    int inputNum;
    scanf_s("%d", &inputNum);
    return inputNum;
}

int randnum()
{
    srand((unsigned int)time(NULL));
    int randNum = rand() % 10;
    printf("ƒ‰ƒ“ƒ_ƒ€”š %d ‚Å‚·\n", randNum);
    return randNum;
}

