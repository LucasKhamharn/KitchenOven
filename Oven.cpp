//
//  Oven.cpp
//  Kitchen Oven
//
//  Created by Lucas on 2/9/24.
//

#include "Oven.hpp"


Oven::Oven()
    : CurrentTemp(72),
      SetTemp(35),
      RoomTemp(72),
      Status(false),
      MaxTemp(550),
      MinTemp(200)
{
    //leave blank
}

int Oven::GetCurrentTemperature() const
{
    return CurrentTemp;
}

int Oven::GetSetTemperature() const
{
    return SetTemp;
}

void Oven::SetSetTemperature(int Temp)
{
    if ((Temp >= MinTemp) && (Temp <= MaxTemp))
    {
        SetTemp = Temp;
    }
}

void Oven::TurnOn(int SetTemperature)
{
    Status = true;
    SetSetTemperature(SetTemperature);
}

void Oven::TurnOff()
{
    Status = false;
}

bool Oven::IsOn() const
{
    return Status;
}

int Oven::GetMinimumTemperature() const
{
    return MinTemp;
}

int Oven::GetMaximumTemperature() const
{
    return MaxTemp;
}

int Oven::GetRoomTemperature() const
{
    return RoomTemp;
}

void Oven::SimulatePassingOfTime(int TimeInMinutes)
{
    if (Status == true)
    {
        CurrentTemp += (25 * TimeInMinutes);
        if (CurrentTemp > SetTemp)
        {
            CurrentTemp = SetTemp;
        }
    }
    else
    {
        CurrentTemp -= (15 * TimeInMinutes);
        if (CurrentTemp < RoomTemp)
        {
            CurrentTemp = RoomTemp;
        }
    }
}
