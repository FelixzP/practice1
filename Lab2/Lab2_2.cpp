#include <iostream>
#include <unistd.h>
// using namespace std;

int main(){
    std::string name = "Peeranat Athirattankun";
    for (int i = 0; i< name.length();i++)
    {
        std::cout << "\r";
        for (int j =0; j < i ;j++)
        {
            std::cout << " ";
        }
        std::cout << name[i];
        sleep(1);
    }
    std::cout << "\r" << name << std::endl;
    return 0;
}