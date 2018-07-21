//
// Created by xiemenghui on 2018/7/20.
//

#include <iostream>
#include "AbstractFactoryPattern/FactoryMain.h"
#include "SingletonPattern/SingletonMain.h"
#include "AdapterPattern/AdapterMain.h"
#include "BridgePattern/BridgeMain.h"

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

    // �Ž�ģʽ
    BridgeMain();

    return 0;
}