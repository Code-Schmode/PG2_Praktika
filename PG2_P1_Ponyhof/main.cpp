#include <iostream>

unsigned ponyHufe(unsigned numPonys){
    return (numPonys ? 4+ponyHufe(numPonys-1) : 0);
}

int main()
{
    std::cout << ponyHufe(5);
    return 0;
}
