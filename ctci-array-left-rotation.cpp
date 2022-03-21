#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
/**
 *
 * Problem Statement-
 * [Shift array left - DS](https://www.hackerrank.com/challenges/ctci-array-left-rotation/)
 *
 */
/*
 * Complete the 'rotLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER d
 */

vector<int> rotLeft(vector<int> arr, int rotations) {
    std::vector<int> rotated_array;
    for (std::size_t i = rotations; i < arr.size(); ++i) {
        rotated_array.push_back(arr[i]);
    }
    for (std::size_t i = 0; i < rotations; ++i) {
        rotated_array.push_back(arr[i]);
    }
    return rotated_array;
}

int main()
{
    int d = 4;
    vector<int> a = {1,2,3,4,5};

    vector<int> result = rotLeft(a, d);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }

    cout << "\n";


    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
