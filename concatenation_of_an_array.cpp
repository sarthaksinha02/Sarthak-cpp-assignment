#include <iostream>
#include <string>

int main() {
    std::string array[] = {"Hello, ", "world!", " How are you?"};

    std::string concatenatedString;

    for (int i = 0; i < 3; i++) {
        concatenatedString += array[i];
    }

    std::cout << concatenatedString << std::endl;

return 0;
}