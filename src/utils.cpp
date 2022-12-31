#include <CTemplate/utils.hpp>
#include <TColor/TColor.hpp>
#include <CTemplate/CTemplateConfig.hpp>

std::string CTemplate::repeat(std::string text, int number){
    return number < 1 ? text : text + CTemplate::repeat(text, --number);
}

void CTemplate::writeLine(int number){
    TColor::write_endl(TColor::BLUE,"\n" + CTemplate::repeat("*", number));
}

void CTemplate::writeKeyValue(std::string key, std::string value){
    TColor::write(TColor::BLUE,"\t" + key);
    TColor::write_endl(TColor::YELLOW, ": " + value);
}

void CTemplate::writeKeyValue(std::initializer_list<std::pair<std::string, std::string>> keyValue){
    for(const auto pair : keyValue){
        CTemplate::writeKeyValue(pair.first, pair.second);
    }
}

std::string CTemplate::getVersion(){
    return "v" + std::to_string(CTemplate_VERSION_MAJOR) + 
        "." +  std::to_string(CTemplate_VERSION_MINOR) + 
        "." + std::to_string(CTemplate_VERSION_PATCH);
}

void CTemplate::writeTitle(std::string title){
    CTemplate::writeLine();
    const int row = ( 70 - title.length() ) / 2 - 1;
    std::cout << CTemplate::repeat("*", row);
    TColor::write(TColor::YELLOW, " " + title + " " );
    TColor::write_endl(TColor::BLUE, CTemplate::repeat("*", row));
}

void CTemplate::writeHelp(){
    CTemplate::writeTitle("CTemplate@" + CTemplate::getVersion()  + " options list");
}

void CTemplate::writeVersion(){
    CTemplate::writeLine();
    CTemplate::writeKeyValue({
        {"Name", "CTemplate"},
        {"Version", CTemplate::getVersion()},
        {"Github", "https://github.com/RickaPrincy/cmake-template-x.git"},
        {"Author", "RickaPrincy <https://github.com/RickaPrincy>"}
    });
    CTemplate::writeLine();
}