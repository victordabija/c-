#include <cmath>

class Error
{
private:
    double exactValue;
    double aproximateValue;
    double absoluteError;
    double relativeError;

    double calculateAbsoluteError(double exactValue, double aproximateValue) {
        return (double) abs(exactValue - aproximateValue);
    }

    double calculateRelativeError(double absoluteError, double exactNumber) {
        return (double) absoluteError / abs(exactNumber);
    } 
public:
    Error(double exactValue, double aproximateValue) : exactValue(exactValue), aproximateValue(aproximateValue) {
            this->calculateAbsoluteError(this->exactValue, this->aproximateValue);
            this->calculateRelativeError(this->absoluteError, this->exactValue);
    }
    ~Error();

    double getAbsoluteError() {
        return this->absoluteError;
    }

    double getRelativeError() {
        return this->relativeError;
    }

    double getRelativeErrorPercent () {
        return this->relativeError * 100;
    }
};
    