#include <iostream>
#include <chrono>

int main()
{
    std::cout << "Start typing the following sentence: 'I love code'\n";
    auto start = std::chrono::steady_clock::now(); // time the start

    std::string sentence; // String, typed from the keyboard
    std::cin >> sentence; //enter

    auto end = std::chrono::steady_clock::now(); // check end time

    if (sentence == "I" || sentence == "love" || sentence == "code") { // If the word has already been shortened, shift start & end.
        start = end;
    }

    auto elapsed_ms = std::chrono::duration_cast<std::chrono::milliseconds>(end - start); // Calculate how many ms.

    std::cout << "You made it: " << elapsed_ms.count() << " ms\n";

    return 0;
}