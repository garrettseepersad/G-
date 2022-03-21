#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/**
 *
 * Problem Statement-
 * [Arrays - DS](https://www.hackerrank.com/challenges/arrays-ds/)
 *
 */

/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a) {
    vector<int> rev_arr;
    for (int ix = a.size()-1; ix>=0; ix--){
        rev_arr.push_back(a[ix]);
    }
    return(rev_arr);
}

int main()
{
    vector<int> arr = {1,2,3,4};


    vector<int> res = reverseArray(arr);

    for (size_t i = 0; i < res.size(); i++) {
        cout << res[i];

        if (i != res.size() - 1) {
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
