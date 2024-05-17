#pragma once
#include <SFML/Graphics.hpp>
#include "Simulation_Constants.h"
class Ball : public virtual sf::CircleShape {
public:
    Ball(double xInit, double yInit, double xVi, double yVi, double color);
    double m_height = 0;
    double m_t = 0;
    double m_deltaT = 0.001;
    double m_xVel = 0;
    double m_yVel = 0;
    double m_xPose = 0;
    double m_xAccel = 0;
    double m_yAccel = -9.809;
    double energyLoss = -1;
    int m_radius = 1;
    int m_color = 0;
    

    void ybounce();
    void xbounce();
    void deltaPose();
    void updateGraphics();
    

};