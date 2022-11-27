#include "libb.hpp"
#include "liba/liba.hpp"
#include <iostream>

namespace libb
{
    void test(){
        liba::test();
        std::cout << "Test library b" << std::endl;
    }   
}
