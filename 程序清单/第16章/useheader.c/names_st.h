//
// Created by 徐钲开 on 2024/2/22.
//

#ifndef NAME_ST_C_NAMES_ST_H
#define NAME_ST_C_NAMES_ST_H
// names_st.h -- names_st 结构的头文件
// 常量
#include <string.h>
#define SLEN 32

// 结构声明
struct names_st {
    char first[SLEN];
    char last[SLEN];
};

// 类型定义
typedef struct names_st names;

// 函数原型
void get_names(names*);
void show_names(const names*);
char* s_gets(char* st, int n);

#endif //NAME_ST_C_NAMES_ST_H
