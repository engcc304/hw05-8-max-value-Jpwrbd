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
    int num[3];
    int max = 0;
    printf("Test case:\n\t");
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    for (int  i= 1; i < 3; ++i)
    {
        if (num[i] > num[max])
        {
            max = i;
        }
    }
    printf("Output:\n");
    printf("\t1st Number = %d\n", num[(max + 1) % 3]);
    printf("\t2nd Number = %d\n", num[(max + 2) % 3]);
    printf("\t3rd Number = %d\n", num[max]);
    printf("\tThe %d%s Number is the greatest among three\n", max + 1, (max == 0) ? "st" : (max == 1) ? "nd" : "rd");
    if (max == 0) {
        printf("The 1st Number is the greatest among three\n");
    } else if (max == 1) {
        printf("The 2nd Number is the greatest among three\n");
    } else {
        printf("The 3rd Number is the greatest among three\n");
    }

    return 0;
}
