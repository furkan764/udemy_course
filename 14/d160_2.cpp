#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Vector2
{
    
    float x, y;

    Vector2(float x, float y)
        : x(x), y(y) {}

    Vector2 Add(const Vector2 &other) const
    {
        return *this + other;   
    }
    Vector2 Multiply(const Vector2 &other) const
    {
        return Vector2(x * other.x, y * other.y);
    }
    Vector2 operator+(const Vector2 &other) const
    {
        //return Add(other);
        return Vector2(x + other.x, y + other.y);
    }
};

int main()
{

    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);

    Vector2 result = position.Add(speed);  // position burda *this
    Vector2 result2 = position + speed;
    cout << result.x << ", " << result.y << endl;
    cout << result2.x << ", " << result2.y << endl;
}
