#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball(const Point &center, const Velocity &velocity, const Color &color, double radius, bool isCollidable): _velocity(velocity), _center(center), _color(color), _radius(radius), _isCollidable(isCollidable){};
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
private:
    Velocity _velocity;
    Point _center;
    double _radius;
    Color _color; 
    bool _isCollidable;


};
