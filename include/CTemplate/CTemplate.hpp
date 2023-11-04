#ifndef __CTEMPLATE__
#define __CTEMPLATE__
    
    #include <iostream>
    #include <string>
    #include <fstream>

    namespace CTemplate{
        
        class File{
            private: 
                std::string template_path, path;
            public:
                File(std::string, std::string);
                ~File();
        };
    }
#endif
