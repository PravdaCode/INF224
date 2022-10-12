//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include "image.h"

using namespace std;

int main(int argc, const char* argv[])
{
    std::cout << "Hello brave new world" << std::endl;
    image * m = new image("flag-lenin-stalin", "src/", 10 , 10);
    m->exibiteTxt(cout);
    m->play();
    return 0;
}
