#include "Back_Trace.hpp"
#include <iostream>
#include <string>

std::vector<std::string> Back_Trace::Back_Trace_list; // initialize static member 

Back_Trace::Back_Trace(std::string name):name(name){
    std::cout<<"Enter :"<< name <<std::endl;
    Back_Trace_list.push_back(name);
}

Back_Trace::~Back_Trace(){
    std::cout<<"Exit :"<< name <<std::endl;
}

void Back_Trace::print_Trace(){
    for (auto i = 0; i < Back_Trace_list.size(); ++i) {
        std::cout <<i<<" ---> " <<Back_Trace_list[i] <<std::endl;
    }
}





