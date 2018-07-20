//
// Created by xiemenghui on 2018/7/20.
//

#ifndef DESIGNPATTERN_SINGLETONMAIN_H
#define DESIGNPATTERN_SINGLETONMAIN_H

#include "Singleton.h"

void SingletonMain()
{
    std::cout << "*******************" << std::endl;
    std::cout << "** ����ģʽ **" << std::endl;
    std::cout << "*******************" << std::endl;

    Singleton::GetInstance().DoSomething();
}

#endif //DESIGNPATTERN_SINGLETONMAIN_H
