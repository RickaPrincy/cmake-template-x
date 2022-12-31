#include <CTemplate/optionHandler.hpp>
#include <CTemplate/utils.hpp>
#include <TColor/TColor.hpp>
#include <iostream>

using namespace CTemplate;

void CTemplate::optionHandler(const char *optionChar){
    const std::string option = optionChar;
   
    if(option == "--version" || option == "-v"){
        CTemplate::writeVersion();
    }else{
        CTemplate::writeHelp();
    }
}