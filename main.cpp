#include <syslog.h>
#include <chrono>
#include <thread>
#include <string>
#include <iostream>

int main()
{
    int count = 0;
    while (true) {
        if (count < 10) {
            openlog("slog", LOG_PID|LOG_CONS, LOG_USER);
            syslog(LOG_INFO, "Hello world: %d", count);
            closelog();
            std::cout << "Hello world: " << count << std::endl;
            count ++;

            std::this_thread::sleep_for(std::chrono::seconds(10));
        }
    }
	return 0;
}
