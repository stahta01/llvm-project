#ifndef HWASAN_PLATFORM_INTERCEPTORS_H
#define HWASAN_PLATFORM_INTERCEPTORS_H

#include "sanitizer_common/sanitizer_platform_interceptors.h"

// cat sanitizer_platform_interceptors.h  | grep '^#define SANITIZER_INTERCEPT' | cut -d ' ' -f 1,2 | sed -r 's/^#define/#undef/'
#undef SANITIZER_INTERCEPT_STRLEN
#undef SANITIZER_INTERCEPT_STRNLEN
#undef SANITIZER_INTERCEPT_STRCMP
#undef SANITIZER_INTERCEPT_STRSTR
#undef SANITIZER_INTERCEPT_STRCASESTR
#undef SANITIZER_INTERCEPT_STRTOK
#undef SANITIZER_INTERCEPT_STRCHR
#undef SANITIZER_INTERCEPT_STRCHRNUL
#undef SANITIZER_INTERCEPT_STRRCHR
#undef SANITIZER_INTERCEPT_STRSPN
#undef SANITIZER_INTERCEPT_STRPBRK
#undef SANITIZER_INTERCEPT_TEXTDOMAIN
#undef SANITIZER_INTERCEPT_STRCASECMP
#undef SANITIZER_INTERCEPT_MEMSET
#undef SANITIZER_INTERCEPT_MEMMOVE
#undef SANITIZER_INTERCEPT_MEMCPY
#undef SANITIZER_INTERCEPT_MEMCMP
#undef SANITIZER_INTERCEPT_BCMP
#undef SANITIZER_INTERCEPT_STRNDUP
#undef SANITIZER_INTERCEPT___STRNDUP
#undef SANITIZER_INTERCEPT_MEMMEM
#undef SANITIZER_INTERCEPT_MEMCHR
#undef SANITIZER_INTERCEPT_MEMRCHR
#undef SANITIZER_INTERCEPT_READ
#undef SANITIZER_INTERCEPT_PREAD
#undef SANITIZER_INTERCEPT_WRITE
#undef SANITIZER_INTERCEPT_PWRITE
#undef SANITIZER_INTERCEPT_FREAD
#undef SANITIZER_INTERCEPT_FWRITE
#undef SANITIZER_INTERCEPT_FGETS
#undef SANITIZER_INTERCEPT_FPUTS
#undef SANITIZER_INTERCEPT_PUTS
#undef SANITIZER_INTERCEPT_PREAD64
#undef SANITIZER_INTERCEPT_PWRITE64
#undef SANITIZER_INTERCEPT_READV
#undef SANITIZER_INTERCEPT_WRITEV
#undef SANITIZER_INTERCEPT_PREADV
#undef SANITIZER_INTERCEPT_PWRITEV
#undef SANITIZER_INTERCEPT_PREADV64
#undef SANITIZER_INTERCEPT_PWRITEV64
#undef SANITIZER_INTERCEPT_PRCTL
#undef SANITIZER_INTERCEPT_LOCALTIME_AND_FRIENDS
#undef SANITIZER_INTERCEPT_STRPTIME
#undef SANITIZER_INTERCEPT_SCANF
#undef SANITIZER_INTERCEPT_ISOC99_SCANF
#undef SANITIZER_INTERCEPT_PRINTF
#undef SANITIZER_INTERCEPT_PRINTF_L
#undef SANITIZER_INTERCEPT_ISOC99_PRINTF
#undef SANITIZER_INTERCEPT___PRINTF_CHK
#undef SANITIZER_INTERCEPT_FREXP
#undef SANITIZER_INTERCEPT_FREXPF_FREXPL
#undef SANITIZER_INTERCEPT_GETPWNAM_AND_FRIENDS
#undef SANITIZER_INTERCEPT_GETPWNAM_R_AND_FRIENDS
#undef SANITIZER_INTERCEPT_GETPWENT
#undef SANITIZER_INTERCEPT_FGETGRENT_R
#undef SANITIZER_INTERCEPT_FGETPWENT
#undef SANITIZER_INTERCEPT_GETPWENT_R
#undef SANITIZER_INTERCEPT_FGETPWENT_R
#undef SANITIZER_INTERCEPT_SETPWENT
#undef SANITIZER_INTERCEPT_CLOCK_GETTIME
#undef SANITIZER_INTERCEPT_CLOCK_GETCPUCLOCKID
#undef SANITIZER_INTERCEPT_GETITIMER
#undef SANITIZER_INTERCEPT_TIME
#undef SANITIZER_INTERCEPT_GLOB
#undef SANITIZER_INTERCEPT_GLOB64
#undef SANITIZER_INTERCEPT___B64_TO
#undef SANITIZER_INTERCEPT_DN_COMP_EXPAND
#undef SANITIZER_INTERCEPT_POSIX_SPAWN
#undef SANITIZER_INTERCEPT_WAIT
#undef SANITIZER_INTERCEPT_INET
#undef SANITIZER_INTERCEPT_PTHREAD_GETSCHEDPARAM
#undef SANITIZER_INTERCEPT_GETADDRINFO
#undef SANITIZER_INTERCEPT_GETNAMEINFO
#undef SANITIZER_INTERCEPT_GETSOCKNAME
#undef SANITIZER_INTERCEPT_GETHOSTBYNAME
#undef SANITIZER_INTERCEPT_GETHOSTBYNAME2
#undef SANITIZER_INTERCEPT_GETHOSTBYNAME_R
#undef SANITIZER_INTERCEPT_GETHOSTBYNAME2_R
#undef SANITIZER_INTERCEPT_GETHOSTBYADDR_R
#undef SANITIZER_INTERCEPT_GETHOSTENT_R
#undef SANITIZER_INTERCEPT_GETSOCKOPT
#undef SANITIZER_INTERCEPT_ACCEPT
#undef SANITIZER_INTERCEPT_ACCEPT4
#undef SANITIZER_INTERCEPT_PACCEPT
#undef SANITIZER_INTERCEPT_MODF
#undef SANITIZER_INTERCEPT_RECVMSG
#undef SANITIZER_INTERCEPT_SENDMSG
#undef SANITIZER_INTERCEPT_RECVMMSG
#undef SANITIZER_INTERCEPT_SENDMMSG
#undef SANITIZER_INTERCEPT_SYSMSG
#undef SANITIZER_INTERCEPT_GETPEERNAME
#undef SANITIZER_INTERCEPT_IOCTL
#undef SANITIZER_INTERCEPT_INET_ATON
#undef SANITIZER_INTERCEPT_SYSINFO
#undef SANITIZER_INTERCEPT_READDIR
#undef SANITIZER_INTERCEPT_READDIR64
#undef SANITIZER_INTERCEPT_PTRACE
#undef SANITIZER_INTERCEPT_PTRACE
#undef SANITIZER_INTERCEPT_SETLOCALE
#undef SANITIZER_INTERCEPT_GETCWD
#undef SANITIZER_INTERCEPT_GET_CURRENT_DIR_NAME
#undef SANITIZER_INTERCEPT_STRTOIMAX
#undef SANITIZER_INTERCEPT_MBSTOWCS
#undef SANITIZER_INTERCEPT_MBSNRTOWCS
#undef SANITIZER_INTERCEPT_WCSTOMBS
#undef SANITIZER_INTERCEPT_STRXFRM
#undef SANITIZER_INTERCEPT___STRXFRM_L
#undef SANITIZER_INTERCEPT_WCSXFRM
#undef SANITIZER_INTERCEPT___WCSXFRM_L
#undef SANITIZER_INTERCEPT_WCSNRTOMBS
#undef SANITIZER_INTERCEPT_WCRTOMB
#undef SANITIZER_INTERCEPT_WCTOMB
#undef SANITIZER_INTERCEPT_TCGETATTR
#undef SANITIZER_INTERCEPT_REALPATH
#undef SANITIZER_INTERCEPT_CANONICALIZE_FILE_NAME
#undef SANITIZER_INTERCEPT_CONFSTR
#undef SANITIZER_INTERCEPT_SCHED_GETAFFINITY
#undef SANITIZER_INTERCEPT_SCHED_GETPARAM
#undef SANITIZER_INTERCEPT_STRERROR
#undef SANITIZER_INTERCEPT_STRERROR_R
#undef SANITIZER_INTERCEPT_XPG_STRERROR_R
#undef SANITIZER_INTERCEPT_SCANDIR
#undef SANITIZER_INTERCEPT_SCANDIR64
#undef SANITIZER_INTERCEPT_GETGROUPS
#undef SANITIZER_INTERCEPT_POLL
#undef SANITIZER_INTERCEPT_PPOLL
#undef SANITIZER_INTERCEPT_WORDEXP
#undef SANITIZER_INTERCEPT_SIGWAIT
#undef SANITIZER_INTERCEPT_SIGWAITINFO
#undef SANITIZER_INTERCEPT_SIGTIMEDWAIT
#undef SANITIZER_INTERCEPT_SIGSETOPS
#undef SANITIZER_INTERCEPT_SIGSET_LOGICOPS
#undef SANITIZER_INTERCEPT_SIGPENDING
#undef SANITIZER_INTERCEPT_SIGPROCMASK
#undef SANITIZER_INTERCEPT_PTHREAD_SIGMASK
#undef SANITIZER_INTERCEPT_BACKTRACE
#undef SANITIZER_INTERCEPT_GETMNTENT
#undef SANITIZER_INTERCEPT_GETMNTENT_R
#undef SANITIZER_INTERCEPT_STATFS
#undef SANITIZER_INTERCEPT_STATFS64
#undef SANITIZER_INTERCEPT_STATVFS
#undef SANITIZER_INTERCEPT_STATVFS64
#undef SANITIZER_INTERCEPT_INITGROUPS
#undef SANITIZER_INTERCEPT_ETHER_NTOA_ATON
#undef SANITIZER_INTERCEPT_ETHER_HOST
#undef SANITIZER_INTERCEPT_ETHER_R
#undef SANITIZER_INTERCEPT_SHMCTL
#undef SANITIZER_INTERCEPT_RANDOM_R
#undef SANITIZER_INTERCEPT_PTHREAD_ATTR_GET
#undef SANITIZER_INTERCEPT_PTHREAD_ATTR_GETINHERITSCHED
#undef SANITIZER_INTERCEPT_PTHREAD_ATTR_GETAFFINITY_NP
#undef SANITIZER_INTERCEPT_PTHREAD_GETAFFINITY_NP
#undef SANITIZER_INTERCEPT_PTHREAD_ATTR_GET_SCHED
#undef SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETPSHARED
#undef SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETTYPE
#undef SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETPROTOCOL
#undef SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETPRIOCEILING
#undef SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETROBUST
#undef SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETROBUST_NP
#undef SANITIZER_INTERCEPT_PTHREAD_RWLOCKATTR_GETPSHARED
#undef SANITIZER_INTERCEPT_PTHREAD_RWLOCKATTR_GETKIND_NP
#undef SANITIZER_INTERCEPT_PTHREAD_CONDATTR_GETPSHARED
#undef SANITIZER_INTERCEPT_PTHREAD_CONDATTR_GETCLOCK
#undef SANITIZER_INTERCEPT_PTHREAD_BARRIERATTR_GETPSHARED
#undef SANITIZER_INTERCEPT_TRYJOIN
#undef SANITIZER_INTERCEPT_TIMEDJOIN
#undef SANITIZER_INTERCEPT_THR_EXIT
#undef SANITIZER_INTERCEPT_TMPNAM
#undef SANITIZER_INTERCEPT_TMPNAM_R
#undef SANITIZER_INTERCEPT_PTSNAME
#undef SANITIZER_INTERCEPT_PTSNAME_R
#undef SANITIZER_INTERCEPT_TTYNAME
#undef SANITIZER_INTERCEPT_TTYNAME_R
#undef SANITIZER_INTERCEPT_TEMPNAM
#undef SANITIZER_INTERCEPT_SINCOS
#undef SANITIZER_INTERCEPT_REMQUO
#undef SANITIZER_INTERCEPT_REMQUOL
#undef SANITIZER_INTERCEPT_LGAMMA
#undef SANITIZER_INTERCEPT_LGAMMAL
#undef SANITIZER_INTERCEPT_LGAMMA_R
#undef SANITIZER_INTERCEPT_LGAMMAL_R
#undef SANITIZER_INTERCEPT_DRAND48_R
#undef SANITIZER_INTERCEPT_RAND_R
#undef SANITIZER_INTERCEPT_ICONV
#undef SANITIZER_INTERCEPT_TIMES
#undef SANITIZER_INTERCEPT_GETLINE
#undef SANITIZER_INTERCEPT__EXIT
#undef SANITIZER_INTERCEPT___LIBC_MUTEX
#undef SANITIZER_INTERCEPT_PTHREAD_SETNAME_NP
#undef SANITIZER_INTERCEPT_PTHREAD_GETNAME_NP
#undef SANITIZER_INTERCEPT_TLS_GET_ADDR
#undef SANITIZER_INTERCEPT_LISTXATTR
#undef SANITIZER_INTERCEPT_GETXATTR
#undef SANITIZER_INTERCEPT_GETRESID
#undef SANITIZER_INTERCEPT_GETIFADDRS
#undef SANITIZER_INTERCEPT_IF_INDEXTONAME
#undef SANITIZER_INTERCEPT_CAPGET
#undef SANITIZER_INTERCEPT_AEABI_MEM
#undef SANITIZER_INTERCEPT_AEABI_MEM
#undef SANITIZER_INTERCEPT___BZERO
#undef SANITIZER_INTERCEPT_BZERO
#undef SANITIZER_INTERCEPT_FTIME
#undef SANITIZER_INTERCEPT_XDR
#undef SANITIZER_INTERCEPT_XDRREC
#undef SANITIZER_INTERCEPT_TSEARCH
#undef SANITIZER_INTERCEPT_LIBIO_INTERNALS
#undef SANITIZER_INTERCEPT_FOPEN
#undef SANITIZER_INTERCEPT_FOPEN64
#undef SANITIZER_INTERCEPT_OPEN_MEMSTREAM
#undef SANITIZER_INTERCEPT_OBSTACK
#undef SANITIZER_INTERCEPT_FFLUSH
#undef SANITIZER_INTERCEPT_FCLOSE
#undef SANITIZER_INTERCEPT_DLOPEN_DLCLOSE
#undef SANITIZER_INTERCEPT_GETPASS
#undef SANITIZER_INTERCEPT_TIMERFD
#undef SANITIZER_INTERCEPT_MLOCKX
#undef SANITIZER_INTERCEPT_FOPENCOOKIE
#undef SANITIZER_INTERCEPT_SEM
#undef SANITIZER_INTERCEPT_PTHREAD_SETCANCEL
#undef SANITIZER_INTERCEPT_MINCORE
#undef SANITIZER_INTERCEPT_PROCESS_VM_READV
#undef SANITIZER_INTERCEPT_CTERMID
#undef SANITIZER_INTERCEPT_CTERMID_R
#undef SANITIZER_INTERCEPTOR_HOOKS
#undef SANITIZER_INTERCEPT_RECV_RECVFROM
#undef SANITIZER_INTERCEPT_SEND_SENDTO
#undef SANITIZER_INTERCEPT_EVENTFD_READ_WRITE
#undef SANITIZER_INTERCEPT_STAT
#undef SANITIZER_INTERCEPT_STAT64
#undef SANITIZER_INTERCEPT_LSTAT
#undef SANITIZER_INTERCEPT___XSTAT
#undef SANITIZER_INTERCEPT___XSTAT64
#undef SANITIZER_INTERCEPT___LXSTAT
#undef SANITIZER_INTERCEPT___LXSTAT64
#undef SANITIZER_INTERCEPT_UTMP
#undef SANITIZER_INTERCEPT_UTMPX
#undef SANITIZER_INTERCEPT_GETLOADAVG
#undef SANITIZER_INTERCEPT_MMAP
#undef SANITIZER_INTERCEPT_MMAP64
#undef SANITIZER_INTERCEPT_MALLOPT_AND_MALLINFO
#undef SANITIZER_INTERCEPT_MEMALIGN
#undef SANITIZER_INTERCEPT___LIBC_MEMALIGN
#undef SANITIZER_INTERCEPT_PVALLOC
#undef SANITIZER_INTERCEPT_CFREE
#undef SANITIZER_INTERCEPT_REALLOCARRAY
#undef SANITIZER_INTERCEPT_ALIGNED_ALLOC
#undef SANITIZER_INTERCEPT_MALLOC_USABLE_SIZE
#undef SANITIZER_INTERCEPT_MCHECK_MPROBE
#undef SANITIZER_INTERCEPT_WCSCAT
#undef SANITIZER_INTERCEPT_WCSDUP
#undef SANITIZER_INTERCEPT_SIGNAL_AND_SIGACTION
#undef SANITIZER_INTERCEPT_BSD_SIGNAL
#undef SANITIZER_INTERCEPT_ACCT
#undef SANITIZER_INTERCEPT_USER_FROM_UID
#undef SANITIZER_INTERCEPT_UID_FROM_USER
#undef SANITIZER_INTERCEPT_GROUP_FROM_GID
#undef SANITIZER_INTERCEPT_GID_FROM_GROUP
#undef SANITIZER_INTERCEPT_ACCESS
#undef SANITIZER_INTERCEPT_FACCESSAT
#undef SANITIZER_INTERCEPT_GETGROUPLIST
#undef SANITIZER_INTERCEPT_STRLCPY
#undef SANITIZER_INTERCEPT_NAME_TO_HANDLE_AT
#undef SANITIZER_INTERCEPT_OPEN_BY_HANDLE_AT
#undef SANITIZER_INTERCEPT_READLINK
#undef SANITIZER_INTERCEPT_READLINKAT
#undef SANITIZER_INTERCEPT_DEVNAME
#undef SANITIZER_INTERCEPT_DEVNAME_R
#undef SANITIZER_INTERCEPT_FGETLN
#undef SANITIZER_INTERCEPT_STRMODE
#undef SANITIZER_INTERCEPT_TTYENT
#undef SANITIZER_INTERCEPT_TTYENTPATH
#undef SANITIZER_INTERCEPT_PROTOENT
#undef SANITIZER_INTERCEPT_PROTOENT_R
#undef SANITIZER_INTERCEPT_NETENT
#undef SANITIZER_INTERCEPT_SETVBUF
#undef SANITIZER_INTERCEPT_GETMNTINFO
#undef SANITIZER_INTERCEPT_MI_VECTOR_HASH
#undef SANITIZER_INTERCEPT_GETVFSSTAT
#undef SANITIZER_INTERCEPT_REGEX
#undef SANITIZER_INTERCEPT_REGEXSUB
#undef SANITIZER_INTERCEPT_FTS
#undef SANITIZER_INTERCEPT_SYSCTL
#undef SANITIZER_INTERCEPT_ASYSCTL
#undef SANITIZER_INTERCEPT_SYSCTLGETMIBINFO
#undef SANITIZER_INTERCEPT_NL_LANGINFO
#undef SANITIZER_INTERCEPT_MODCTL
#undef SANITIZER_INTERCEPT_CAPSICUM
#undef SANITIZER_INTERCEPT_STRTONUM
#undef SANITIZER_INTERCEPT_FPARSELN
#undef SANITIZER_INTERCEPT_STATVFS1
#undef SANITIZER_INTERCEPT_STRTOI
#undef SANITIZER_INTERCEPT_CAPSICUM
#undef SANITIZER_INTERCEPT_SHA1
#undef SANITIZER_INTERCEPT_MD4
#undef SANITIZER_INTERCEPT_RMD160
#undef SANITIZER_INTERCEPT_MD5
#undef SANITIZER_INTERCEPT_FSEEK
#undef SANITIZER_INTERCEPT_MD2
#undef SANITIZER_INTERCEPT_SHA2
#undef SANITIZER_INTERCEPT_CDB
#undef SANITIZER_INTERCEPT_VIS
#undef SANITIZER_INTERCEPT_POPEN
#undef SANITIZER_INTERCEPT_POPENVE
#undef SANITIZER_INTERCEPT_PCLOSE
#undef SANITIZER_INTERCEPT_FUNOPEN
#undef SANITIZER_INTERCEPT_FUNOPEN2
#undef SANITIZER_INTERCEPT_GETFSENT
#undef SANITIZER_INTERCEPT_ARC4RANDOM
#undef SANITIZER_INTERCEPT_FDEVNAME
#undef SANITIZER_INTERCEPT_GETUSERSHELL
#undef SANITIZER_INTERCEPT_SL_INIT
#undef SANITIZER_INTERCEPT_GETRANDOM
#undef SANITIZER_INTERCEPT___CXA_ATEXIT
#undef SANITIZER_INTERCEPT_ATEXIT
#undef SANITIZER_INTERCEPT_PTHREAD_ATFORK
#undef SANITIZER_INTERCEPT_GETENTROPY
#undef SANITIZER_INTERCEPT_QSORT
#undef SANITIZER_INTERCEPT_QSORT_R
#undef SANITIZER_INTERCEPT_BSEARCH
#undef SANITIZER_INTERCEPT_SIGALTSTACK
#undef SANITIZER_INTERCEPT_UNAME
#undef SANITIZER_INTERCEPT___XUNAME
#undef SANITIZER_INTERCEPT_FLOPEN
#undef SANITIZER_INTERCEPT_PROCCTL
#undef SANITIZER_INTERCEPT_HEXDUMP
#undef SANITIZER_INTERCEPT_ARGP_PARSE

