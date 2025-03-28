#include <iostream>
#include <thread> // For sleep
#include <chrono> // For std::chrono::seconds
using namespace std;

void Intro() {
    cout << "\n--Introduction:--\n";
    this_thread::sleep_for(chrono::seconds(1)); // Pause for 1 second

    cout << "C++ is a widely-used programming language, especially in game development and creating computer programs.\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nIt was developed as an extension of C, sharing similar syntax.\n\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nC++ is a cross-platform language designed for high-performance applications. Created by Bjarne Stroustrup,\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nit provides control over system resources and memory. It has evolved through updates like C++11, C++14, C++17, C++20,\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nand C++23. C++ is object-oriented, portable, and allows code reuse, making it cost-effective and versatile.\n\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nTo begin with C++, you need a text editor (e.g., Notepad) and a compiler (e.g., GCC).\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nThe tutorial recommends using an IDE like Code::Blocks, Eclipse, or Visual Studio for editing and debugging.\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nIt guides users to write and execute their first C++ program, \"Hello World,\" using Code::Blocks.\n\n";
    this_thread::sleep_for(chrono::seconds(1));

    system("pause");

    cout << "\n--Syntax:--\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "C++ syntax is similar to C. A basic program includes headers (e.g., <iostream>), a main() function, and\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\nstatements ending with semicolons. The tutorial emphasizes understanding the structure and flow of a C++ program.\n\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\n--Statements:--\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "C++ uses statements to perform actions. These include declaration statements (e.g., int x = 5;),\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "\ncontrol statements (e.g., if, for, while), and more. Statements are the building blocks of a C++ program.\n\n";
    this_thread::sleep_for(chrono::seconds(1));

    cout << "------------------------------------------------------------------------------------------------------------------------\n";
}

int main() {
    Intro();
    return 0;
}
