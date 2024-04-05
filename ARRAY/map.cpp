#include <map>
#include <iostream>

int main()
{
    std::map<std::string, int> map;
    std::string str;

    while (1)
    {

        std::cin >> str;
        map[str]++;
    }
}
