#ifndef TRANSMITTER_H
#define TRANSMITTER_H
#include<math.h>
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<random>


class transmitter{


    
    public:

    float active_angle_start,active_angle_end,soft_angle_start,soft_angle_end;
    float gain,radius,power,min_detected_signal,recieving_antenna_area,wavelength;
    float c = 1079252848.7999;


    float get_active_angle_start(){return active_angle_end;}
    float get_active_angle_end(){return active_angle_end;}

    //c is in km/h
    //wavelength in cm
    //assume units
    //gain is "It may be defined as the ratio of the maximum radiation intensity from the 
    //subject antenna to the radiation intensity from a lossless, isotropic antenna with the same 
    //power input"



    transmitter(float gain, float radius, float power, float min_detected_signal, float recieving_antenna_area,float wavelength){
        this->gain = gain;
        this->radius = radius;
        this->power = power;
        this->min_detected_signal = min_detected_signal;
        this->wavelength = wavelength;

    }

    transmitter();


    bool track(float signal_return_distance,float distance_actual);
    float signal_return_distance(float rcs);

    float noise();

};

#endif