#include <iostream>
#include <myProject/myProject.hpp>

int main(int argc, char const *argv[]){
    std::cout << "5 + 5  = " << MyProject::add(5,5) << std::endl;
    std::cout << "7 - 5  = " << MyProject::subtract(7,5) << std::endl;
    return 0;
}
