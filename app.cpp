#include <iostream>

int main (int argc, char *argv[])
{
    int i = 69;
    std::cout << "hello sonarqube!" << i << std::endl;
    switch (i) {
        case 0:
        std::cout << "0";
        break;

        case 1:
        std::cout << "1";
        break;
    }
    
    return 0;
}
