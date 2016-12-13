# Initialization
AC_PREREQ([2.69])
AC_INIT([slpd-lite], [1.0], [https://github.com/openbmc/slpd-lite/issues])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([subdir-objects -Wall -Werror foreign dist-xz])

# Checks for programs.
AC_PROG_CXX
AX_CXX_COMPILE_STDCXX_14([noext])
AM_PROG_AR
AC_PROG_INSTALL
AC_PROG_MAKE_SET

# Checks for libraries.
PKG_CHECK_MODULES([SYSTEMD], [libsystemd >= 221])

# Checks for header files.
AC_CHECK_HEADER(systemd/sd-bus.h, ,[AC_MSG_ERROR([Could not find systemd/sd-bus.h...systemd developement package required])])
# Checks for typedefs, structures, and compiler characteristics.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT