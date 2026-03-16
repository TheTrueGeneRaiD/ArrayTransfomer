#ifndef ARRAYTRANSFORMER
#define ARRAYTRANSFORMER

#include <iostream>
#include <array>

class MatrixTransformer {
    private:
        // Variables
        int x;
        int y;

        std::array<> *matrix;

        // Functions
        void checkIfRowsOrColsAreLarger();
        void setMatrix

    public:
        // Setters
        void setX(int x);
        void setY(int y);
        void setArray()

        // Getters
        int getX();
        int getY();

        // Functions
        void rotateLeft();
        void rotateRight();
        void mirrorHorizontal();
        void mirrorVertical();
        
};

#endif //!ARRAYTRANSFORMER