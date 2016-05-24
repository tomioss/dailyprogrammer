/*
 * Author: https://github.com/kormin
 * Date Created: May 11, 2016
 */

#include <iostream>
#include <string>

using namespace std;

const string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
const string mrse[36] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",
".----","..---","...--","....-",".....","-....","--...","---..","----.","-----"};
const char spc1 = ' ';
const string spc2 = " / "; // space between words is 7 units;
int len1 = txt.length();
int len2 = spc2.length();

int main() { // for [2] if 0 has space after, the space will not be displayed
    int c, len;
    string msg, res;
    cout<<"Enter a choice: "<<endl<<"[1] Text to Morse code"<<endl<<"[2] Morse code to text"<<endl<<"Choice: ";
    cin>>c;
    return 0;
}
