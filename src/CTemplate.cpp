#include <CTemplate/CTemplateConfig.hpp>
#include <CTemplate/optionHandler.hpp>

using namespace CTemplate;

int main(int argc, char const *argv[]){
    switch(argc) {
        case 2:
            optionHandler(argv[1]);
        default:
            break;
    }
    return 0;
}
