//method 1

vector<string> split(const string &s, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(s);
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

//method 2 more optimum space-wise C++20 or later

#include <ranges>
vector<string> split(const string &s, char delimiter) {
    vector<string> tokens;
    for (auto part : s | views::split(delimiter))
        tokens.emplace_back(part.begin(), part.end());
    return tokens;
}

