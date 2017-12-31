#ifndef DS1307_H
#define DS1307_H

#include <Time.h>
#include <Arduino.h>
#include <Wire.h>

#define DS1307_ADDR 0x68

<<<<<<< HEAD
#define TIME_H12 0
=======
#define TIME_H12 0 
>>>>>>> cc296f84ef8a00630c82497f36f027665dff2837
#define TIME_H24 1

class DS1307
{
    public:
        bool begin();

        void setSecond(uint8_t second);
        void setMinute(uint8_t minute);
        void setHour(uint8_t hour);
        void setDay(uint8_t day);
        void setMonth(uint8_t month);
        void setYear(uint16_t year);

        void setWeek(uint8_t week);

        void setDate(uint8_t day, uint8_t month, uint16_t year);
        void setTime(uint8_t hour, uint8_t minute, uint8_t second);

        void setEpoch(time_t epoch, time_t e_year, int16_t offset);

        void setDateTime(char* date, char* time);

<<<<<<< HEAD
        bool isRunning(void);
        void startClock();
        void stopClock();

=======
>>>>>>> cc296f84ef8a00630c82497f36f027665dff2837
        uint16_t getYear();
        uint8_t getMonth();
        uint8_t getDay();
        uint8_t getSecond();
        uint8_t getMinute();
        uint8_t getHour();

        uint8_t getWeek();

        time_t getEpoch();

    private:
        uint8_t bin2bcd (uint8_t val);
        uint8_t bcd2bin (uint8_t val);
};

class NVRAM
{
    public:
<<<<<<< HEAD
        uint8_t read(uint16_t address);
        void write(uint16_t address, uint8_t value);
    private:
};


//Instantiate class DS1307 as RTC

static DS1307 RTC;
static NVRAM NVRAM;

#endif /* DS1307_H */
=======
        

    private:
        
};

//Instantiate class DS1307 as RTC

static DS1307 RTC;

#endif /* DS1307_H */
>>>>>>> cc296f84ef8a00630c82497f36f027665dff2837