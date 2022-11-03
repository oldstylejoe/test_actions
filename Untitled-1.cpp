#include <iostream>

int main() {
    std::cout << "hello world\n" << std::flush;
    for(int i = 0; i< 99; ++i){
    std::cout <<"blatant bad formatting";
    }
    return 0;
}