//
// Created by user on 23.05.2022.
//

#ifndef BOGOSORT_TESTER_H
#define BOGOSORT_TESTER_H

#include <random>
#include <chrono>
#include "BogoSort.h"
using namespace std;

/**
 *  Тестировщик
 */
struct Tester {
    public:
        /**
         *  Функция, которая создает массив произвольных элементов, засекает время, сортирует с помощью
         *      BogoSort и выводит время работы в консоль
         */
        static void run();
};


#endif //BOGOSORT_TESTER_H
