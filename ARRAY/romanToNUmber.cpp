// https://leetcode.com/problems/roman-to-integer/
// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

#include <string>
#include <iostream>

class Solution
{
public:
    int romanToInt(std::string s)
    {
        int number = 0;
        for (int index = 0; index < s.length(); index++)
        {
            char character = s[index];
            switch (character)
            {
            case 'I':
            {
                int count = 1;
                if (s[index + 1] == 'V')
                {
                    number = number + 5 - count;
                    index++;
                    continue;
                }
                if (s[index + 1] == 'X')
                {
                    number = number + 10 - count;
                    index++;
                    continue;
                }
                else
                {
                    number += 1;
                }
                break;
            }
            case 'V':
            {
                number += 5;
                break;
            }
            case 'X':
            {
                int count = 1;
                if (s[index + 1] == 'L')
                {
                    number = number + 50 - count * 10;
                    index++;
                    continue;
                }
                if (s[index + 1] == 'C')
                {
                    number = number + 100 - count * 10;
                    index++;
                    continue;
                }
                else
                {
                    number += 10;
                }
                break;
            }
            case 'L':
            {
                number += 50;

                break;
            }
            case 'C':
            {
                int count = 1;
                if (s[index + 1] == 'D')
                {
                    number = number + 500 - count * 100;
                    index++;
                    continue;
                }
                if (s[index + 1] == 'M')
                {
                    number = number + 1000 - count * 100;
                    index++;
                    continue;
                }
                else
                    number += 100;
                break;
            }
            case 'D':
            {
                number += 500;

                break;
            }
            case 'M':
            {
                number += 1000;
                break;
            }
            default:
            {
                break;
            }
            }
            // if (s[index] == 'I')
            // {
            //     int count = 1;
            //     if (s[index + 1] == 'V')
            //     {
            //         number = number + 5 - count;
            //         index++;
            //         continue;
            //     }
            //     if (s[index + 1] == 'X')
            //     {
            //         number = number + 10 - count;
            //         index++;
            //         continue;
            //     }
            //     else
            //     {
            //         number += 1;
            //     }
            // }
            // if (s[index] == 'V')
            // {
            //     number += 5;
            // }
            // if (s[index] == 'X')
            // {
            // int count = 1;
            // if (s[index + 1] == 'L')
            // {
            //     number = number + 50 - count * 10;
            //     index++;
            //     continue;
            // }
            // if (s[index + 1] == 'C')
            // {
            //     number = number + 100 - count * 10;
            //     index++;
            //     continue;
            // }
            // else
            //     number += 10;
            // }
            // if (s[index] == 'L')
            // {
            //     number += 50;
            // }
            // if (s[index] == 'C')
            // {
            //     int count = 1;
            //     if (s[index + 1] == 'D')
            //     {
            //         number = number + 500 - count * 100;
            //         index++;
            //         continue;
            //     }
            //     if (s[index + 1] == 'M')
            //     {
            //         number = number + 1000 - count * 100;
            //         index++;
            //         continue;
            //     }
            //     else
            //         number += 100;
            // }
            // if (s[index] == 'D')
            // {
            //     number += 500;
            // }
            // if (s[index] == 'M')
            // {
            //     number += 1000;
            // }

            // std::cout << s[index] << " : " << number << std::endl;
        }
        std::cout << number << " " << s << std::endl;
        return number;
    }
};

int main()
{
    Solution solve;
    solve.romanToInt("MCMXCIV");
    return 0;
}