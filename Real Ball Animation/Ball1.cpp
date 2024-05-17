#include "Ball1.h"

//Ball 
Ball::Ball(double xInit, double yInit, double xVi, double yVi, double color)
{
    m_xPose = xInit;
    m_height = yInit;
    m_xVel = xVi;
    m_yVel = yVi;
    m_color = color;

    // Initialize the data for the ball image
    float ballRadiusPx = (float)(TO_PIXELS * m_radius); // Ball radius in pixels
    setRadius(ballRadiusPx - 3);                        // Subtract 3 pixels to account for the outline
    setOutlineThickness(3);                             // Set an outline of 3 pixels
    setOutlineColor(sf::Color::Black);                  // Set the outline color to black
    if (color == 0) {
        setFillColor(sf::Color::White);                     // Set the ball color to white
    }
    else if (color == 1) {
        setFillColor(sf::Color::Magenta);                     
    }
    else if (color == 2) {
        setFillColor(sf::Color::Yellow);
    }
        
    setOrigin(ballRadiusPx - 3, ballRadiusPx - 3);          // Set the origin (not location) of the ball to be its center
}

void Ball::ybounce()
{
    //bounces vertically
    m_yVel *= energyLoss;//simulate nonelastic collisions

}

void Ball::xbounce()
{
    m_xVel *= energyLoss;
}

void Ball::deltaPose() {
    //calculates the change in height and applies it to the height value
    m_yVel += m_yAccel * m_deltaT;
    m_height += m_deltaT * m_yVel;

    //find the change in x position
    m_xVel += m_xAccel * m_deltaT;
    m_xPose += m_xVel * m_deltaT;
    
}

void Ball::updateGraphics() {
    setPosition((float)(m_xPose * TO_PIXELS), (float)(WINDOW_HEIGHT - m_height * TO_PIXELS));
}
