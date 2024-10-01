// Aula 04 - Threads

#include<iostream>
#include<thread>
using namespace std;


void Task_1(){ 
    cout << "Hello From Thread A!!" << endl;

}

void Task_2(){ 
    cout << "Hello From Thread B!!" << endl;

}


void Task_3(){ 
    cout << "Hello From Thread C!!" << endl;

}

int main (){
    //Main Task
    cout << "Hello From Main !!" << endl;
    
    thread Child_A(Task_1); //Create Threads !!
    thread Child_B(Task_2);
    thread Child_C(Task_3);

    

    // Return Threads
    Child_A.join();
    Child_B.join();
    Child_C.join();

    return 0;
}