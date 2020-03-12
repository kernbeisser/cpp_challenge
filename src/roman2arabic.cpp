#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

std::stringstream print_result(std::string roman, int arabic)
{
    std::stringstream out {};
    out << std::setw(13) << std::left << roman << " = "
        << std::setw(4) << std::right << arabic;

    return out;
}

int main()
{

    std::string roman;
    std::ifstream in("src/roman.txt");
    if(!in)
    {
        std::cerr << "Ui..." << std::endl;
        exit(1);
    }

    int line_count = 0;
    while(!in.eof())
    {
        int arabic = 0;
        size_t i= 0;
        getline(in, roman);
        line_count++;

        if(roman.size() == 0)
            break;

        while(i < roman.size())
        {
            switch(roman.at(i))
            {
                case 'I':
                    if(static_cast<size_t>(roman[i+1]) != std::string::npos && roman[i+1] == 'V')
                    {
                        arabic += 4;
                        i += 2;
                        break;
                    }
                    if(static_cast<size_t>(roman[i+1]) != std::string::npos && roman[i+1] == 'X')
                    {
                        arabic += 9;
                        i += 2;
                        break;
                    }
                    else
                    {
                        arabic += 1;
                        i++;
                        break;
                    }
                    break;
                case 'V':
                    arabic += 5;
                    i++;
                    break;
                case 'X':
                    if(static_cast<size_t>(roman[i+1]) != std::string::npos  && roman[i+1] == 'C')
                    {
                        arabic += 90;
                        i += 2;
                        break;
                    }
                    if(static_cast<size_t>(roman[i+1]) != std::string::npos  && roman[i+1] == 'L')
                    {
                        arabic += 40;
                        i += 2;
                        break;
                    }
                    else
                    {
                        arabic += 10;
                        i++;
                        break;
                    }
                    break;
                case 'L':
                    arabic += 50;
                    i++;
                    break;
                case 'C':
                    if(static_cast<size_t>(roman[i+1]) != std::string::npos && roman[i+1] == 'D')
                    {
                        arabic += 400;
                        i += 2;
                        break;
                    }
                    if(static_cast<size_t>(roman[i+1]) != std::string::npos && roman[i+1] == 'M')
                    {
                        arabic += 900;
                        i += 2;
                        break;
                    }
                    else
                    {
                        arabic += 100;
                        i++;
                        break;
                    }
                    break;
                case 'D':
                    arabic += 500;
                    i++;
                    break;
                case 'M':
                    arabic += 1000;
                    i++;
                    break;
            }
        }

        std::cout << print_result(roman, arabic).str() << std::endl;
    }

    in.close();

    return EXIT_SUCCESS;
}
