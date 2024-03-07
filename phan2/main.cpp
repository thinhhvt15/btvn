#include <iostream>

using namespace std;

struct Point
{
    int x, y;
    Point() {}
    Point(int x_, int y_) : x(x_), y(y_) {}
};

struct Rect
{
    int x, y, w, h;
    Rect() {}
    Rect(int x_, int y_, int w_, int h_) {
        x = x_;
        y = y_;
        w = w_;
        h = h_;
    }

    bool contains(Point p) {
        return (0 <= p.x && p.x <= x && 0 <= p.y && p.y <= y);
    }
};

struct Ship
{
    Rect rect_;
    string id;
    int dx, dy;

    void Move()
    {
        x += dx; y += dy;
    }
};

void display(const Ship& ship)
{
    cout << ship.id << " " << x << " " << y << "\n";
}

int main()
{
    Ship ship1, ship2;
    int loop = 1;
    while (loop++ < 10) {
        ship1.Move(); ship2.Move();
        display(ship1); display(ship2);
    }
}
