/** 
 *  @file    AnalogSensor.cpp
 *  @author  Rishabh Choudhary
 *  @copyright GNU Public License
 *  
 *  @brief Valgrind exercise assignment Week 5
 *
 *  @section DESCRIPTION
 *  
 *  Edited the file to fix the bugs reported by Valgrind tool
 *
 */


#include <AnalogSensor.hpp>
#include <numeric>
#include <vector>
#include <memory>

AnalogSensor::AnalogSensor(unsigned int samples)
    : mSamples(samples)
{
}

AnalogSensor::~AnalogSensor()
{
}

int AnalogSensor::Read()
{
    /*Fix 1 : Updated the pointer to shared_ptr */
    std::shared_ptr<std::vector<int>> readings = std::make_shared<std::vector<int>>(mSamples, 10);

    double result = std::accumulate( readings->begin(), readings->end(), 0.0 ) / readings->size();
    return result;
}


