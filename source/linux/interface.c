/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    g_object_ref (widget), (GDestroyNotify) g_object_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_mainwindow (void)
{
  GtkWidget *mainwindow;
  AtkObject *atko;
  GtkWidget *notebook1;
  GtkWidget *fixed1;
  GObject *nsfspinbutton_adj;
  GtkWidget *nsfspinbutton;
  GtkWidget *nsfmaker;
  GtkWidget *nsfauthor;
  GtkWidget *nsftitle;
  GtkWidget *open;
  GtkWidget *playbutton;
  GtkWidget *nsfstop;
  GtkWidget *nsfplay;
  GtkWidget *cheatbutton;
  GtkWidget *label1;
  GtkWidget *fixed2;
  GtkWidget *scaleamtcombo;
  GtkWidget *label16;
  GtkWidget *label8;
  GtkWidget *scalecombo;
  GtkWidget *check_fullscreen;
  GtkWidget *unlimitsprcheck;
  GtkWidget *videocombo;
  GtkWidget *label11;
  GtkWidget *label17;
  GtkWidget *label10;
  GtkWidget *ntsccombo;
  GtkWidget *rendercombo;
  GtkWidget *label9;
  GtkWidget *label2;
  GtkWidget *fixed3;
  GtkWidget *controlcheck;
  GtkWidget *configbutton;
  GtkWidget *configlabel;
  GtkWidget *configcombo;
  GtkWidget *label3;
  GtkWidget *fixed4;
  GtkWidget *label15;
  GtkWidget *label14;
  GtkWidget *volumelabel;
  GtkWidget *volumescroll;
  GtkWidget *surrscroll;
  GtkWidget *surroundlabel;
  GtkWidget *surrcheck;
  GtkWidget *excitecheck;
  GtkWidget *stereocheck;
  GtkWidget *ratecombo;
  GtkWidget *sndapicombo;
  GtkWidget *label4;
  GtkWidget *fixed7;
  GtkWidget *label12;
  GtkWidget *label13;
  GtkWidget *label23;
  GtkWidget *favorcombo;
  GtkWidget *spatchcombo;
  GtkWidget *misctab;

  mainwindow = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (mainwindow), _("Nestopia Undead"));

  notebook1 = gtk_notebook_new ();
  gtk_widget_show (notebook1);
  gtk_container_add (GTK_CONTAINER (mainwindow), notebook1);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed1);

  nsfspinbutton_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  nsfspinbutton = gtk_spin_button_new (GTK_ADJUSTMENT (nsfspinbutton_adj), 1, 0);
  gtk_widget_show (nsfspinbutton);
  gtk_fixed_put (GTK_FIXED (fixed1), nsfspinbutton, 408, 104);
  gtk_widget_set_size_request (nsfspinbutton, 72, 35);

  nsfmaker = gtk_label_new ("");
  gtk_widget_show (nsfmaker);
  gtk_fixed_put (GTK_FIXED (fixed1), nsfmaker, 144, 64);
  gtk_widget_set_size_request (nsfmaker, 320, 24);

  nsfauthor = gtk_label_new ("");
  gtk_widget_show (nsfauthor);
  gtk_fixed_put (GTK_FIXED (fixed1), nsfauthor, 144, 32);
  gtk_widget_set_size_request (nsfauthor, 320, 24);
  gtk_label_set_justify (GTK_LABEL (nsfauthor), GTK_JUSTIFY_CENTER);

  nsftitle = gtk_label_new ("");
  gtk_widget_show (nsftitle);
  gtk_fixed_put (GTK_FIXED (fixed1), nsftitle, 144, 0);
  gtk_widget_set_size_request (nsftitle, 320, 24);
  gtk_label_set_justify (GTK_LABEL (nsftitle), GTK_JUSTIFY_CENTER);

  open = gtk_button_new_from_stock ("gtk-open");
  gtk_widget_show (open);
  gtk_fixed_put (GTK_FIXED (fixed1), open, 8, 8);
  gtk_widget_set_size_request (open, 120, 40);

  playbutton = gtk_button_new_with_mnemonic (_("Play Game!"));
  gtk_widget_show (playbutton);
  gtk_fixed_put (GTK_FIXED (fixed1), playbutton, 8, 56);
  gtk_widget_set_size_request (playbutton, 120, 40);

  nsfstop = gtk_button_new_from_stock ("gtk-media-stop");
  gtk_widget_show (nsfstop);
  gtk_fixed_put (GTK_FIXED (fixed1), nsfstop, 192, 104);
  gtk_widget_set_size_request (nsfstop, 96, 32);

  nsfplay = gtk_button_new_from_stock ("gtk-media-play");
  gtk_widget_show (nsfplay);
  gtk_fixed_put (GTK_FIXED (fixed1), nsfplay, 296, 104);
  gtk_widget_set_size_request (nsfplay, 88, 32);

  cheatbutton = gtk_button_new_with_mnemonic (_("Cheats..."));
  gtk_widget_show (cheatbutton);
  gtk_fixed_put (GTK_FIXED (fixed1), cheatbutton, 8, 104);
  gtk_widget_set_size_request (cheatbutton, 120, 40);

  label1 = gtk_label_new (_("Emulator"));
  gtk_widget_show (label1);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 0), label1);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed2);

  scaleamtcombo = gtk_combo_box_text_new ();
  gtk_widget_show (scaleamtcombo);
  gtk_fixed_put (GTK_FIXED (fixed2), scaleamtcombo, 64, 56);
  gtk_widget_set_size_request (scaleamtcombo, 80, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scaleamtcombo), _("1x"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scaleamtcombo), _("2x"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scaleamtcombo), _("3x"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scaleamtcombo), _("4x"));

  label16 = gtk_label_new (_("Scale"));
  gtk_widget_show (label16);
  gtk_fixed_put (GTK_FIXED (fixed2), label16, 8, 64);
  gtk_widget_set_size_request (label16, 47, 17);

  label8 = gtk_label_new (_("Filter"));
  gtk_widget_show (label8);
  gtk_fixed_put (GTK_FIXED (fixed2), label8, 0, 16);
  gtk_widget_set_size_request (label8, 64, 24);

  scalecombo = gtk_combo_box_text_new ();
  gtk_widget_show (scalecombo);
  gtk_fixed_put (GTK_FIXED (fixed2), scalecombo, 64, 8);
  gtk_widget_set_size_request (scalecombo, 152, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scalecombo), _("None"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scalecombo), _("NTSC"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scalecombo), _("Scale?x"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (scalecombo), _("hq?x"));

  check_fullscreen = gtk_check_button_new_with_mnemonic (_("Fullscreen"));
  gtk_widget_show (check_fullscreen);
  gtk_fixed_put (GTK_FIXED (fixed2), check_fullscreen, 8, 96);
  gtk_widget_set_size_request (check_fullscreen, 96, 24);

  unlimitsprcheck = gtk_check_button_new_with_mnemonic (_("Unlimited sprites"));
  gtk_widget_show (unlimitsprcheck);
  gtk_fixed_put (GTK_FIXED (fixed2), unlimitsprcheck, 8, 120);
  gtk_widget_set_size_request (unlimitsprcheck, 128, 24);

  videocombo = gtk_combo_box_text_new ();
  gtk_widget_show (videocombo);
  gtk_fixed_put (GTK_FIXED (fixed2), videocombo, 344, 104);
  gtk_widget_set_size_request (videocombo, 136, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (videocombo), _("Auto"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (videocombo), _("NTSC"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (videocombo), _("PAL"));

  label11 = gtk_label_new (_("Region"));
  gtk_widget_show (label11);
  gtk_fixed_put (GTK_FIXED (fixed2), label11, 280, 104);
  gtk_widget_set_size_request (label11, 56, 32);

  label17 = gtk_label_new (_("type"));
  gtk_widget_show (label17);
  gtk_fixed_put (GTK_FIXED (fixed2), label17, 288, 72);
  gtk_widget_set_size_request (label17, 47, 17);

  label10 = gtk_label_new (_("NTSC"));
  gtk_widget_show (label10);
  gtk_fixed_put (GTK_FIXED (fixed2), label10, 288, 56);
  gtk_widget_set_size_request (label10, 48, 16);

  ntsccombo = gtk_combo_box_text_new ();
  gtk_widget_show (ntsccombo);
  gtk_fixed_put (GTK_FIXED (fixed2), ntsccombo, 344, 56);
  gtk_widget_set_size_request (ntsccombo, 136, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (ntsccombo), _("Composite"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (ntsccombo), _("S-Video"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (ntsccombo), _("RGB"));

  rendercombo = gtk_combo_box_text_new ();
  gtk_widget_show (rendercombo);
  gtk_fixed_put (GTK_FIXED (fixed2), rendercombo, 344, 8);
  gtk_widget_set_size_request (rendercombo, 136, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (rendercombo), _("Soft"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (rendercombo), _("OpenGL"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (rendercombo), _("OpenGL bilinear"));

  label9 = gtk_label_new (_("Renderer"));
  gtk_widget_show (label9);
  gtk_fixed_put (GTK_FIXED (fixed2), label9, 252, 16);
  gtk_widget_set_size_request (label9, 96, 24);

  label2 = gtk_label_new (_("Video"));
  gtk_widget_show (label2);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 1), label2);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed3);

  controlcheck = gtk_check_button_new_with_mnemonic (_("Use controllers"));
  gtk_widget_show (controlcheck);
  gtk_fixed_put (GTK_FIXED (fixed3), controlcheck, 8, 16);
  gtk_widget_set_size_request (controlcheck, 136, 24);

  configbutton = gtk_button_new_with_mnemonic (_("Change..."));
  gtk_widget_show (configbutton);
  gtk_fixed_put (GTK_FIXED (fixed3), configbutton, 296, 88);
  gtk_widget_set_size_request (configbutton, 112, 40);

  configlabel = gtk_label_new ("");
  gtk_widget_show (configlabel);
  gtk_fixed_put (GTK_FIXED (fixed3), configlabel, 8, 96);
  gtk_widget_set_size_request (configlabel, 264, 24);

  configcombo = gtk_combo_box_text_new ();
  gtk_widget_show (configcombo);
  gtk_fixed_put (GTK_FIXED (fixed3), configcombo, 8, 48);
  gtk_widget_set_size_request (configcombo, 224, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 Up"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 Down"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 Left"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 Right"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 A"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 B"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 START"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 1 SELECT"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 Up"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 Down"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 Left"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 Right"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 A"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 B"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 START"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Player 2 SELECT"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Movie Save"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Movie Load"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Movie Stop"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Reset"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Flip FDS Sides"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Save state"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Load state"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Toggle fullscreen"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Stop game"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Stop game and exit NEStopia"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Start rewinder"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Stop rewinder"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Quicksave slot 1"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Quicksave slot 2"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Quickload slot 1"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Quickload slot 2"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Vs. System coin 1"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (configcombo), _("Vs. System coin 2"));

  label3 = gtk_label_new (_("Input"));
  gtk_widget_show (label3);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 2), label3);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed4);

  label15 = gtk_label_new (_("Volume:"));
  gtk_widget_show (label15);
  gtk_fixed_put (GTK_FIXED (fixed4), label15, 176, 16);
  gtk_widget_set_size_request (label15, 80, 24);

  label14 = gtk_label_new (_("Output rate:"));
  gtk_widget_show (label14);
  gtk_fixed_put (GTK_FIXED (fixed4), label14, 224, 112);
  gtk_widget_set_size_request (label14, 104, 16);

  volumelabel = gtk_label_new (_("100"));
  gtk_widget_show (volumelabel);
  gtk_fixed_put (GTK_FIXED (fixed4), volumelabel, 440, 16);
  gtk_widget_set_size_request (volumelabel, 40, 24);
  gtk_label_set_justify (GTK_LABEL (volumelabel), GTK_JUSTIFY_CENTER);

  volumescroll = gtk_scrollbar_new (GTK_ORIENTATION_HORIZONTAL, GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 100, 1, 5, 0)));
  gtk_widget_show (volumescroll);
  gtk_fixed_put (GTK_FIXED (fixed4), volumescroll, 256, 16);
  gtk_widget_set_size_request (volumescroll, 176, 24);

  surrscroll = gtk_scrollbar_new (GTK_ORIENTATION_HORIZONTAL, GTK_ADJUSTMENT (gtk_adjustment_new (0, 0, 100, 1, 5, 0)));
  gtk_widget_show (surrscroll);
  gtk_fixed_put (GTK_FIXED (fixed4), surrscroll, 8, 88);
  gtk_widget_set_size_request (surrscroll, 176, 16);

  surroundlabel = gtk_label_new (_("100"));
  gtk_widget_show (surroundlabel);
  gtk_fixed_put (GTK_FIXED (fixed4), surroundlabel, 128, 64);
  gtk_widget_set_size_request (surroundlabel, 41, 24);

  surrcheck = gtk_check_button_new_with_mnemonic (_("Lite Surround:"));
  gtk_widget_show (surrcheck);
  gtk_fixed_put (GTK_FIXED (fixed4), surrcheck, 8, 64);
  gtk_widget_set_size_request (surrcheck, 128, 24);

  excitecheck = gtk_check_button_new_with_mnemonic (_("Stereo exciter"));
  gtk_widget_show (excitecheck);
  gtk_fixed_put (GTK_FIXED (fixed4), excitecheck, 8, 112);
  gtk_widget_set_size_request (excitecheck, 128, 21);

  stereocheck = gtk_check_button_new_with_mnemonic (_("Stereo"));
  gtk_widget_show (stereocheck);
  gtk_fixed_put (GTK_FIXED (fixed4), stereocheck, 8, 40);
  gtk_widget_set_size_request (stereocheck, 118, 21);

  ratecombo = gtk_combo_box_text_new ();
  gtk_widget_show (ratecombo);
  gtk_fixed_put (GTK_FIXED (fixed4), ratecombo, 328, 104);
  gtk_widget_set_size_request (ratecombo, 144, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (ratecombo), _("11025"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (ratecombo), _("22050"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (ratecombo), _("44100"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (ratecombo), _("48000"));

  sndapicombo = gtk_combo_box_text_new ();
  gtk_widget_show (sndapicombo);
  gtk_fixed_put (GTK_FIXED (fixed4), sndapicombo, 8, 8);
  gtk_widget_set_size_request (sndapicombo, 160, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (sndapicombo), _("SDL"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (sndapicombo), _("ALSA"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (sndapicombo), _("OSS"));
  
  label4 = gtk_label_new (_("Audio"));
  gtk_widget_show (label4);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 3), label4);

  fixed7 = gtk_fixed_new ();
  gtk_widget_show (fixed7);
  gtk_container_add (GTK_CONTAINER (notebook1), fixed7);

  label12 = gtk_label_new (_("Preferred"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed7), label12, 8, 16);
  gtk_widget_set_size_request (label12, 64, 16);

  label13 = gtk_label_new (_("system"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed7), label13, 8, 32);
  gtk_widget_set_size_request (label13, 64, 16);

  label23 = gtk_label_new (_("Soft patching"));
  gtk_widget_show (label23);
  gtk_fixed_put (GTK_FIXED (fixed7), label23, 8, 88);
  gtk_widget_set_size_request (label23, 104, 16);

  favorcombo = gtk_combo_box_text_new ();
  gtk_widget_show (favorcombo);
  gtk_fixed_put (GTK_FIXED (fixed7), favorcombo, 88, 16);
  gtk_widget_set_size_request (favorcombo, 128, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (favorcombo), _("NES (NTSC)"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (favorcombo), _("NES (PAL)"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (favorcombo), _("Famicom"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (favorcombo), _("Dendy"));

  spatchcombo = gtk_combo_box_text_new ();
  gtk_widget_show (spatchcombo);
  gtk_fixed_put (GTK_FIXED (fixed7), spatchcombo, 120, 80);
  gtk_widget_set_size_request (spatchcombo, 128, 32);
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (spatchcombo), _("Off"));
  gtk_combo_box_text_append_text (GTK_COMBO_BOX_TEXT (spatchcombo), _("On"));

  misctab = gtk_label_new (_("Extras"));
  gtk_widget_show (misctab);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1), 4), misctab);

  g_signal_connect ((gpointer) mainwindow, "destroy",
                    G_CALLBACK (on_mainwindow_destroy),
                    NULL);
  g_signal_connect ((gpointer) nsfspinbutton, "change_value",
                    G_CALLBACK (on_nsfspinbutton_change_value),
                    NULL);
  g_signal_connect ((gpointer) nsfspinbutton, "value_changed",
                    G_CALLBACK (on_nsfspinbutton_value_changed),
                    NULL);
  g_signal_connect ((gpointer) open, "clicked",
                    G_CALLBACK (on_open_clicked),
                    NULL);
  g_signal_connect ((gpointer) playbutton, "clicked",
                    G_CALLBACK (on_playbutton_clicked),
                    NULL);
  g_signal_connect ((gpointer) nsfstop, "clicked",
                    G_CALLBACK (on_nsfstop_clicked),
                    NULL);
  g_signal_connect ((gpointer) nsfplay, "clicked",
                    G_CALLBACK (on_nsfplay_clicked),
                    NULL);
  g_signal_connect ((gpointer) cheatbutton, "pressed",
                    G_CALLBACK (on_cheatbutton_pressed),
                    NULL);
  g_signal_connect ((gpointer) scaleamtcombo, "changed",
                    G_CALLBACK (on_scaleamtcombo_changed),
                    NULL);
  g_signal_connect ((gpointer) scalecombo, "changed",
                    G_CALLBACK (on_scalecombo_changed),
                    NULL);
  g_signal_connect ((gpointer) check_fullscreen, "toggled",
                    G_CALLBACK (on_check_fullscreen_toggled),
                    NULL);
  g_signal_connect ((gpointer) unlimitsprcheck, "toggled",
                    G_CALLBACK (on_unlimitsprcheck_toggled),
                    NULL);
  g_signal_connect ((gpointer) videocombo, "changed",
                    G_CALLBACK (on_videocombo_changed),
                    NULL);
  g_signal_connect ((gpointer) ntsccombo, "changed",
                    G_CALLBACK (on_ntsccombo_changed),
                    NULL);
  g_signal_connect ((gpointer) rendercombo, "changed",
                    G_CALLBACK (on_rendercombo_changed),
                    NULL);
  g_signal_connect ((gpointer) controlcheck, "toggled",
                    G_CALLBACK (on_controlcheck_toggled),
                    NULL);
  g_signal_connect ((gpointer) configbutton, "clicked",
                    G_CALLBACK (on_configbutton_clicked),
                    NULL);
  g_signal_connect ((gpointer) configcombo, "changed",
                    G_CALLBACK (on_configcombo_changed),
                    NULL);
  g_signal_connect ((gpointer) volumescroll, "value_changed",
                    G_CALLBACK (on_volumescroll_value_changed),
                    NULL);
  g_signal_connect ((gpointer) volumescroll, "configure_event",
                    G_CALLBACK (on_volumescroll_configure_event),
                    NULL);
  g_signal_connect ((gpointer) surrscroll, "value_changed",
                    G_CALLBACK (on_surrscroll_value_changed),
                    NULL);
  g_signal_connect ((gpointer) surrcheck, "toggled",
                    G_CALLBACK (on_surrcheck_toggled),
                    NULL);
  g_signal_connect ((gpointer) excitecheck, "toggled",
                    G_CALLBACK (on_excitecheck_toggled),
                    NULL);
  g_signal_connect ((gpointer) stereocheck, "toggled",
                    G_CALLBACK (on_stereocheck_toggled),
                    NULL);
  g_signal_connect ((gpointer) ratecombo, "changed",
                    G_CALLBACK (on_ratecombo_changed),
                    NULL);
  g_signal_connect ((gpointer) ratecombo, "configure_event",
                    G_CALLBACK (on_ratecombo_configure_event),
                    NULL);
  g_signal_connect ((gpointer) sndapicombo, "changed",
                    G_CALLBACK (on_sndapicombo_changed),
                    NULL);
  g_signal_connect ((gpointer) favorcombo, "changed",
                    G_CALLBACK (on_favorcombo_changed),
                    NULL);
  g_signal_connect ((gpointer) spatchcombo, "changed",
                    G_CALLBACK (on_spatchcombo_changed),
                    NULL);

  atko = gtk_widget_get_accessible (mainwindow);
  atk_object_set_description (atko, _("Nintendo Entertainment System emulator controls"));


  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (mainwindow, mainwindow, "mainwindow");
  GLADE_HOOKUP_OBJECT (mainwindow, notebook1, "notebook1");
  GLADE_HOOKUP_OBJECT (mainwindow, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (mainwindow, nsfspinbutton, "nsfspinbutton");
  GLADE_HOOKUP_OBJECT (mainwindow, nsfmaker, "nsfmaker");
  GLADE_HOOKUP_OBJECT (mainwindow, nsfauthor, "nsfauthor");
  GLADE_HOOKUP_OBJECT (mainwindow, nsftitle, "nsftitle");
  GLADE_HOOKUP_OBJECT (mainwindow, open, "open");
  GLADE_HOOKUP_OBJECT (mainwindow, playbutton, "playbutton");
  GLADE_HOOKUP_OBJECT (mainwindow, nsfstop, "nsfstop");
  GLADE_HOOKUP_OBJECT (mainwindow, nsfplay, "nsfplay");
  GLADE_HOOKUP_OBJECT (mainwindow, cheatbutton, "cheatbutton");
  GLADE_HOOKUP_OBJECT (mainwindow, label1, "label1");
  GLADE_HOOKUP_OBJECT (mainwindow, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (mainwindow, scaleamtcombo, "scaleamtcombo");
  GLADE_HOOKUP_OBJECT (mainwindow, label16, "label16");
  GLADE_HOOKUP_OBJECT (mainwindow, label8, "label8");
  GLADE_HOOKUP_OBJECT (mainwindow, scalecombo, "scalecombo");
  GLADE_HOOKUP_OBJECT (mainwindow, check_fullscreen, "check_fullscreen");
  GLADE_HOOKUP_OBJECT (mainwindow, unlimitsprcheck, "unlimitsprcheck");
  GLADE_HOOKUP_OBJECT (mainwindow, videocombo, "videocombo");
  GLADE_HOOKUP_OBJECT (mainwindow, label11, "label11");
  GLADE_HOOKUP_OBJECT (mainwindow, label17, "label17");
  GLADE_HOOKUP_OBJECT (mainwindow, label10, "label10");
  GLADE_HOOKUP_OBJECT (mainwindow, ntsccombo, "ntsccombo");
  GLADE_HOOKUP_OBJECT (mainwindow, rendercombo, "rendercombo");
  GLADE_HOOKUP_OBJECT (mainwindow, label9, "label9");
  GLADE_HOOKUP_OBJECT (mainwindow, label2, "label2");
  GLADE_HOOKUP_OBJECT (mainwindow, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (mainwindow, controlcheck, "controlcheck");
  GLADE_HOOKUP_OBJECT (mainwindow, configbutton, "configbutton");
  GLADE_HOOKUP_OBJECT (mainwindow, configlabel, "configlabel");
  GLADE_HOOKUP_OBJECT (mainwindow, configcombo, "configcombo");
  GLADE_HOOKUP_OBJECT (mainwindow, label3, "label3");
  GLADE_HOOKUP_OBJECT (mainwindow, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (mainwindow, label15, "label15");
  GLADE_HOOKUP_OBJECT (mainwindow, label14, "label14");
  GLADE_HOOKUP_OBJECT (mainwindow, volumelabel, "volumelabel");
  GLADE_HOOKUP_OBJECT (mainwindow, volumescroll, "volumescroll");
  GLADE_HOOKUP_OBJECT (mainwindow, surrscroll, "surrscroll");
  GLADE_HOOKUP_OBJECT (mainwindow, surroundlabel, "surroundlabel");
  GLADE_HOOKUP_OBJECT (mainwindow, surrcheck, "surrcheck");
  GLADE_HOOKUP_OBJECT (mainwindow, excitecheck, "excitecheck");
  GLADE_HOOKUP_OBJECT (mainwindow, stereocheck, "stereocheck");
  GLADE_HOOKUP_OBJECT (mainwindow, ratecombo, "ratecombo");
  GLADE_HOOKUP_OBJECT (mainwindow, sndapicombo, "sndapicombo");
  GLADE_HOOKUP_OBJECT (mainwindow, label4, "label4");
  GLADE_HOOKUP_OBJECT (mainwindow, fixed7, "fixed7");
  GLADE_HOOKUP_OBJECT (mainwindow, label12, "label12");
  GLADE_HOOKUP_OBJECT (mainwindow, label13, "label13");
  GLADE_HOOKUP_OBJECT (mainwindow, label23, "label23");
  GLADE_HOOKUP_OBJECT (mainwindow, favorcombo, "favorcombo");
  GLADE_HOOKUP_OBJECT (mainwindow, spatchcombo, "spatchcombo");
  GLADE_HOOKUP_OBJECT (mainwindow, misctab, "misctab");

  return mainwindow;
}

GtkWidget*
create_archselect (void)
{
  GtkWidget *archselect;
  GtkWidget *fixed5;
  GtkWidget *scrolledwindow1;
  GtkWidget *archtree;
  GtkWidget *label18;
  GtkWidget *label19;
  GtkWidget *archcancel;
  GtkWidget *archok;

  archselect = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (archselect), _("Pick game in archive"));
  gtk_window_set_modal (GTK_WINDOW (archselect), TRUE);

  fixed5 = gtk_fixed_new ();
  gtk_widget_show (fixed5);
  gtk_container_add (GTK_CONTAINER (archselect), fixed5);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_fixed_put (GTK_FIXED (fixed5), scrolledwindow1, 0, 0);
  gtk_widget_set_size_request (scrolledwindow1, 336, 352);

  archtree = gtk_tree_view_new ();
  gtk_widget_show (archtree);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), archtree);
  gtk_tree_view_set_headers_visible (GTK_TREE_VIEW (archtree), FALSE);

  label18 = gtk_label_new (_("Choose an NES cartridge"));
  gtk_widget_show (label18);
  gtk_fixed_put (GTK_FIXED (fixed5), label18, 344, 8);
  gtk_widget_set_size_request (label18, 176, 24);

  label19 = gtk_label_new (_(", disc, or music file."));
  gtk_widget_show (label19);
  gtk_fixed_put (GTK_FIXED (fixed5), label19, 344, 32);
  gtk_widget_set_size_request (label19, 176, 16);

  archcancel = gtk_button_new_from_stock ("gtk-cancel");
  gtk_widget_show (archcancel);
  gtk_fixed_put (GTK_FIXED (fixed5), archcancel, 344, 304);
  gtk_widget_set_size_request (archcancel, 168, 40);

  archok = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (archok);
  gtk_fixed_put (GTK_FIXED (fixed5), archok, 344, 248);
  gtk_widget_set_size_request (archok, 168, 40);

  g_signal_connect ((gpointer) archcancel, "clicked",
                    G_CALLBACK (on_archcancel_clicked),
                    NULL);
  g_signal_connect ((gpointer) archok, "clicked",
                    G_CALLBACK (on_archok_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (archselect, archselect, "archselect");
  GLADE_HOOKUP_OBJECT (archselect, fixed5, "fixed5");
  GLADE_HOOKUP_OBJECT (archselect, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (archselect, archtree, "archtree");
  GLADE_HOOKUP_OBJECT (archselect, label18, "label18");
  GLADE_HOOKUP_OBJECT (archselect, label19, "label19");
  GLADE_HOOKUP_OBJECT (archselect, archcancel, "archcancel");
  GLADE_HOOKUP_OBJECT (archselect, archok, "archok");

  return archselect;
}

GtkWidget*
create_cheatwind (void)
{
  GtkWidget *cheatwind;
  GtkWidget *fixed6;
  GtkWidget *ggedit;
  GtkWidget *paredit;
  GtkWidget *label21;
  GtkWidget *label20;
  GtkWidget *scrolledwindow2;
  GtkWidget *cheattree;
  GtkWidget *chtggvalid;
  GtkWidget *genieok;
  GtkWidget *parok;
  GtkWidget *cheatok;
  GtkWidget *cheatopen;
  GtkWidget *cheatsave;
  GtkWidget *parvalid;
  GtkWidget *chdelete;

  cheatwind = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (cheatwind), _("Cheat Manager"));
  gtk_window_set_resizable (GTK_WINDOW (cheatwind), FALSE);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (cheatwind), fixed6);
  gtk_container_set_border_width (GTK_CONTAINER (fixed6), 8);

  ggedit = gtk_entry_new ();
  gtk_widget_show (ggedit);
  gtk_fixed_put (GTK_FIXED (fixed6), ggedit, 136, 280);
  gtk_widget_set_size_request (ggedit, 208, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (ggedit), 8226);

  paredit = gtk_entry_new ();
  gtk_widget_show (paredit);
  gtk_fixed_put (GTK_FIXED (fixed6), paredit, 136, 320);
  gtk_widget_set_size_request (paredit, 208, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (paredit), 8226);

  label21 = gtk_label_new (_("Pro-Action Rocky:"));
  gtk_widget_show (label21);
  gtk_fixed_put (GTK_FIXED (fixed6), label21, 0, 328);
  gtk_widget_set_size_request (label21, 136, 16);

  label20 = gtk_label_new (_("Game Genie:"));
  gtk_widget_show (label20);
  gtk_fixed_put (GTK_FIXED (fixed6), label20, 32, 288);
  gtk_widget_set_size_request (label20, 112, 16);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow2);
  gtk_fixed_put (GTK_FIXED (fixed6), scrolledwindow2, 8, 0);
  gtk_widget_set_size_request (scrolledwindow2, 592, 232);

  cheattree = gtk_tree_view_new ();
  gtk_widget_show (cheattree);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), cheattree);

  chtggvalid = gtk_button_new_with_mnemonic (_("Check"));
  gtk_widget_show (chtggvalid);
  gtk_fixed_put (GTK_FIXED (fixed6), chtggvalid, 352, 280);
  gtk_widget_set_size_request (chtggvalid, 64, 32);

  genieok = gtk_button_new_with_mnemonic (_("Add"));
  gtk_widget_show (genieok);
  gtk_fixed_put (GTK_FIXED (fixed6), genieok, 416, 280);
  gtk_widget_set_size_request (genieok, 64, 32);

  parok = gtk_button_new_with_mnemonic (_("Add"));
  gtk_widget_show (parok);
  gtk_fixed_put (GTK_FIXED (fixed6), parok, 416, 320);
  gtk_widget_set_size_request (parok, 64, 32);

  cheatok = gtk_button_new_from_stock ("gtk-ok");
  gtk_widget_show (cheatok);
  gtk_fixed_put (GTK_FIXED (fixed6), cheatok, 496, 336);
  gtk_widget_set_size_request (cheatok, 112, 32);

  cheatopen = gtk_button_new_with_mnemonic (_("Import..."));
  gtk_widget_show (cheatopen);
  gtk_fixed_put (GTK_FIXED (fixed6), cheatopen, 496, 240);
  gtk_widget_set_size_request (cheatopen, 112, 32);

  cheatsave = gtk_button_new_with_mnemonic (_("Export..."));
  gtk_widget_show (cheatsave);
  gtk_fixed_put (GTK_FIXED (fixed6), cheatsave, 496, 280);
  gtk_widget_set_size_request (cheatsave, 112, 32);

  parvalid = gtk_button_new_with_mnemonic (_("Check"));
  gtk_widget_show (parvalid);
  gtk_fixed_put (GTK_FIXED (fixed6), parvalid, 352, 320);
  gtk_widget_set_size_request (parvalid, 64, 32);

  chdelete = gtk_button_new_with_mnemonic (_("Remove code"));
  gtk_widget_show (chdelete);
  gtk_fixed_put (GTK_FIXED (fixed6), chdelete, 8, 240);
  gtk_widget_set_size_request (chdelete, 120, 32);

  g_signal_connect ((gpointer) chtggvalid, "clicked",
                    G_CALLBACK (on_chtggvalid_clicked),
                    NULL);
  g_signal_connect ((gpointer) genieok, "clicked",
                    G_CALLBACK (on_genieok_clicked),
                    NULL);
  g_signal_connect ((gpointer) parok, "clicked",
                    G_CALLBACK (on_parok_clicked),
                    NULL);
  g_signal_connect ((gpointer) cheatok, "clicked",
                    G_CALLBACK (on_cheatok_clicked),
                    NULL);
  g_signal_connect ((gpointer) cheatopen, "clicked",
                    G_CALLBACK (on_cheatopen_clicked),
                    NULL);
  g_signal_connect ((gpointer) cheatsave, "clicked",
                    G_CALLBACK (on_cheatsave_clicked),
                    NULL);
  g_signal_connect ((gpointer) parvalid, "clicked",
                    G_CALLBACK (on_parvalid_clicked),
                    NULL);
  g_signal_connect ((gpointer) chdelete, "clicked",
                    G_CALLBACK (on_chdelete_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (cheatwind, cheatwind, "cheatwind");
  GLADE_HOOKUP_OBJECT (cheatwind, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (cheatwind, ggedit, "ggedit");
  GLADE_HOOKUP_OBJECT (cheatwind, paredit, "paredit");
  GLADE_HOOKUP_OBJECT (cheatwind, label21, "label21");
  GLADE_HOOKUP_OBJECT (cheatwind, label20, "label20");
  GLADE_HOOKUP_OBJECT (cheatwind, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (cheatwind, cheattree, "cheattree");
  GLADE_HOOKUP_OBJECT (cheatwind, chtggvalid, "chtggvalid");
  GLADE_HOOKUP_OBJECT (cheatwind, genieok, "genieok");
  GLADE_HOOKUP_OBJECT (cheatwind, parok, "parok");
  GLADE_HOOKUP_OBJECT (cheatwind, cheatok, "cheatok");
  GLADE_HOOKUP_OBJECT (cheatwind, cheatopen, "cheatopen");
  GLADE_HOOKUP_OBJECT (cheatwind, cheatsave, "cheatsave");
  GLADE_HOOKUP_OBJECT (cheatwind, parvalid, "parvalid");
  GLADE_HOOKUP_OBJECT (cheatwind, chdelete, "chdelete");

  return cheatwind;
}

