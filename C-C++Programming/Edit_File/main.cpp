#include <iostream>
#include "length.h"
#include "reverse.h"
using namespace std;

int main() {
    char text[100];
    cout << "type your text :";
    cin >> text;
    int len = length(text);
    reverse(text, len);

    cout << text << endl;
    
}