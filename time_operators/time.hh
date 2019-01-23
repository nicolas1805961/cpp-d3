#pragma once

#include <string>
#include <ostream>

class Time
{
public:
  explicit Time(const std::string& t);
  Time(unsigned int hours, unsigned int minutes, unsigned int seconds);

  Time& operator+=(const Time& rhs);
  Time& operator-=(const Time& rhs);

  unsigned int get_hours() const;
  unsigned int get_minutes() const;
  unsigned int get_seconds() const;

private:
  unsigned int hours_;
  unsigned int minutes_;
  unsigned int seconds_;
};

std::ostream& operator<<(std::ostream& ostr, const Time& t);
Time operator+(const Time& lhs, const Time& rhs);
Time operator-(const Time& lhs, const Time& rhs);
bool operator==(const Time& lhs, const Time& rhs);
bool operator<(const Time& lhs, const Time& rhs);
bool operator>(const Time& lhs, const Time& rhs);
