#include "logger.hh"
Logger::Logger(int flag) : flag_(flag)
{}
void Logger::info(const std::string& message) const
{
    std::cout << "INFO: " << message << "\n";
}
void Logger::error(const std::string& message) const
{
    std::cerr << "ERROR: " << message << "\n";
}
const Logger& operator<<(const Logger& l, const std::string& message)
{
    if (l.flag_ == 1)
        l.info(message);
    else
        l.error(message);
    return l;
}
void Logger::set_info()
{
    flag_ = 1;
}
void Logger::set_error()
{
    flag_ = 2;
}
void Logger::toggle_level()
{
    if (flag_ == 1)
        flag_ = 2;
    else
        flag_ = 1;
}
