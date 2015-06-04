/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file demo_01_charArrStr.cpp
 * @author wanggang11(com@baidu.com)
 * @date 2015/06/04 19:08:59
 * @brief 
 * 字符串中不能有\0空字符，否则会被认为是string类型的结尾！！！！
 * 尼玛~！！！这是什么情况？？？
 *  
 **/
#include<iostream>
#include<cstring>
int main() {
    using namespace std;
    const int Size = 15;
    char name1[Size] = "Hello,boy!";
    char name2[Size];
    cin >> name2;
    cout << "name2:" << name2 << ",strlen=" << strlen(name2) << ",sizeof=" << sizeof(name2);
    name1[5] = '\0';
    cout << "name1:" << name1 << ",strlen=" << strlen(name1) << ",sizeof=" << sizeof(name1);
}





















/* vim: set expandtab ts=4 sw=4 sts=4 tw=100: */
