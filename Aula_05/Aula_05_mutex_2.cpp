// Tutorial 3: Advanced Thread Synchronization
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
std::condition_variable cv;
bool ready = false;

void print_hello_1() {
    std::unique_lock<std::mutex> lock(mtx);
    std::cout << "Hello from thread!" << std::endl;
    lock.unlock();
}


void print_hello_2() {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [] { return ready; });
    std::cout << "Hello from thread!" << std::endl;
}

int main() {
    std::thread t(print_hello_2);
    {
        std::unique_lock<std::mutex> lock(mtx);
        ready = true;
    }
    cv.notify_one();
    t.join();
    return 0;
}