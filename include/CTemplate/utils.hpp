#ifndef __CTEMPLATE_UTILS__
#define __CTEMPLATE_UTILS__
    
    #include <string>
    #include <initializer_list>

    namespace CTemplate{
        std::string repeat(std::string text,int number);
        void writeLine(int number);
        void writeKeyValue(std::string key, std::string value);
        void writeKeyValue(std::initializer_list<std::pair<std::string, std::string>> keyValue);
        std::string getVersion();
    }
#endif