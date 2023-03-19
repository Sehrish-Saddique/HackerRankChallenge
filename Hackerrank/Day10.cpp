#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
string binary = "";
    while (n > 0) {
        binary += to_string(n % 2);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());  // reverse the binary string

    int max_streak = 0;
    int current_streak = 0;
    for (char digit : binary) {
        if (digit == '1') {
            current_streak++;
            max_streak = max(max_streak, current_streak);
        } else {
            current_streak = 0;
        }
    }

    cout << max_streak << endl;
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
