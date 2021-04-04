#include "string.h"
#include <iostream>

using namespace std;

class Text 
{
public:
Text(const char *);
void operator +(char *);
bool operator ==(Text &);
bool operator !=(Text &);
void operator -(char);
void show_string(void){cout << data << endl;}
const char* return_data(void){return data;}
~Text();
private:
char data[256];
};

Text::Text(const char *str)
{
    strcpy(data, str);
}

void Text::operator +(char *str)
{
    strcat(data, str);
}

bool Text::operator ==(Text &letter) 
{
    string str_1 = string(letter.data);
    string str_2 = string(data);
    for(int i = 0; i < 256; i++)
    {
        if (str_1 != str_2)
            return false;
    }
    return true;
}

bool Text::operator !=(Text &letter) 
{
    string str_1 = string(letter.data);
    string str_2 = string(data);
    for(int i = 0; i < 256; i++)
    {
        if (str_1 == str_2)
            return false;
    }
    return true;
}

Text::~Text()
{}