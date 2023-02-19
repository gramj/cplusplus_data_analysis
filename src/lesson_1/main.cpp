#include <iostream> // library include (eg for cout print)

int main(){ // entry point
   // 7/0; // only a warning - result is not used
    for (int i = 0; i<10; i++){
        std::cout << "Jonas" << std::endl;
    } 
    int value = 7/2; //runtime error
    std::cout << "value: " << value << std::endl;
    return 0; // return if nothing else is returned
}

// << std::endl; == line break

// terminal-run(build)task, then .\main.exe

/*
block comment 
*/