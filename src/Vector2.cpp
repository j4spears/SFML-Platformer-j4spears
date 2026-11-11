#include "Vector2.h"
#include <math.h>

Vector2::Vector2() : x(0), y(0) {}

Vector2::Vector2(float x_, float y_) : x(x_), y(y_) {}

Vector2::Vector2(const Vector2& rhs)
{
  this->x = rhs.x;
  this->y = rhs.y;
}

Vector2& Vector2::operator=(const Vector2& rhs)
{
  this->x = rhs.x;
  this->y = rhs.y;

  return *this;
}

void Vector2::normalise()
{
  float magnitude = sqrtf((x * x) + (y * y));

  if (!magnitude)
    return;

  x /= magnitude;
  y /= magnitude;
}

Vector2 Vector2::operator*(float scalar)
{
  Vector2 vec(*this);
  vec.x *= scalar;
  vec.y *= scalar;
  return vec;
}

Vector2 Vector2::dot(Vector2 other_vector)
{
  Vector2 vec;
  vec.x = this->x * other_vector.x;
  vec.y = this->y * other_vector.y;
  return vec;
}

Vector2 Vector2::cross(Vector2 other_vector)
{
  Vector2 vec;
  vec.x = this->y * other_vector.x - this->x * other_vector.y;
  vec.y = this->x * other_vector.y - this->y * other_vector.x;
  return vec;
}