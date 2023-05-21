//?------------------------------------------
//! author: hitarth (ghost)
//` date: 2023-05-12 11:15:12
//?------------------------------------------//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{ //! reference https://en.cppreference.com/w/cpp/string
    // std::string str; //. creates an empty string

    std::string str = "hello"; //. creates a string with value "hello"

    char ch = str[0]; //. ch now contains 'h'
    ch = str.at(1);   //. ch now contains 'e'

    str = "world";                           //$  assigns a new value to str
    cout << str.append("!!!") << endl;       //$  appends "!!!" to str
    cout << str.insert(0, "hello") << endl;  //$  inserts "hello" at the beginning of str
    cout << str.erase(5) << endl;            //$  erases all characters after the 5th character
    cout << str.replace(0, 5, "hi") << endl; //$  replaces the first 5 characters with "hi"

    std::string str1 = "hello";
    std::string str7 = "world";

    //? concatenation
    std::string str3 = str1 + " " + str7; // str3 now contains "hello world"

    //? comparison
    bool equal = (str1 == str7); // false
    bool less = (str1 < str7);   // true

    //. searching
    std::size_t pos = str1.find("ell"); // pos is now 1
    pos = str7.rfind("o");              // pos is now 4

    //. substring
    std::string sub = str1.substr(1, 3); //. sub now contains "ell"

    //. Using push_back() to add a character to the end of the string
    str.push_back(' ');

    //. Using copy() to copy the string to a char array
    char buf[10];
    copy(str.begin(), str.end(), buf);
    buf[str.size()] = '\0'; //? null-terminate the string

    std::cout << buf << '\n'; //? prints "hello "

    //? Using pop_back() to remove the last character from the string
    str.pop_back();

    //? Using swap() to swap the contents of two strings
    std::string str2 = "world";
    std::swap(str, str2);

    std::cout << str << " " << str2 << '\n'; //? prints "world hello"

    string greeting = "Hello";
    string person = "ghost";

    string s1;                 // empty
    string s2{"yo"};           // yo
    string s3{s2};             // yo
    string s4{"ghost", 4};     // ghos
    string s5{greeting, 0, 2}; // gr
    string s6(3, 'h');         // hhh

    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName); // John Doe
    cout << fullName << endl;

    // Numbers and Strings
    string x = "10";
    string y = "20";
    string z = x + y; // z will be 1020 (a string)

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl; // 26

    // String as array
    string myString = "Hello";
    cout << myString[0] << endl; // H
    myString[0] = 'J';
    cout << myString << endl; // Jello

    // Dynamic string
    cout << myString.at(0); // J

    // String functions
    string str = "konichiwa";
    cout << str.substr(0, 3); // kon
    cout << str.find("chi");  // 4
    str.erase(0, 4);          // ichiwa
    str.clear();              // ""

    // String input & output
    string name1;

    cout << "Type your first name: ";
    cin >> name1;
    cout << "Your name is: " << name1 << endl;

    string name2;

    cout << "Type your full name: ";
    getline(cin, name2);
    cout << "Your name is: " << name2 << endl;

    // String loop
    for (char c : myString)
    {
        cout << c << endl;
        /*
        H
        e
        l
        l
        o
        */
    }
    for (int c : myString)
    {
        cout << c << endl;
        /*
        72
        101
        108
        108
        111
        */
    }

    //$ comparing and operationg
    // == != >= > <= <
    /*can only compair
    2 std::string
    std:string and c-string string litral
    std:string and c-string string variable
    */

    /*
    ?      \'	'	Single quote
    ?      \"	"	Double quote
    ?      \\	\	Backslash
    ?      \t	    Tab
    */

    return 0;
}