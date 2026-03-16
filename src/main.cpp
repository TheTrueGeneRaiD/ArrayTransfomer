#include <iostream>

int main() {

    int x = 10, y = 0;

    int array[x] = {};

    for(int i = 0; i < x; i++) {
        array[i] = 0;
    }


    for(int i = 0; i < x; i++) {
        std::cout << i << " : " << array[i] << std::endl;
    }

    return 0;
}