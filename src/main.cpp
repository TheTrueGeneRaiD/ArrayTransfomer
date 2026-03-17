#include <iostream>
#include <array>

const int x = 9, y = 10;

void print_array(std::array<int, x> array){
    int i = 0;
    for(const auto& x : array) {
        std::cout << i << " : " << x << std::endl;
        i++;
    }
}

void print2d_array(std::array<std::array<int, y>, x> array){
    int i = 0;
    for(auto& row : array) {
        for(auto& col : row) {
            std::cout << col;
        }
        std::cout << std::endl;
    }
}

int main() {

    std::array<int, x> onedarray = {};

    std::array<std::array<int, y>, x> twodarray = {};

    int j = x-1;

    for(int i = 0; i < x; i++) {
        onedarray[i] = i;
    }

    for(auto& row : twodarray) {
        for(auto& col : row) {
            col = 1;
        }
    }

    print_array(onedarray);

    std::cout << std::endl;

    // i is the start of the matrix set to zero
    // j is the end of the matrix set to x;
    j = x-1;

    // This is a swap operation.
    int tmp = 0;

    for(int i = 0; i < x/2; i++) {
        tmp = onedarray[i];
        onedarray[i] = onedarray[j];
        onedarray[j] = tmp;
        j--;
    }


    print_array(onedarray);

    std::cout << std::endl;

    print2d_array(twodarray);


    return 0;
}