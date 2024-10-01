// Tutorial 1: Introduction to C++ Multithreading
#include <iostream>
#include <thread>

using namespace std;

void print_hello1() {
    std::cout << "Hello from thread 1!" << std::endl;
}

void print_hello2() {
    std::cout << "Hello from thread 2!" << std::endl;
}

int main() {
    std::thread thread_01(print_hello1);
    
    thread_01.join();

    std::thread thread_02(print_hello2);

    thread_02.join();
    return 0;
}