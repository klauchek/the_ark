#include <iostream>
#include "TheArk.h"
using std::cin;
using std::cout;

int main() {
    TheArk::get_instance()->init(&cin, &cout);

    TheArk::get_instance()->flight();

    TheArk::get_instance()->deleteArk();

    return 0;
}
