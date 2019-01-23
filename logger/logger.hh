#pragma once
#include <iostream>
class Logger
{
    public:
        Logger(int flag = 1);
        void info(const std::string& message) const;
        void error(const std::string& message) const;
        friend const Logger& operator<<(const Logger& l, const std::string& message);
        void set_error();
        void set_info();
        void toggle_level();
    private:
            int flag_;
};
