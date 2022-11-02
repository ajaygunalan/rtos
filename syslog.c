#include <syslog.h>
#include <sys/time.h>


int main(void)
{
    struct timeval tv;

    gettimeofday(&tv, (struct timezone *)0);
    syslog(LOG_CRIT, "My log message test @ tv.tv_sec %ld, tv.tv_usec %ld\n", tv.tv_sec, tv.tv_usec);
    gettimeofday(&tv, (struct timezone *)0);
    syslog(LOG_CRIT, "My log message test @ tv.tv_sec %ld, tv.tv_usec %ld\n", tv.tv_sec, tv.tv_usec);

    return 0;
}