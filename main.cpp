/*
 * created by Danil Kireev, PFUR NFIbd-01-17, 17.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"


/*
 * № 17
 * Дана матрица размера N*M.
 * Найти строку с наибольшей суммой элементов и
 * вывести данную сумму и соответствующую строку.
 */

int main() {
    cout << "нахождение строки с наибольшей суммой элементов и вывод суммы" << endl;
    Q obj;
    int res, n_res;
    obj.user_input();
    obj.print();
    n_res = obj.fun(&res);
    cout << "строка с наибольшей суммой элементов: " << n_res << ", сумма = " << res << endl;
    return 0;
}