INCLUDES=-I$(gwenhywfar_symlinkdir) $(GTK2_CFLAGS)

AM_CPPFLAGS= @visibility_cflags@
DEFS+=-DBUILDING_GTK2_GUI -DPACKAGE=\"$(PACKAGE)\"

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = gwengui-gtk2.pc

lib_LTLIBRARIES=libgwengui-gtk2.la


libgwengui_gtk2_la_LIBADD=$(GTK2_LIBS) $(top_builddir)/src/$(gwenhywfar_internal_libname)
libgwengui_gtk2_la_LDFLAGS = -no-undefined

noinst_HEADERS=\
  gtk2_gui_p.h \
  gtk2_gui_dialog_l.h \
  gtk2_gui_dialog_p.h

libgwengui_gtk2_la_SOURCES=\
  gtk2_gui_dialog.c \
  gtk2_gui.c


EXTRA_DIST=\
  w_combobox.c \
  w_label.c \
  w_dialog.c \
  w_gridlayout.c \
  w_groupbox.c \
  w_hlayout.c \
  w_hline.c \
  w_hspacer.c \
  w_lineedit.c \
  w_vlayout.c \
  w_vline.c \
  w_vspacer.c \
  w_pushbutton.c \
  w_textbrowser.c \
  w_textedit.c \
  w_stack.c \
  w_tabbook.c \
  w_progressbar.c \
  w_listbox.c \
  w_checkbox.c \
  w_scrollarea.c \
  w_radiobutton.c \
  w_spinbox.c



iheaderdir=${gwenhywfar_headerdir_am}/gwen-gui-gtk2
iheader_HEADERS= \
  gtk2_gui.h


noinst_PROGRAMS = libtest
libtest_SOURCES = libtest.c
libtest_LDADD = libgwengui-gtk2.la $(GTK2_LIBS) $(top_builddir)/src/$(gwenhywfar_internal_libname) \
  $(builddir)/../testdialogs/libgwengui-test.la

