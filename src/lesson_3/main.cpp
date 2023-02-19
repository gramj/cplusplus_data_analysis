#include <iostream> // library include (eg for cout print)
#include <string> //string library


int addNumbers(int first_number, int second_number) //left = return datatype
{ 
    int sum = first_number + second_number;
    return sum;
}

int multiplyNumbers(int first_number, int second_number)
{
    int prod = first_number * second_number;
    return prod;
}


int main(int argc, char **argv)
{
    int first_number {3};
    int second_number {7};
    int sum_1 = first_number + second_number;
    int prod_1 = first_number * second_number;
    int sum_2 = addNumbers(first_number,second_number);
    int prod_2 = multiplyNumbers(first_number,second_number);
    int sum_3 = addNumbers(34,7);
    int prod_3 = multiplyNumbers(34,7); 
    
    std::cout << "sum 1 = " << sum_1 << std::endl; //<< is sign in which direction the data flows
    std::cout << "prod 1 = " << prod_1 << std::endl;
    std::cout << "sum 2 = " << sum_2 << ", prod 2 = " << prod_2 << std::endl;
    std::cout << "sum 3 = " << sum_3 << ", prod 3 = " << prod_3 << std::endl;
    std::cout << "sum 4 = " << addNumbers(23,8) << ", prod 4 = " << multiplyNumbers(23,8) << std::endl;
    /////////
    int age {27};
    std::string full_name {"jog"};

    // std::cout << "type your full name : " << std::endl;
    // std::getline(std::cin,full_name); //gets data with spaces in between (std::getline is wrapper function to achieve this)

    // std::cout << "type your age : " << std::endl;
    // std::cin >> age; //data from terminal in direction of program to variable
    //1 liner for both enters
    std::cout << "type your full name and age : " << std::endl;
    std::cin >> full_name >> age;
    std::cout << "Hey " << full_name << "! your are " << age << " years old." << std::endl;
    return 0;
}

/*
std::cout == print (standard message)
std::cin == read from terminal
std::cerr == print errors (error message)
std::clgo == print logs (log message)
*/

// compiles code is transfered to a binary executable for the computer -> good readable for the cpu