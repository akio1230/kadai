// akiooushin.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdbool.h>
#include "input.h"
#include "judge.h"

int main()
{
    int answer;
    int number;
    bool gameclear = false;

    answer = randnum();
    

    while (!gameclear)
    {
        number = Inputnum();
        Comparison(number, answer);
        
        if (number == answer)
        {
            break;
        }
    }

    return 0;
}
