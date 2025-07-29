// size of objects   and padding concept and empty class

#include <bits/stdc++.h>

using namespace std;

class a
{

    int a; // 4
    int b; // 4
};

class b
{

    int c;  // 4
    char d; // 1 aana chahiye but 4 aata hai
};

class c
{

    char d; // upper me 4 aa rha but yaha dekhe to 1 aayega jaise rehta hai
};

class d
{

    // aha dekhenge same3 size hai   a ko hta do ya b ko hta deo char  data ko 2 rkho ya 3 rkho9 ya ek rkho size same hoga

    char a; // upper me 4 aa rha but yaha dekhe to 1 aayega jaise rehta hai
    char b;
    char d;
    int c;
};

class e
{
    char a; // 1
    char b; // 1
    int c;
    int d;
};
class f
{

    int b;  // 4
    char c; // 1
};

class Empty
{
};

int main()
{

    a obj;
    cout << "a class ke ob ka  size " << sizeof(obj) << endl;

    b obj2;
    cout << "b class ke obj ka size " << sizeof(obj2) << endl;

    c obj3;
    cout << "c class ke obj ka size " << sizeof(obj3) << endl;

    d obj4;
    cout << "d class ke obj ka size " << sizeof(obj4) << endl;

    e obj5;
    cout << "e class ke obj ka size " << sizeof(obj5) << endl;

    f obj6;
    cout << "f class ke obj ka size " << sizeof(obj6) << endl;
    // qki ye apne obj me sbse bda data type ke size ko dekhta then merroy aisa allocate krta ki sbse bda wala total size ko devide kr ske  yha size 9 aata but 9 < 12 hota jo ki 4 se devide nhi kr sta to nearest big 12 hai isliye 12
    cout << "virtual size " << sizeof(Empty) << endl;
    return 0;
}