#include <CTemplate/optionHandler.hpp>
#include <CTemplate/utils.hpp>
#include <TColor/TColor.hpp>
#include <iostream>

using namespace CTemplate;

void CTemplate::optionHandler(const char *optionChar){
    const std::string option = optionChar;
   
    if(option == "--version" || option == "-v"){
        CTemplate::writeLine(70);
        CTemplate::writeKeyValue({
            {"Name", "CTemplate"},
            {"Version", CTemplate::getVersion()},
            {"Github", "https://github.com/RickaPrincy/cmake-template-x.git"},
            {"Author", "RickaPrincy <https://github.com/RickaPrincy>"}
        });
        CTemplate::writeLine(70);
    }
}