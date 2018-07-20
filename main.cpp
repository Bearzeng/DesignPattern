//
// Created by xiemenghui on 2018/7/20.
//
// ���ģʽ���ӣ��ο���https://blog.csdn.net/liang19890820/article/details/66974516
//

#include <iostream>
#include "./AbstractFactoryPattern/FactoryMain.h"
#include "./SingletonPattern/SingletonMain.h"
#include "./AdapterPattern/AdapterMain.h"

int main() {
    std::cout << "*******************" << std::endl;
    std::cout << "** ���ģʽ���� **" << std::endl;
    std::cout << "*******************" << std::endl;

    // ����ģʽ
    SingletonMain();

    // ���󹤳�ģʽ
    FactoryMain();

    // ������ģʽ
    AdapterMain();

    return 0;
}