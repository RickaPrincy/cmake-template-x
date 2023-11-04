#include <iostream>
#include <myProject/myProject.hpp>
#include <myProject/myProjectConfig.hpp>

int main(int argc, char const *argv[]){

    std::cout << "We use myProject version : " << myProject_VERSION_MAJOR << "." << myProject_VERSION_MINOR << std::endl;

    int result = MyProject::add(5,5);
    std::cout << "5 + 5 = " << result << std::endl; 
    
    return 0;
}