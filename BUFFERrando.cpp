#include <iostream>
#include <string>

const char* read(const std::string& input, size_t& len){
    size_t start = input.find("**");
    if (start == std::string::npos) return nullptr;

    start += 2;
    size_t end = input.find("**", start);
    if (end == std::string::npos) return nullptr;

    len = end - start;
    return input.c_str() + start;  // pointer into original string
}

int main(){
    std::string uartBuff;

    while (1){
        std::cin >> uartBuff;

        size_t len = 0;
        const char* buff = read(uartBuff, len);

        if (buff){
            std::cout << "Extracted: ";
            std::cout.write(buff, len);  // print using pointer + length
            std::cout << std::endl;
        }
    }
}
