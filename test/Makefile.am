INCLUDES= -I$(gwenhywfar_symlinkdir) \
 $(LIBGNUTLS_CFLAGS) $(GPG_ERROR_CFLAGS) \
 -I$(top_srcdir)/src/base \
 -I$(top_srcdir)/src/crypt \
 -I$(top_srcdir)/src/io \
 -I$(top_srcdir)/src/ipc \
 -I$(top_srcdir)/src/net2 \
 -I$(top_srcdir)/src/os \
 -I$(top_srcdir)/src/parser @all_includes@

noinst_PROGRAMS=gwentest
gwentest_SOURCES=gwentest.c
gwentest_LDADD=$(top_builddir)/src/libgwenhywfar.la \
  $(LIBGCRYPT_LIBS) $(LIBGNUTLS_LIBS) $(GPG_ERROR_LIBS)

EXTRA_DIST = README.MSVC gwentest.vcproj testdialog.xml

sources:
