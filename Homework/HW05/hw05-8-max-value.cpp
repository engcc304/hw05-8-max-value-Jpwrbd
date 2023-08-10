/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/

#include <stdio.h>
int main()
{
    int a1 = 0, a2 = 0, a3 = 0;
    printf("Input[1]: ");
    scanf("%d", &a1);
    printf("Input[2]: ");
    scanf("%d", &a2);
    printf("Input[3]: ");
    scanf("%d", &a3);
    printf("Output: ");
    if (a1 > a2 && a1 > a3)
    {
        printf("1st Number = %d ", a1);
        if (a2 > a3)
            printf("1st Number = %d %d ", a2, a3);
        else
            printf("1st Number = %d %d ", a2, a3);
    }
    else if (a2 > a1 && a2 > a3)
    {
        printf("%d ", a2);
        if (a1 > a3)
            printf("%d %d ", a1, a3);
        else
            printf("%d %d ", a3, a1);
    }
    return 0;
}