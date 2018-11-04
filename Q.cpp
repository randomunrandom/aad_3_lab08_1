//
// Created by danai on 10/18/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    m = 0;
    a=new int*[n];
    for (int i = 0; i < n; ++i) a[i] = new int[m];
}

Q::Q(int nn, int mm) {
    n=nn;
    m = mm;
    a=new int*[n];
    for (int i = 0; i < n; ++i) a[i] = new int[m];
}

Q::Q(int nn, int mm, int **aa) {
    n=nn;
    m = mm;
    a=new int*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
        for (int j = 0; j < m; ++j) a[i][j] = aa[i][j];
    }
}

void Q::user_input() {
    cout << "введите N : ";
    cin >> n;
    while(n < 1) {
        cout << "введите положительное число : ";
        cin >> n;
    }
    cout << "введите M : ";
    cin >> m;
    while(m < 1) {
        cout << "введите положительное число : ";
        cin >> m;
    }
    a = new int*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
        for (int j = 0; j < m; ++j) {
            cout << "введите [" << i << ", " << j << "] элемент: ";
            cin >> a[i][j];
        }
    }
}

int Q::fun(int *r) {
    int max = -32000, tmp_max, n_max = 0;
    for (int i = 0; i < n; ++i) {
        tmp_max = 0;
        for (int j = 0; j < m; ++j) {
            tmp_max += a[i][j];
        }
        if (tmp_max >= max) {
            max = tmp_max;
            n_max = i;
        }
    }
    *r = max;
    return n_max+1;
}

void Q::print() {
    cout << "массив размера " << n << " * " << m << ": " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cout << a[i][j] << " ";
        cout << endl;
    }
}