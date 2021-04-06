#include <iostream>
#include "Laba2.h"

using namespace std;

int main() {
Text v("Stroka1");
Text v2("Stroka2");
if (v == v2)
{
    cout << "Ravni" << endl;
}
else
{ 
    cout << "NeRavni" << endl;
}
}