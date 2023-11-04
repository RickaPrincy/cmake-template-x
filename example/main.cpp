#include <iostream>
#include <myProject/myProject.hpp>

int main(int argc, char const *argv[]){
    int result = MyProject::add(5,5);
    std::cout << "5 + 5 = " << result << std::endl; 
    
    return 0;
}