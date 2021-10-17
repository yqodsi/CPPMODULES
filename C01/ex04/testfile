#include <iostream>
#include <string>
#include <fstream>

#define waza() std::cout << "wazzzaaaaaa\t" << __LINE__ << "\t" << __FUNCTION__ << std::endl;

int main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        std::ifstream inputfile(argv[1]);
        std::string pattern(argv[2]);
        std::string replacement(argv[3]);
        std::string buffer;
        size_t found;
        if (!inputfile.is_open())
        {
            std::cerr << "Error: Couldn't open file" << std::endl;
            return (1);
        }

        std::ofstream outputfile( std::string( argv[1]) + ".replace");
        if ( !outputfile.is_open())
        {
            inputfile.close();
            std::cerr << "Error: Couldn't open file" << std::endl;
            return (1);
        }
        while (std::getline(inputfile, buffer))
        {
            found = 0;
            while ((found = buffer.find(pattern, found)) != std::string::npos)
            {
                buffer.erase(found, pattern.size());
                buffer.insert(found, replacement);
                found += replacement.size();
            }
            outputfile << buffer << std::endl;
        }
        outputfile.close();
        inputfile.close();
    }
    return 0;
}