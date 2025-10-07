#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int n;
    std::cin >> n;

    double *arr = new double[n];

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    srand(time(0));

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        double temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    std::cout << static_cast<int>(sum) << std::endl;

    delete[] arr;

    return 0;
}