#include <iostream> // standard console input and output
#include <fstream> // header used for file, ifstream input or ofstream output, fstream declares both
#include <string> // this allows the use of string variables using std::string.

int main () { // main functions
    std::string two;
    std::string name; // initailise string variable called name

    std::cout << "What is the name to add to the file ? \n"; // << are used for output with cout
    std::cin >> name; // take users input and set input to the variable name
    std::cout << "type two words now\n";

    std::cin.ignore(); // ignores a input as \n is above for new line it collects it this stops it.
    std::getline(std::cin, two); // use get line to grab more than 1 string to add to the variable.
    
    std::fstream file; // set fstream to variable file that make our file run under the variable
    file.open("names.txt", std::fstream::in | std::fstream::out | std::fstream::app );
    // opens the fill named names,txt and assigns the property to read, write and append a file
    
    file << name << std::endl; // write the data inside of name into the file
    file << two << std::endl;
    file >> name; //read file data to variable name
    
    std::cout << name << std::endl;
    
    file.clear(); // clears the eof flag (end of file)
    file.seekg(std::ios::beg); // resets the file back to the beginning
    
    std::string line; // make variable to grab lines from file
    
    while (getline(file, line)) //for each line in the file adds to line until reaches nothing
    {
            std::cout << line << std::endl;
    }
    file.close(); // closes the current file that we have opened.

    return 0;
    
}