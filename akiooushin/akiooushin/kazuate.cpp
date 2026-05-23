// akiooushin.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include "input.h"
#include "judge.h"

int main()
{
    int answer;
    int number;

    answer = randnum();
    number = Inputnum();

    while (answer != number)
    {
        number = Inputnum();
        Comparison(answer, number);
    }

    return 0;
}
