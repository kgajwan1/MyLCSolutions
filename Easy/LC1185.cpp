// LC 1185. Day of the Week
// Painful AF, this is misclassified

class Solution {
public:
    string dayOfWeekNames[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
int daysTillMonth[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };
bool isLeap(int y) { return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0); }
string dayOfTheWeek(int day, int month, int year) {
  int totalDays = 4 + day + (month > 2 && isLeap(year) ? 1 : 0);
  for (auto y = 1971; y < year; ++y) totalDays += isLeap(y) ? 366 : 365;
  return dayOfWeekNames[(totalDays + daysTillMonth[month - 1]) % 7];
}
};