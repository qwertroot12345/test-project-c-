#pragma once
#include<stdio.h>
#define PI 3.1415926535
//ȫ�����ú���

//�����ۼ�
int add(int n);

//A=1+1/(1+2)+1/(1+2+3)+1/(1+2+3+4)+����.+1/(1+2+3+��+n)ʽ����
float addfun(int n);

//�ж�����
void is_sushu(int n);

//�׳�����
int jiechen(int n);

//�ݴ�����
float mi(float a, int n);

//��Բ���
float sc(float r);

//S��1��x��x2/2����x3/3��������xn/n!ʽ����
double fun(double x, int n);

//�������ȴ�С
int mint(int a, int b, int c);

//�����ַ���
void strcopy(char str0[100], char str1[100]);


