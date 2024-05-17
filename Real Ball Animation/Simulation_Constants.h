#pragma once

// Window size in pixels
#define WINDOW_WIDTH 1200
#define WINDOW_HEIGHT 800

// Equivalent widow height in simulation units, e.g., feet or meters
#define SIMULATION_HEIGHT 10.

// Equivalent widow width in simulation units, e.g., feet or meters
// This size is determined by the height and the window dimensions.
#define SIMULATION_WIDTH SIMULATION_HEIGHT * WINDOW_WIDTH / WINDOW_HEIGHT

// Ratio to convert the simulation units to screen pixels
#define TO_PIXELS ( ( WINDOW_HEIGHT ) / ( SIMULATION_HEIGHT ) )

