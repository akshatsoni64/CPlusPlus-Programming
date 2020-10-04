#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#include <sstream>
#include <typeinfo>
using namespace std;

void print_string(string str){
    cout << str <<endl;
}

int main() {
    // vector<int> list;
    string str;
    vector<string> tokens;
    
    cout << "Enter space separated input: ";
    getline(cin, str);
    
    stringstream strStream(str);
    cout << "Output: " << endl;
    
    while(getline(strStream, str, ' ')){
        tokens.push_back(str);
    }
    cout << "Size: " << tokens.size() << endl;
    // for(int i = 0; i < tokens.size(); i++) 
    //     cout << tokens[i] << '\n'; 
    for_each(tokens.begin(), tokens.end(), print_string);
    
    return 0;
}
