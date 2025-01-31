/*Як відомо основою виконання всіх обчислень на ЕОМ є двійкова система числення. Щоб
привчити дітей до вільного сприйняття двійкових чисел, Борис дав їм завдання перевести з
десяткової системи числення у двійкову велику кількість прикладів. Але, як і завжди, постало
питання «Хто буде перевіряти правильність виконання завдання?»
Допоможіть Борису: напишіть програму, яка робить це за нього.*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bit_representetion(int N)
{
    int res=0, cnt=0;
    while (N!=0)
    {
        res = res + (N & 1)*pow(10, cnt);
        cnt++;
        N = N >> 1;
    }
    return res;
}


int main()
{
    int N;

    while (cin >> N){
        cout << bit_representetion(N) << '\n';
    }
    return 0;
}