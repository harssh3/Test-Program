#include <stdio.h>

int input(void);
int count(void);
int sum(void);
int average(int);

int array[100];
int number;

int main(void)
{
    int sum_local,average_local;

    input(); //数値の入力
    sum_local = sum(); //和の計算
    average_local = average(sum_local); //平均値の計算

    printf("Average = %d",average_local);

    return 0;
}

int input(void)
{
    int i = 0;
    int sum_sub = 0;

    //-1が入力されるまで代入
    while(1){
        printf("(sum = %d) / Point = ",sum_sub,i);
        scanf("%d",&array[i]);
        if(array[i] == -1) break; //-1でループ終了
        sum_sub += array[i];
        i++;
    }

    count(); //有効要素数カウント

    return 0;
}

int sum(void)
{
    int j,sum;
    sum = 0;

    //和の計算
    for(j = 0;j < number;j++){
        sum += array[j];
    }

    return sum;
}

int average(int sum)
{
    int average;
    average = sum / number;

    return average;
}

int count(void)
{
    int k=0;
    while(array[k] != -1){
        k++;
    }

    number = k;

    return 0;
}