// cat sanitizer_platform_interceptors.h  | grep '^#define SANITIZER_INTERCEPT' | cut -d ' ' -f 1,2 | sed -r 's/$/ 0/'
#define SANITIZER_INTERCEPT_STRLEN 0
#define SANITIZER_INTERCEPT_STRNLEN 0
#define SANITIZER_INTERCEPT_STRCMP 0
#define SANITIZER_INTERCEPT_STRSTR 0
#define SANITIZER_INTERCEPT_STRCASESTR 0
#define SANITIZER_INTERCEPT_STRTOK 0
#define SANITIZER_INTERCEPT_STRCHR 0
#define SANITIZER_INTERCEPT_STRCHRNUL 0
#define SANITIZER_INTERCEPT_STRRCHR 0
#define SANITIZER_INTERCEPT_STRSPN 0
#define SANITIZER_INTERCEPT_STRPBRK 0
#define SANITIZER_INTERCEPT_TEXTDOMAIN 0
#define SANITIZER_INTERCEPT_STRCASECMP 0
#define SANITIZER_INTERCEPT_MEMSET 0
#define SANITIZER_INTERCEPT_MEMMOVE 0
#define SANITIZER_INTERCEPT_MEMCPY 0
#define SANITIZER_INTERCEPT_MEMCMP 0
#define SANITIZER_INTERCEPT_BCMP 0
#define SANITIZER_INTERCEPT_STRNDUP 0
#define SANITIZER_INTERCEPT___STRNDUP 0
#define SANITIZER_INTERCEPT_MEMMEM 0
#define SANITIZER_INTERCEPT_MEMCHR 0
#define SANITIZER_INTERCEPT_MEMRCHR 0
#define SANITIZER_INTERCEPT_READ 0
#define SANITIZER_INTERCEPT_PREAD 0
#define SANITIZER_INTERCEPT_WRITE 0
#define SANITIZER_INTERCEPT_PWRITE 0
#define SANITIZER_INTERCEPT_FREAD 0
#define SANITIZER_INTERCEPT_FWRITE 0
#define SANITIZER_INTERCEPT_FGETS 0
#define SANITIZER_INTERCEPT_FPUTS 0
#define SANITIZER_INTERCEPT_PUTS 0
#define SANITIZER_INTERCEPT_PREAD64 0
#define SANITIZER_INTERCEPT_PWRITE64 0
#define SANITIZER_INTERCEPT_READV 0
#define SANITIZER_INTERCEPT_WRITEV 0
#define SANITIZER_INTERCEPT_PREADV 0
#define SANITIZER_INTERCEPT_PWRITEV 0
#define SANITIZER_INTERCEPT_PREADV64 0
#define SANITIZER_INTERCEPT_PWRITEV64 0
#define SANITIZER_INTERCEPT_PRCTL 0
#define SANITIZER_INTERCEPT_LOCALTIME_AND_FRIENDS 0
#define SANITIZER_INTERCEPT_STRPTIME 0
#define SANITIZER_INTERCEPT_SCANF 0
#define SANITIZER_INTERCEPT_ISOC99_SCANF 0
#define SANITIZER_INTERCEPT_PRINTF 0
#define SANITIZER_INTERCEPT_PRINTF_L 0
#define SANITIZER_INTERCEPT_ISOC99_PRINTF 0
#define SANITIZER_INTERCEPT___PRINTF_CHK 0
#define SANITIZER_INTERCEPT_FREXP 0
#define SANITIZER_INTERCEPT_FREXPF_FREXPL 0
#define SANITIZER_INTERCEPT_GETPWNAM_AND_FRIENDS 0
#define SANITIZER_INTERCEPT_GETPWNAM_R_AND_FRIENDS 0
#define SANITIZER_INTERCEPT_GETPWENT 0
#define SANITIZER_INTERCEPT_FGETGRENT_R 0
#define SANITIZER_INTERCEPT_FGETPWENT 0
#define SANITIZER_INTERCEPT_GETPWENT_R 0
#define SANITIZER_INTERCEPT_FGETPWENT_R 0
#define SANITIZER_INTERCEPT_SETPWENT 0
#define SANITIZER_INTERCEPT_CLOCK_GETTIME 0
#define SANITIZER_INTERCEPT_CLOCK_GETCPUCLOCKID 0
#define SANITIZER_INTERCEPT_GETITIMER 0
#define SANITIZER_INTERCEPT_TIME 0
#define SANITIZER_INTERCEPT_GLOB 0
#define SANITIZER_INTERCEPT_GLOB64 0
#define SANITIZER_INTERCEPT___B64_TO 0
#define SANITIZER_INTERCEPT_DN_COMP_EXPAND 0
#define SANITIZER_INTERCEPT_POSIX_SPAWN 0
#define SANITIZER_INTERCEPT_WAIT 0
#define SANITIZER_INTERCEPT_INET 0
#define SANITIZER_INTERCEPT_PTHREAD_GETSCHEDPARAM 0
#define SANITIZER_INTERCEPT_GETADDRINFO 0
#define SANITIZER_INTERCEPT_GETNAMEINFO 0
#define SANITIZER_INTERCEPT_GETSOCKNAME 0
#define SANITIZER_INTERCEPT_GETHOSTBYNAME 0
#define SANITIZER_INTERCEPT_GETHOSTBYNAME2 0
#define SANITIZER_INTERCEPT_GETHOSTBYNAME_R 0
#define SANITIZER_INTERCEPT_GETHOSTBYNAME2_R 0
#define SANITIZER_INTERCEPT_GETHOSTBYADDR_R 0
#define SANITIZER_INTERCEPT_GETHOSTENT_R 0
#define SANITIZER_INTERCEPT_GETSOCKOPT 0
#define SANITIZER_INTERCEPT_ACCEPT 0
#define SANITIZER_INTERCEPT_ACCEPT4 0
#define SANITIZER_INTERCEPT_PACCEPT 0
#define SANITIZER_INTERCEPT_MODF 0
#define SANITIZER_INTERCEPT_RECVMSG 0
#define SANITIZER_INTERCEPT_SENDMSG 0
#define SANITIZER_INTERCEPT_RECVMMSG 0
#define SANITIZER_INTERCEPT_SENDMMSG 0
#define SANITIZER_INTERCEPT_SYSMSG 0
#define SANITIZER_INTERCEPT_GETPEERNAME 0
#define SANITIZER_INTERCEPT_IOCTL 0
#define SANITIZER_INTERCEPT_INET_ATON 0
#define SANITIZER_INTERCEPT_SYSINFO 0
#define SANITIZER_INTERCEPT_READDIR 0
#define SANITIZER_INTERCEPT_READDIR64 0
#define SANITIZER_INTERCEPT_PTRACE 0
#define SANITIZER_INTERCEPT_PTRACE 0
#define SANITIZER_INTERCEPT_SETLOCALE 0
#define SANITIZER_INTERCEPT_GETCWD 0
#define SANITIZER_INTERCEPT_GET_CURRENT_DIR_NAME 0
#define SANITIZER_INTERCEPT_STRTOIMAX 0
#define SANITIZER_INTERCEPT_MBSTOWCS 0
#define SANITIZER_INTERCEPT_MBSNRTOWCS 0
#define SANITIZER_INTERCEPT_WCSTOMBS 0
#define SANITIZER_INTERCEPT_STRXFRM 0
#define SANITIZER_INTERCEPT___STRXFRM_L 0
#define SANITIZER_INTERCEPT_WCSXFRM 0
#define SANITIZER_INTERCEPT___WCSXFRM_L 0
#define SANITIZER_INTERCEPT_WCSNRTOMBS 0
#define SANITIZER_INTERCEPT_WCRTOMB 0
#define SANITIZER_INTERCEPT_WCTOMB 0
#define SANITIZER_INTERCEPT_TCGETATTR 0
#define SANITIZER_INTERCEPT_REALPATH 0
#define SANITIZER_INTERCEPT_CANONICALIZE_FILE_NAME 0
#define SANITIZER_INTERCEPT_CONFSTR 0
#define SANITIZER_INTERCEPT_SCHED_GETAFFINITY 0
#define SANITIZER_INTERCEPT_SCHED_GETPARAM 0
#define SANITIZER_INTERCEPT_STRERROR 0
#define SANITIZER_INTERCEPT_STRERROR_R 0
#define SANITIZER_INTERCEPT_XPG_STRERROR_R 0
#define SANITIZER_INTERCEPT_SCANDIR 0
#define SANITIZER_INTERCEPT_SCANDIR64 0
#define SANITIZER_INTERCEPT_GETGROUPS 0
#define SANITIZER_INTERCEPT_POLL 0
#define SANITIZER_INTERCEPT_PPOLL 0
#define SANITIZER_INTERCEPT_WORDEXP 0
#define SANITIZER_INTERCEPT_SIGWAIT 0
#define SANITIZER_INTERCEPT_SIGWAITINFO 0
#define SANITIZER_INTERCEPT_SIGTIMEDWAIT 0
#define SANITIZER_INTERCEPT_SIGSETOPS 0
#define SANITIZER_INTERCEPT_SIGSET_LOGICOPS 0
#define SANITIZER_INTERCEPT_SIGPENDING 0
#define SANITIZER_INTERCEPT_SIGPROCMASK 0
#define SANITIZER_INTERCEPT_PTHREAD_SIGMASK 0
#define SANITIZER_INTERCEPT_BACKTRACE 0
#define SANITIZER_INTERCEPT_GETMNTENT 0
#define SANITIZER_INTERCEPT_GETMNTENT_R 0
#define SANITIZER_INTERCEPT_STATFS 0
#define SANITIZER_INTERCEPT_STATFS64 0
#define SANITIZER_INTERCEPT_STATVFS 0
#define SANITIZER_INTERCEPT_STATVFS64 0
#define SANITIZER_INTERCEPT_INITGROUPS 0
#define SANITIZER_INTERCEPT_ETHER_NTOA_ATON 0
#define SANITIZER_INTERCEPT_ETHER_HOST 0
#define SANITIZER_INTERCEPT_ETHER_R 0
#define SANITIZER_INTERCEPT_SHMCTL 0
#define SANITIZER_INTERCEPT_RANDOM_R 0
#define SANITIZER_INTERCEPT_PTHREAD_ATTR_GET 0
#define SANITIZER_INTERCEPT_PTHREAD_ATTR_GETINHERITSCHED 0
#define SANITIZER_INTERCEPT_PTHREAD_ATTR_GETAFFINITY_NP 0
#define SANITIZER_INTERCEPT_PTHREAD_GETAFFINITY_NP 0
#define SANITIZER_INTERCEPT_PTHREAD_ATTR_GET_SCHED 0
#define SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETPSHARED 0
#define SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETTYPE 0
#define SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETPROTOCOL 0
#define SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETPRIOCEILING 0
#define SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETROBUST 0
#define SANITIZER_INTERCEPT_PTHREAD_MUTEXATTR_GETROBUST_NP 0
#define SANITIZER_INTERCEPT_PTHREAD_RWLOCKATTR_GETPSHARED 0
#define SANITIZER_INTERCEPT_PTHREAD_RWLOCKATTR_GETKIND_NP 0
#define SANITIZER_INTERCEPT_PTHREAD_CONDATTR_GETPSHARED 0
#define SANITIZER_INTERCEPT_PTHREAD_CONDATTR_GETCLOCK 0
#define SANITIZER_INTERCEPT_PTHREAD_BARRIERATTR_GETPSHARED 0
#define SANITIZER_INTERCEPT_TRYJOIN 0
#define SANITIZER_INTERCEPT_TIMEDJOIN 0
#define SANITIZER_INTERCEPT_THR_EXIT 0
#define SANITIZER_INTERCEPT_TMPNAM 0
#define SANITIZER_INTERCEPT_TMPNAM_R 0
#define SANITIZER_INTERCEPT_PTSNAME 0
#define SANITIZER_INTERCEPT_PTSNAME_R 0
#define SANITIZER_INTERCEPT_TTYNAME 0
#define SANITIZER_INTERCEPT_TTYNAME_R 0
#define SANITIZER_INTERCEPT_TEMPNAM 0
#define SANITIZER_INTERCEPT_SINCOS 0
#define SANITIZER_INTERCEPT_REMQUO 0
#define SANITIZER_INTERCEPT_REMQUOL 0
#define SANITIZER_INTERCEPT_LGAMMA 0
#define SANITIZER_INTERCEPT_LGAMMAL 0
#define SANITIZER_INTERCEPT_LGAMMA_R 0
#define SANITIZER_INTERCEPT_LGAMMAL_R 0
#define SANITIZER_INTERCEPT_DRAND48_R 0
#define SANITIZER_INTERCEPT_RAND_R 0
#define SANITIZER_INTERCEPT_ICONV 0
#define SANITIZER_INTERCEPT_TIMES 0
#define SANITIZER_INTERCEPT_GETLINE 0
#define SANITIZER_INTERCEPT__EXIT 0
#define SANITIZER_INTERCEPT___LIBC_MUTEX 0
#define SANITIZER_INTERCEPT_PTHREAD_SETNAME_NP 0
#define SANITIZER_INTERCEPT_PTHREAD_GETNAME_NP 0
#define SANITIZER_INTERCEPT_TLS_GET_ADDR 0
#define SANITIZER_INTERCEPT_LISTXATTR 0
#define SANITIZER_INTERCEPT_GETXATTR 0
#define SANITIZER_INTERCEPT_GETRESID 0
#define SANITIZER_INTERCEPT_GETIFADDRS 0
#define SANITIZER_INTERCEPT_IF_INDEXTONAME 0
#define SANITIZER_INTERCEPT_CAPGET 0
#define SANITIZER_INTERCEPT_AEABI_MEM 0
#define SANITIZER_INTERCEPT_AEABI_MEM 0
#define SANITIZER_INTERCEPT___BZERO 0
#define SANITIZER_INTERCEPT_BZERO 0
#define SANITIZER_INTERCEPT_FTIME 0
#define SANITIZER_INTERCEPT_XDR 0
#define SANITIZER_INTERCEPT_XDRREC 0
#define SANITIZER_INTERCEPT_TSEARCH 0
#define SANITIZER_INTERCEPT_LIBIO_INTERNALS 0
#define SANITIZER_INTERCEPT_FOPEN 0
#define SANITIZER_INTERCEPT_FOPEN64 0
#define SANITIZER_INTERCEPT_OPEN_MEMSTREAM 0
#define SANITIZER_INTERCEPT_OBSTACK 0
#define SANITIZER_INTERCEPT_FFLUSH 0
#define SANITIZER_INTERCEPT_FCLOSE 0
#define SANITIZER_INTERCEPT_DLOPEN_DLCLOSE 0
#define SANITIZER_INTERCEPT_GETPASS 0
#define SANITIZER_INTERCEPT_TIMERFD 0
#define SANITIZER_INTERCEPT_MLOCKX 0
#define SANITIZER_INTERCEPT_FOPENCOOKIE 0
#define SANITIZER_INTERCEPT_SEM 0
#define SANITIZER_INTERCEPT_PTHREAD_SETCANCEL 0
#define SANITIZER_INTERCEPT_MINCORE 0
#define SANITIZER_INTERCEPT_PROCESS_VM_READV 0
#define SANITIZER_INTERCEPT_CTERMID 0
#define SANITIZER_INTERCEPT_CTERMID_R 0
#define SANITIZER_INTERCEPTOR_HOOKS 0
#define SANITIZER_INTERCEPT_RECV_RECVFROM 0
#define SANITIZER_INTERCEPT_SEND_SENDTO 0
#define SANITIZER_INTERCEPT_EVENTFD_READ_WRITE 0
#define SANITIZER_INTERCEPT_STAT 0
#define SANITIZER_INTERCEPT_STAT64 0
#define SANITIZER_INTERCEPT_LSTAT 0
#define SANITIZER_INTERCEPT___XSTAT 0
#define SANITIZER_INTERCEPT___XSTAT64 0
#define SANITIZER_INTERCEPT___LXSTAT 0
#define SANITIZER_INTERCEPT___LXSTAT64 0
#define SANITIZER_INTERCEPT_UTMP 0
#define SANITIZER_INTERCEPT_UTMPX 0
#define SANITIZER_INTERCEPT_GETLOADAVG 0
#define SANITIZER_INTERCEPT_MMAP 0
#define SANITIZER_INTERCEPT_MMAP64 0
#define SANITIZER_INTERCEPT_MALLOPT_AND_MALLINFO 0
#define SANITIZER_INTERCEPT_MEMALIGN 0
#define SANITIZER_INTERCEPT___LIBC_MEMALIGN 0
#define SANITIZER_INTERCEPT_PVALLOC 0
#define SANITIZER_INTERCEPT_CFREE 0
#define SANITIZER_INTERCEPT_REALLOCARRAY 0
#define SANITIZER_INTERCEPT_ALIGNED_ALLOC 0
#define SANITIZER_INTERCEPT_MALLOC_USABLE_SIZE 0
#define SANITIZER_INTERCEPT_MCHECK_MPROBE 0
#define SANITIZER_INTERCEPT_WCSCAT 0
#define SANITIZER_INTERCEPT_WCSDUP 0
#define SANITIZER_INTERCEPT_SIGNAL_AND_SIGACTION 0
#define SANITIZER_INTERCEPT_BSD_SIGNAL 0
#define SANITIZER_INTERCEPT_ACCT 0
#define SANITIZER_INTERCEPT_USER_FROM_UID 0
#define SANITIZER_INTERCEPT_UID_FROM_USER 0
#define SANITIZER_INTERCEPT_GROUP_FROM_GID 0
#define SANITIZER_INTERCEPT_GID_FROM_GROUP 0
#define SANITIZER_INTERCEPT_ACCESS 0
#define SANITIZER_INTERCEPT_FACCESSAT 0
#define SANITIZER_INTERCEPT_GETGROUPLIST 0
#define SANITIZER_INTERCEPT_STRLCPY 0
#define SANITIZER_INTERCEPT_NAME_TO_HANDLE_AT 0
#define SANITIZER_INTERCEPT_OPEN_BY_HANDLE_AT 0
#define SANITIZER_INTERCEPT_READLINK 0
#define SANITIZER_INTERCEPT_READLINKAT 0
#define SANITIZER_INTERCEPT_DEVNAME 0
#define SANITIZER_INTERCEPT_DEVNAME_R 0
#define SANITIZER_INTERCEPT_FGETLN 0
#define SANITIZER_INTERCEPT_STRMODE 0
#define SANITIZER_INTERCEPT_TTYENT 0
#define SANITIZER_INTERCEPT_TTYENTPATH 0
#define SANITIZER_INTERCEPT_PROTOENT 0
#define SANITIZER_INTERCEPT_PROTOENT_R 0
#define SANITIZER_INTERCEPT_NETENT 0
#define SANITIZER_INTERCEPT_SETVBUF 0
#define SANITIZER_INTERCEPT_GETMNTINFO 0
#define SANITIZER_INTERCEPT_MI_VECTOR_HASH 0
#define SANITIZER_INTERCEPT_GETVFSSTAT 0
#define SANITIZER_INTERCEPT_REGEX 0
#define SANITIZER_INTERCEPT_REGEXSUB 0
#define SANITIZER_INTERCEPT_FTS 0
#define SANITIZER_INTERCEPT_SYSCTL 0
#define SANITIZER_INTERCEPT_ASYSCTL 0
#define SANITIZER_INTERCEPT_SYSCTLGETMIBINFO 0
#define SANITIZER_INTERCEPT_NL_LANGINFO 0
#define SANITIZER_INTERCEPT_MODCTL 0
#define SANITIZER_INTERCEPT_CAPSICUM 0
#define SANITIZER_INTERCEPT_STRTONUM 0
#define SANITIZER_INTERCEPT_FPARSELN 0
#define SANITIZER_INTERCEPT_STATVFS1 0
#define SANITIZER_INTERCEPT_STRTOI 0
#define SANITIZER_INTERCEPT_CAPSICUM 0
#define SANITIZER_INTERCEPT_SHA1 0
#define SANITIZER_INTERCEPT_MD4 0
#define SANITIZER_INTERCEPT_RMD160 0
#define SANITIZER_INTERCEPT_MD5 0
#define SANITIZER_INTERCEPT_FSEEK 0
#define SANITIZER_INTERCEPT_MD2 0
#define SANITIZER_INTERCEPT_SHA2 0
#define SANITIZER_INTERCEPT_CDB 0
#define SANITIZER_INTERCEPT_VIS 0
#define SANITIZER_INTERCEPT_POPEN 0
#define SANITIZER_INTERCEPT_POPENVE 0
#define SANITIZER_INTERCEPT_PCLOSE 0
#define SANITIZER_INTERCEPT_FUNOPEN 0
#define SANITIZER_INTERCEPT_FUNOPEN2 0
#define SANITIZER_INTERCEPT_GETFSENT 0
#define SANITIZER_INTERCEPT_ARC4RANDOM 0
#define SANITIZER_INTERCEPT_FDEVNAME 0
#define SANITIZER_INTERCEPT_GETUSERSHELL 0
#define SANITIZER_INTERCEPT_SL_INIT 0
#define SANITIZER_INTERCEPT_GETRANDOM 0
#define SANITIZER_INTERCEPT___CXA_ATEXIT 0
#define SANITIZER_INTERCEPT_ATEXIT 0
#define SANITIZER_INTERCEPT_PTHREAD_ATFORK 0
#define SANITIZER_INTERCEPT_GETENTROPY 0
#define SANITIZER_INTERCEPT_QSORT 0
#define SANITIZER_INTERCEPT_QSORT_R 0
#define SANITIZER_INTERCEPT_BSEARCH 0
#define SANITIZER_INTERCEPT_SIGALTSTACK 0
#define SANITIZER_INTERCEPT_UNAME 0
#define SANITIZER_INTERCEPT___XUNAME 0
#define SANITIZER_INTERCEPT_FLOPEN 0
#define SANITIZER_INTERCEPT_PROCCTL 0
#define SANITIZER_INTERCEPT_HEXDUMP 0
#define SANITIZER_INTERCEPT_ARGP_PARSE 0

#endif // HWASAN_PLATFORM_INTERCEPTORS_H
