#include <iostream>
#include <algorithm>
#include "src/BogoSort.h"
#include "src/Tester.h"


int main() {
    // Пример использования BogoSort:
    vector<int> v = {5, 1, 2, 0, 100, -34};
    BogoSort::sort(v.begin(), v.end());
    for(auto u : v) cout << u << ' ';
    cout << "\n\n";

    // Запускаем тесты
    Tester t;
    t.run();
}