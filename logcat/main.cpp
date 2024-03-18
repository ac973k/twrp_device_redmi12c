#include <cstdlib>

int main() {
    // Execute the "logcat" command and redirect output to a file in /cache
    std::system("logcat -b -all > /cache/recovery_earth_log.txt");

    return 0;
}
