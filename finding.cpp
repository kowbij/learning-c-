#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string word;
    std::cout << "Lets find a word what is the word or number \n";
    std::cin >> word;
    std::fstream file;
    file.open("names.txt", std::fstream::in);
    std::string line;
    int count = 1;
    while (getline(file, line))
    {
        if (line == word) //if the line read is the same as input continue
        {
            std::cout << "We found the word " << word << " on line " << count << std::endl;
            for (int i = 0; i < 3; i++) //after word is found get the next 3 lines and print them
            {
               std::getline(file, line);
               std::cout << line << std::endl;
            }
            break; //cancel the loop here with break

        }
    count++;
        
    }
    
}