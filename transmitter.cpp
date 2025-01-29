#include "transmitter.h"


float transmitter::signal_return_distance(float rcs){

    float numerator = (power * (pow(gain,2)) * pow(wavelength,2) * rcs);
    float denom = (pow(4 * 3.1415926535,3) * min_detected_signal);
    float return_max_distance =  pow( numerator / denom, 1/4);

    return return_max_distance;

}

transmitter::transmitter(){}

bool transmitter::track(float signal_return_distance,float actual_distance){
    if (actual_distance <= signal_return_distance)
    {
        return true;

    }

    else
    {
        return false;
    }
}


float transmitter::noise(){

srand(time(0));


float u = rand();
u = rand();
u =double(rand()) / RAND_MAX;

float e = 2.71828;
float stdev = sqrt(4/3.14159);

//float y = 1 - (pow(e, -1 * (pow(u,2))/(2*stdev)));

float y =  2 * sqrt( log( 1/(1-u) ) ) / stdev;

float y_2 = pow(y,2);
float stdev_2 = pow(stdev,2);

float pdf_o = (y/stdev_2) * (pow(e,- (y_2/(2 * stdev_2))));

//std::cout<<log( 1/(1-y) );
return pdf_o;

}


