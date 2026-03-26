#include <stdio.h>

// Define traffic light states
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;

    // Example: Let's say the signal is yellow
    signal = YELLOW;

    switch(signal) {
        case RED:
            printf("STOP! The light is RED.\n");
            break;

        case YELLOW:
            printf("CAUTION! The light is YELLOW.\n");
            break;

        case GREEN:
            printf("GO! The light is GREEN.\n");
            break;

        default:
            printf("Invalid traffic light signal.\n");
    }

    return 0;
}
