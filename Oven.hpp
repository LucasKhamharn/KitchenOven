//
//  Oven.hpp
//  Kitchen Oven
//
//  Created by Lucas on 2/9/24.
//

#ifndef Oven_hpp
#define Oven_hpp

class Oven
{
    
public:
    //constructor
    Oven();
    
    int GetCurrentTemperature() const;
    
    int GetSetTemperature() const;
    void SetSetTemperature(int Temp);
    
    void TurnOn(int SetTemperature = 350);
    void TurnOff();
    bool IsOn() const;
    
    int GetMinimumTemperature() const;
    int GetMaximumTemperature() const;
    
    int GetRoomTemperature() const;
    
    void SimulatePassingOfTime(int TimeInMinutes);
    
    
private:
    int CurrentTemp;
    int SetTemp;
    int RoomTemp;
    bool Status;
    int MaxTemp;
    int MinTemp;
    
};



#endif /* Oven_hpp */
