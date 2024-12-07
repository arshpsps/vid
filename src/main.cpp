#include <chrono>
#include <iostream>
#include <thread>

int main() {
    std::cout << "1";
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "\r5";
    return 0;
}
