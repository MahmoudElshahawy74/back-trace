
#include<iostream>
#include"Back_Trace.hpp"


// __PRETTY_FUNCTION__ for get function name and function return type

void functionC() {
    Back_Trace bt(__PRETTY_FUNCTION__);
    bt.print_Trace();
}
void functionB() {
    Back_Trace bt(__PRETTY_FUNCTION__);
     functionC();
}
void functionA() {
     Back_Trace bt(__PRETTY_FUNCTION__);
    functionB();
}


int main() {
    Back_Trace bt(__PRETTY_FUNCTION__);
    functionA();

    //Back_Trace::print_Trace();

    return 0;
}