#include <iostream>
using namespace std;
int main()
{
    string word = "amar"; // object is created then value is assigned
    string word2("iyla"); // constructor called
    cout << "name is: " << word;
    cout << "\ndata:" << word2;
    string line;
    // cout<<"Enter a line\n";
    // cin>>line;
    // cout<<"\nLine entered is:"<<line;
    cout << "Enter a line again\n";
    getline(cin, line);
    cout << "\nNow Line entered is:" << line;
    return 0;
}