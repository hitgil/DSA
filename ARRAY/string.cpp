#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> result;

        for (auto &element : strs)
        {
            string key = element;
            sort(key.begin(), key.end());
            map[key].push_back(element);
        }

        for (auto element : map)
        {
            result.push_back(element.second);
            // printVector(element.second);
        }
        print(result);
        return result;
    }

    void print(vector<vector<string>> &result)
    {
        int count = 0;
        cout << "[";
        for (auto element : result)
        {
            printVector(element);
            count++;
            if (count < result.size())
                cout << ",";
        }
        cout << "]";
    }

    void printVector(vector<string> &result)
    {
        int count = 0;
        cout << "[";
        for (auto element : result)
        {
            std::cout << "\"" << element << "\"";
            count++;
            if (count < result.size())
                cout << ",";
        }

        cout << "]";
    }
};

int main()
{
    Solution solve;
    std::vector<std::string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};
    solve.groupAnagrams(input);

    return 0;
}