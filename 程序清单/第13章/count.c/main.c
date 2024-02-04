/*如果你是Macintosh用户，最简单的方法是使用Terminal在命令行形式中编译并运行该程序，如命令行中输入
"/Users/xuzhengkai/Desktop/徐钲开的学习之路/C Primer Plus/程序清单/第13章/count.c/cmake-build-debug/count_c" "/Users/xuzhengkai/Desktop/徐钲开的学习之路/C Primer Plus/程序清单/第13章/count.c/study.txt"*/

/* count.c -- 使用标准 I/O */
#include <stdio.h>
#include <stdlib.h> // 提供exit()的原型

int main(int argc, char* argv[]) {
    int ch; // 读取文件时，存储每个字符的地方
    FILE* fp; // “文件指针”
    unsigned long count = 0;
    if (argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout); // 与putchar(ch);相同
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);

    return 0;
}
