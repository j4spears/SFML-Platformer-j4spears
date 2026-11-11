#ifndef VECTOR2_H
#define VECTOR2_H

struct Vector2
{
  Vector2();

  // construction
  Vector2(float x_, float y_);
  Vector2(const Vector2& rhs);

  // operations
  Vector2 operator*(float scalar);
  Vector2& operator=(const Vector2& rhs);
  Vector2 dot(Vector2 other_vector);
  Vector2 cross(Vector2 other_vector);
  void normalise();

  // data
  float x = 0;
  float y = 0;
};

#endif // VECTOR2_H
