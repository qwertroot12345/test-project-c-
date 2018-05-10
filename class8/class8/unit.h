#pragma once
#include<stdio.h>
#define PI 3.1415926535
//全局引用函数

//定义累加
int add(int n);

//A=1+1/(1+2)+1/(1+2+3)+1/(1+2+3+4)+…….+1/(1+2+3+…+n)式函数
float addfun(int n);

//判断质数
void is_sushu(int n);

//阶乘运算
int jiechen(int n);

//幂次运算
float mi(float a, int n);

//求圆面积
float sc(float r);

//S＝1＋x＋x2/2！＋x3/3！＋…＋xn/n!式函数
double fun(double x, int n);

//三个数比大小
int mint(int a, int b, int c);

//复制字符串
void strcopy(char str0[100], char str1[100]);


