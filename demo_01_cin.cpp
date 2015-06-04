/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file demo_01_cin.cpp
 * @author wanggang11(com@baidu.com)
 * @date 2015/06/04 19:20:01
 * @brief 
 * 两次读取，如果第一次读取有个空格，第二次读取会直接从队列中读取值？？
 * 尼玛这什么JB情况 
 * QA:以空格来分割输入队列
 **/
#include<iostream>
int main()
{
    using namespace std;
    const int Size = 15;
    char str1[Size], str2[Size];
    cin >> str1;
    cin >> str2;
    cout << str1 << "," << str2;
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
