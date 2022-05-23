#ifndef BOGOSORT_BOGOSORT_H
#define BOGOSORT_BOGOSORT_H

#include <vector>
#include <iterator>
#include <random>
#include <chrono>

using namespace std;

inline mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

/**
 *  BogoSort (от амер. комп. жарг. bogus — неработоспособный, нефункциональный, бесполезный) —
 *      самый эффективный из известных алгоритм сортировки, используемый только в образовательных целях и
 *      противопоставляемый другим, более реалистичным алгоритмам.
 *
 *  Требует памяти O(n)
 *  Среднее время работы алгоритма O(n! * n)
 */

struct BogoSort {
    public:
        /**
         * Основная функция, перемешивающая элементы и проверяющая на отсортированность
         *
         * @param begin - итератор на начало сортируемого отрезка
         * @param end  - итератор на конец сортиремого отрезка (не включительно)
         */
        template<typename Iter>
        static void sort(Iter begin, Iter end) {
            while(check(begin, end) == false) {
                shuffle(begin, end);
            }
        }

    private:
        /**
         * Функция выполняющая перемешивание элементов на сортирумом отрезке
         * Сложность - O(n)
         *
         * @param begin - итератор на начало сортируемого отрезка
         * @param end - - итератор на конец сортиремого отрезка (не включительно)
         */
        template<typename Iter>
        static void shuffle(Iter begin, Iter end) {
            int size = end - begin;
            for(Iter it = begin; it < end; it++) {
                Iter it2 = begin + (rnd() % size);
                swap(*it, *it2);
            }
        }

        /**
         * Функция выполняющая проверку на отсортированность в возрастающем порядке
         * Сложность - O(n)
         *
         * @param begin - итератор на начало сортируемого отрезка
         * @param end - - итератор на конец сортиремого отрезка (не включительно)
         */
        template<typename Iter>
        static bool check(Iter begin, Iter end) {
            Iter last = begin;
            for(Iter i = begin + 1; i != end; i++) {
                if(*last > *i) return false;
                last = i;
            }
            return true;
        }
};


#endif //BOGOSORT_BOGOSORT_H
