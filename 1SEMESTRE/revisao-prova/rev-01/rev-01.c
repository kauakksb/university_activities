#include <math.h>

float loglcdf(float x, float a, float b){
    float res;

    if(x >=0){
        res = 1 / (1+(pow((x/a),b)));

    }else if(x < 0){
        res = 0;
    }

    return res;
}