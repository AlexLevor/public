#include <iostream>

using namespace std;

int main() {
    int in;
    cin >> in;             // ввод числа в c++
    int sum = 0;
    while (in>=1){         // пока пока число имеет целую часть
        sum = sum + in%10; // увеличиваю на остаток от деления на 10
        in = in/10;        // делю на 10 (так как это целочисленное деление то дробная часть отбрасывается)
    }
    std::cout << sum << std::endl; // вывод результата в c++
    return 0;
}