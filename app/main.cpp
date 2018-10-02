/** 
 *  @file    main.cpp
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



#include <iostream>
#include <AnalogSensor.hpp>

int main()
{
    AnalogSensor lightSensor(5);
    std::cout << "Averaged sensor reading: " << lightSensor.Read() << std::endl;
    bool terminator = true;
    if( terminator )
    {
        std::cout << "DONE" << std::endl;
    }
    return 0;
}
