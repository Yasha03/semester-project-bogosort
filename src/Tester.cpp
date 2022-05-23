//
// Created by user on 23.05.2022.
//

#include <vector>
#include <iostream>
#include "Tester.h"
#include "BogoSort.h"
using namespace std;

void Tester::run() {
    for(int i = 2; i <= 20; i++) {
        vector<int> v(i);
        for(int j = 0; j < i; j++) {
            v[j] = rnd() % (int)1e9;
        }

        int start_time = clock();
        BogoSort::sort(v.begin(), v.end());
        int end_time = clock();

        double result = 1.0 * (end_time - start_time) / CLOCKS_PER_SEC;
        cout << "Number of elements in vector: " << i << ", Time: " << result << " sec" << '\n';
    }
}

