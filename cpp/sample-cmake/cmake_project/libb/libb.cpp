#include "libb.h"
#include "../liba/liba.h"
#include <iostream>

namespace libb
{
    void test(){
        liba::test();
        std::cout << "Test library b" << std::endl;
    }   
}
