#include <iostream>

using namespace std;

struct coord
{
    int x;
    int y;
};

coord printBookandPlus(coord _c)
{
    cout << "(" << _c.x << ", " << _c.y << ")" << endl;
    _c.x++;
    _c.y++;
    return _c;
}

int main()
{
    cout << "Try Structure return" << endl;
    coord c1;
    c1.x = 1;
    c1.y = 5;
    coord c2 = printBookandPlus(c1);
    printBookandPlus(c2);
    return 0;
}
