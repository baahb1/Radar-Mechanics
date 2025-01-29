#include"object.h"
#include"transmitter.h"
#include<iostream>
/* NOTES

uses random package for noise, do not assume it is reseeded before sampling

*/

using namespace std;



int main(int argc, const char** argv) {
    transmitter GRD = transmitter(1.7,75,100*10^9,3.0,1.0,15);

    float Return_and_noise = GRD.noise();

    std::cout << "Noise : \n"<<Return_and_noise;
}