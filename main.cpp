//
// Created by xiemenghui on 2018/7/20.
//

#include <iostream>
#include "SingletonPattern/SingletonMain.h"
#include "AbstractFactoryPattern/FactoryMain.h"
#include "AdapterPattern/AdapterMain.h"
#include "BridgePattern/BridgeMain.h"
#include "ObserverPattern/ObserverMain.h"

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

    // �۲���ģʽ
    ObserverMain();

    return 0;
}