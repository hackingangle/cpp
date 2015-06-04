/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file demo_01_charArr.cpp
 * @author wanggang11(com@baidu.com)
 * @date 2015/06/04 18:30:32
 * @brief 
 *  
 **/
#include<iostream>
using namespace std;
int main() 
{
    char str1[3] = {'1','2','x'};
    char str2[3] = {'1','2','\0'};
    cout << sizeof(str1) << ',' << sizeof(str2) << endl;
    cout << (str1) << ',' << (str2) << endl;
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
