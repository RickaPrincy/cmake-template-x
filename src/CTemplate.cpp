#include <CTemplate/optionHandler.hpp>
#include <CTemplate/utils.hpp>
#include <iostream>

using namespace CTemplate;

int main(int argc, char const *argv[]){
    switch(argc) {
        case 2:
            optionHandler(argv[1]);
            break;
        default:
            writeHelp();
            break;
    }
    return 0;
}
