/**
 * @file main.cpp
 * @author Deivid Santos (antoniodeivid@alu.ufc.br)
 * @brief 
 * @version 0.1
 * @date 2022-11-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include "BinaryTree.h"
using namespace std;

int main() {
    BinaryTree tnull;
    BinaryTree t34(34, tnull, tnull);
    BinaryTree t21(21, tnull, tnull);
    BinaryTree t76(76, t34, t21);
    BinaryTree t55(55, tnull, tnull);
    BinaryTree t1(1, t76, t55);

    cout << t1.contains(10) << endl;
    cout << t1.contains(34) << endl;

    t1.print_keys();
}