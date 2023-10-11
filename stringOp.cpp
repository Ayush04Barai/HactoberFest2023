#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main() {
    // String declaration and initialization
    std::string myString = "Hello, World!";

    // String concatenation
    myString += " Welcome!";

    // String length
    int length = myString.length();
    std::cout << "String Length: " << length << std::endl;

    // String comparison
    std::string str1 = "apple";
    std::string str2 = "banana";
    bool isEqual = (str1 == str2);
    std::cout << "String Comparison: " << isEqual << std::endl;

    // Substring extraction
    std::string subStr = myString.substr(0, 5); // Extracts "Hello"
    std::cout << "Substring: " << subStr << std::endl;

    // Find substring
    size_t found = myString.find("World"); // Returns the index where "World" starts
    std::cout << "Find Substring: " << found << std::endl;

    // String input/output
    std::cout << "Enter a string: ";
    std::cin >> myString;
    std::cout << "You entered: " << myString << std::endl;

    // String to integer
    std::string numStr = "42";
    int num = std::stoi(numStr);
    std::cout << "String to Integer: " << num << std::endl;

    // String splitting using a delimiter
    std::string sentence = "This is a sample sentence";
    std::istringstream iss(sentence);
    std::vector<std::string> words;
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    // String replacing
    myString.replace(7, 5, "Universe"); // Replaces "World" with "Universe"
    std::cout << "String after Replacement: " << myString << std::endl;

    return 0;
}
