#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;

void print_hello(int ID) {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Hello from thread!" << ID << std::endl;
    lock.unlock();
}

void get_A(){
    std::cout << "Hello from thread give Number A!" << std::endl;
}
void get_B(){
    std::cout << "Hello from thread give Number B!" << std::endl;
}
void print_add(){
    std::cout << "Hello from thread give add = A + B!" << std::endl;
}



int main() {
    std::thread t1(get_A);
    std::thread t2(get_B);
    std::thread t3(print_add);

    std::thread t4(print_hello, 1);
    std::thread t5(print_hello, 2);
    std::thread t6(print_hello, 3);

    t1.join();
    t2.join();
    t3.join();

    t4.join();
    t5.join();
    t6.join();

    return 0;
}