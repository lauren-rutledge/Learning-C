/*
#include <time.h>

Types:
    - struct tm
        - Has date time properties like day in year, day of the week, months, and seconds
    - time_t
        - Stores the calender time
    - clock_t
        - Stores the processor time as a long value
    - timespec
        - Stores an interval of time broken down into seconds and nanoseconds
Functions:
    - time_t time(time_t *destTime);
        - Returns the time in seconds since the unique timestamp
    - double difftime(time_t timeEnd, time_t timeStart); 
        - Returns the number of seconds between the two times
    - struct tm *localtime(const time_t *sourceTime);
        - Used to access the different parts of a time, such as day of the year or months. 
          Provide the time as the parameter and it will fill in a struct of type tm and return it.
    - size_t strftime(char *strDest, size_t maxsize, const char *format, const struct tm *timeptr);
        - Formats a time (*timeptr) based on the rules provided in *format
    - int timespec_get(struct timespec *time_spec, int base);
        - Gets the current calendar time in a given time base and start in the *time_spec parameter
        - Introduced in standard C11
    - char *asctime(const struct tm *timeptr) 
        - Returns a pointer to a string which represents the day and time of the struct *timeptr
        */
            #include <time.h>
            int printCurrentTime(void)
            {
                time_t now;
                struct tm *timeinfo;
                time(&now);
                printf("Current local time and date: %s", asctime(timeinfo));
                return 0; 
            }
        /*

    Mixed examples:
    */
        #include <stdio.h>
        #include <time.h>
        
        int main(void)
        {
            time_t rawtime = time(NULL); // Get the current time in seconds
            struct tm *ptm = localtime(&rawtime); // Converts the time in seconds to a more helpful date/time struct
            printf("The time is %02d/%02d/%04d %02d:%02d:%02d\n", 
                // This syntax is essentially ptm.tm_mday, ptm.tm_mon...
                ptm -> tm_mday, ptm -> tm_mon, ptm -> tm_year + 1900, // Adding 1900 because this property is relative to the year 1900, otherwise it'd print a value like 121 for 2021
                ptm -> tm_hour, ptm -> tm_min, ptm -> tm_sec);
            return 0;
        }
    /*
docs.microsoft.com/en-us/cpp/c-runtime-library/time-management 
*/