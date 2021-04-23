#include <iostream>
#include "Text1.h"
#include "Text2.h"

int main() {
    Text1 text1= Text1();
    Text2 text2= Text2();
    for (int i = 0; i < 28; ++i) {
        text1.printText1(i);
        text2.printText2(i);
    }
}
