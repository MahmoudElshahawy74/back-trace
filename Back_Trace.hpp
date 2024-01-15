
#ifndef BACKTRACE_HPP
#define BACKTRACE_HPP

#include<iostream>
#include<string>
#include<vector>

class Back_Trace {
public:
    Back_Trace(std::string name);
    ~Back_Trace();

   static void print_Trace(); // static method to access static memeber 
    
private:
   std::string name;
   static std::vector<std::string> Back_Trace_list; // static vector to keep the elements stored after each instance
};




#endif