#include <iostream>
#include <string>
#include <ctime>

int main()
{
    std::string Response[] = {
        "I CAN HEARD YOU!",
        "CONTINUE.",
        "GOOD MORNING",
        "HOW ARE U? ",
    }; 

    srand(time(0));

    std::string userInput = "";
    std::string botResponse = "";

     std::cout << "Hello i am a bot please talk to me \n";

    while(userInput != "bye") {
        std::cout << "(type bye to exit bot) >> \t";
        std::getline(std::cin, userInput);
        int nSelection = rand() % 4;
        botResponse = Response[nSelection];
        std::cout << botResponse << std::endl;
        std::bad_alloc();
    }
    if(userInput == "bye")
     std::cout << "bye" << std::endl;
    return 0;
}