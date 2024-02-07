#include <cmath>

double calculateAbsoluteError(double exactValue, double aproximateValue) {
    return (double) abs(exactValue - aproximateValue);
}

double calculateRelativeError(double absoluteError, double exactNumber) {
    return (double) absoluteError / abs(exactNumber);
} 

double toPercent(double n) {
    return n * 100;
}