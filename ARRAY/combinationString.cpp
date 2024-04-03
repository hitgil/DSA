#include <iostream>
#include <vector>
#include <algorithm>

void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void printVector(std::vector<std::string> &resultentVector)
{
    std::cout << "[ ";
    for (auto element : resultentVector)
    {
        std::cout << "\""
                  << element
                  << "\" , ";
    }
    std::cout << " ]\n";
}

std::vector<std::string> allCombination(std::string str)
{
    std::vector<std::string> resultentVector;
    std::string resultString;
    for (int i = 0; i < str.length(); i++)
    {
        resultString = str;
        for (int j = str.length() - 1; j > 0; j--)
        {
            char &firstChar = resultString[i];
            char &secondChar = resultString[j];
            swap(&firstChar, &secondChar);
            // std::cout << " " << resultString << "\n";
            resultentVector.push_back(resultString);
        }
    }
    // printVector(resultentVector);
    return resultentVector;
}

