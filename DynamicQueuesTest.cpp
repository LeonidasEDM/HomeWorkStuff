#include <iostream>
#include "DynamicQueue.h"

int main()
{
    // test DynamicQueue
    DynamicQueue queue = DynamicQueue();

    /////////////////////////////////////
    std::cout << "Test Case 1:\n";

    std::cout << "Read Key a. ";
    queue.read('a');
    queue.print();

    std::cout << "Read Key b. ";
    queue.read('b');
    queue.print();

    std::cout << "Read Key w. ";
    queue.read('w');
    queue.print();

    std::cout << "Read Key b. ";
    queue.read('b');
    queue.print();

    std::cout << "Read Key z. ";
    queue.read('z');
    queue.print();
    //Need to Check when queue is full

    //Need To Clear Queue for Next case

    std::cout << "\nTest Case 2:\n";
    std::cout << "Read Key b. ";
    queue.read('b');
    queue.print();

    std::cout << "Read Key c. ";
    queue.read('c');
    queue.print();

    std::cout << "Read Key t. ";
    queue.read('t');
    queue.print();

    std::cout << "Read Key s. ";
    queue.read('s');
    queue.print();

    //Need to Check when queue is full

    ///////////////////////////////////
    /*
    queue.insert(5);
    std::cout << "Inserted 5 into queue" << std::endl;
    queue.insert(7);
    std::cout << "Inserted 7 into queue" << std::endl;
    queue.remove();
    std::cout << "Removed 5 from queue" << std::endl;
    queue.remove();
    std::cout << "Removed 7 from queue" << std::endl;
    // code should exit here due to underflow
    std::cout << "Attempting to remove from an empty queue..." << std::endl;
    queue.remove();
     */
}

