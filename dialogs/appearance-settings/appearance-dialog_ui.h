/* automatically generated from appearance-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (appearance_dialog_ui)
#endif
#ifdef __GNUC__
static const char appearance_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char appearance_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.20\"/><requires lib=\"libxfce4ui-2\" version=\"4.13\"/"
  "><object class=\"GtkFileFilter\" id=\"filefilter1\"><patterns><pattern>"
  "*.tar</pattern><pattern>*.zip</pattern></patterns></object><object clas"
  "s=\"GtkImage\" id=\"image1\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"icon_name"
  "\">window-close-symbolic</property></object><object class=\"GtkImage\" "
  "id=\"image2\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">False</property><property name=\"icon_name\">help-browser"
  "</property></object><object class=\"GtkImage\" id=\"image3\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">False</pro"
  "perty><property name=\"icon_name\">list-add-symbolic</property></object"
  "><object class=\"GtkImage\" id=\"image4\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"icon_name\">list-add-symbolic</property></object><object class=\"Gt"
  "kListStore\" id=\"liststore1\"><columns><column type=\"gchararray\"/></"
  "columns><data><row><col id=\"0\" translatable=\"yes\">None</col></row><"
  "row><col id=\"0\" translatable=\"yes\">Slight</col></row><row><col id=\""
  "0\" translatable=\"yes\">Medium</col></row><row><col id=\"0\" translata"
  "ble=\"yes\">Full</col></row></data></object><object class=\"GtkListStor"
  "e\" id=\"liststore2\"><columns><column type=\"gchararray\"/></columns><"
  "data><row><col id=\"0\" translatable=\"yes\">Icons</col></row><row><col"
  " id=\"0\" translatable=\"yes\">Text</col></row><row><col id=\"0\" trans"
  "latable=\"yes\">Text under icons</col></row><row><col id=\"0\" translat"
  "able=\"yes\">Text next to icons</col></row></data></object><object clas"
  "s=\"GtkListStore\" id=\"liststore3\"><columns><column type=\"gint\"/><c"
  "olumn type=\"gchararray\"/></columns><data><row><col id=\"0\">1</col><c"
  "ol id=\"1\" translatable=\"yes\">1x (no scaling)</col></row><row><col i"
  "d=\"0\">2</col><col id=\"1\" translatable=\"yes\">2x</col></row></data>"
  "</object><object class=\"GtkAdjustment\" id=\"xft_custom_dpi\"><propert"
  "y name=\"lower\">48</property><property name=\"upper\">1000</property><"
  "property name=\"value\">96</property><property name=\"step_increment\">"
  "1</property><property name=\"page_increment\">10</property></object><ob"
  "ject class=\"GtkListStore\" id=\"xft_rgba_store\"><columns><column type"
  "=\"GdkPixbuf\"/><column type=\"gchararray\"/></columns></object><object"
  " class=\"XfceTitledDialog\" id=\"dialog\"><property name=\"can_focus\">"
  "False</property><property name=\"title\" translatable=\"yes\">Appearanc"
  "e</property><property name=\"window_position\">center-on-parent</proper"
  "ty><property name=\"default_width\">400</property><property name=\"defa"
  "ult_height\">540</property><property name=\"icon_name\">org.xfce.settin"
  "gs.appearance</property><property name=\"type_hint\">dialog</property><"
  "child internal-child=\"vbox\"><object class=\"GtkBox\" id=\"dialog-vbox"
  "1\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"orientation\">vertical</property><"
  "property name=\"spacing\">2</property><child internal-child=\"action_ar"
  "ea\"><object class=\"GtkButtonBox\" id=\"dialog-action_area1\"><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">False</p"
  "roperty><property name=\"layout_style\">end</property><child><object cl"
  "ass=\"GtkButton\" id=\"button1\"><property name=\"label\" translatable="
  "\"yes\">_Close</property><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">True</property><property name=\"receives_defau"
  "lt\">True</property><property name=\"image\">image1</property><property"
  " name=\"use_underline\">True</property></object><packing><property name"
  "=\"expand\">False</property><property name=\"fill\">False</property><pr"
  "operty name=\"position\">0</property></packing></child><child><object c"
  "lass=\"GtkButton\" id=\"button2\"><property name=\"label\" translatable"
  "=\"yes\">_Help</property><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">True</property><property name=\"receives_defau"
  "lt\">True</property><property name=\"image\">image2</property><property"
  " name=\"use_underline\">True</property></object><packing><property name"
  "=\"expand\">False</property><property name=\"fill\">False</property><pr"
  "operty name=\"position\">0</property><property name=\"secondary\">True<"
  "/property></packing></child></object><packing><property name=\"expand\""
  ">False</property><property name=\"fill\">True</property><property name="
  "\"pack_type\">end</property><property name=\"position\">0</property></p"
  "acking></child><child><object class=\"GtkNotebook\" id=\"plug-child\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">T"
  "rue</property><property name=\"border_width\">6</property><child><objec"
  "t class=\"GtkBox\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"border_width\">12</"
  "property><property name=\"orientation\">vertical</property><child><obje"
  "ct class=\"GtkScrolledWindow\" id=\"scrolledwindow2\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"vexpand\">True</property><property name=\"shadow_type\">"
  "etched-in</property><child><object class=\"GtkViewport\"><property name"
  "=\"visible\">True</property><property name=\"can_focus\">False</propert"
  "y><child><object class=\"GtkTreeView\" id=\"gtk_theme_treeview\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">True</"
  "property><property name=\"headers_visible\">False</property><property n"
  "ame=\"show_expanders\">False</property><child internal-child=\"selectio"
  "n\"><object class=\"GtkTreeSelection\" id=\"treeview-selection1\"/></ch"
  "ild></object></child></object></child></object><packing><property name="
  "\"expand\">False</property><property name=\"fill\">True</property><prop"
  "erty name=\"position\">0</property></packing></child><child><object cla"
  "ss=\"GtkBox\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">False</property><property name=\"orientation\">vertical</"
  "property><child><object class=\"GtkButton\" id=\"install_gtk_theme\"><p"
  "roperty name=\"label\" translatable=\"yes\">_Add</property><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">True</proper"
  "ty><property name=\"receives_default\">True</property><property name=\""
  "halign\">start</property><property name=\"image\">image3</property><pro"
  "perty name=\"use_underline\">True</property></object><packing><property"
  " name=\"expand\">False</property><property name=\"fill\">True</property"
  "><property name=\"position\">0</property></packing></child><style><clas"
  "s name=\"inline-toolbar\"/></style></object><packing><property name=\"e"
  "xpand\">False</property><property name=\"fill\">True</property><propert"
  "y name=\"position\">1</property></packing></child></object></child><chi"
  "ld type=\"tab\"><object class=\"GtkLabel\" id=\"label1\"><property name"
  "=\"visible\">True</property><property name=\"can_focus\">False</propert"
  "y><property name=\"label\" translatable=\"yes\">St_yle</property><prope"
  "rty name=\"use_underline\">True</property></object><packing><property n"
  "ame=\"tab_fill\">False</property></packing></child><child><object class"
  "=\"GtkBox\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"border_width\">12</propert"
  "y><property name=\"orientation\">vertical</property><child><object clas"
  "s=\"GtkScrolledWindow\" id=\"scrolledwindow1\"><property name=\"visible"
  "\">True</property><property name=\"can_focus\">True</property><property"
  " name=\"shadow_type\">etched-in</property><child><object class=\"GtkTre"
  "eView\" id=\"icon_theme_treeview\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">True</property><property name=\"head"
  "ers_visible\">False</property><property name=\"show_expanders\">False</"
  "property><child internal-child=\"selection\"><object class=\"GtkTreeSel"
  "ection\" id=\"treeview-selection2\"/></child></object></child></object>"
  "<packing><property name=\"expand\">True</property><property name=\"fill"
  "\">True</property><property name=\"position\">0</property></packing></c"
  "hild><child><object class=\"GtkBox\"><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">False</property><property name=\"o"
  "rientation\">vertical</property><child><object class=\"GtkButton\" id=\""
  "install_icon_theme\"><property name=\"label\" translatable=\"yes\">_Add"
  "</property><property name=\"visible\">True</property><property name=\"c"
  "an_focus\">True</property><property name=\"receives_default\">True</pro"
  "perty><property name=\"halign\">start</property><property name=\"image\""
  ">image4</property><property name=\"use_underline\">True</property></obj"
  "ect><packing><property name=\"expand\">False</property><property name=\""
  "fill\">True</property><property name=\"position\">0</property></packing"
  "></child><style><class name=\"inline-toolbar\"/></style></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"fill\">Tr"
  "ue</property><property name=\"position\">1</property></packing></child>"
  "</object><packing><property name=\"position\">1</property></packing></c"
  "hild><child type=\"tab\"><object class=\"GtkLabel\" id=\"label2\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">False"
  "</property><property name=\"label\" translatable=\"yes\">_Icons</proper"
  "ty><property name=\"use_underline\">True</property></object><packing><p"
  "roperty name=\"position\">1</property><property name=\"tab_fill\">False"
  "</property></packing></child><child><object class=\"GtkScrolledWindow\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">True</property><child><object class=\"GtkViewport\"><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">False</property><c"
  "hild><object class=\"GtkBox\" id=\"vbox3\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">False</property><property na"
  "me=\"border_width\">12</property><property name=\"orientation\">vertica"
  "l</property><property name=\"spacing\">18</property><child><object clas"
  "s=\"GtkFrame\" id=\"frame3\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"label_xal"
  "ign\">0</property><property name=\"shadow_type\">none</property><child>"
  "<object class=\"GtkAlignment\" id=\"alignment3\"><property name=\"visib"
  "le\">True</property><property name=\"can_focus\">False</property><prope"
  "rty name=\"top_padding\">6</property><property name=\"left_padding\">12"
  "</property><child><object class=\"GtkFontButton\" id=\"gtk_fontname_but"
  "ton\"><property name=\"visible\">True</property><property name=\"can_fo"
  "cus\">True</property><property name=\"receives_default\">True</property"
  "><property name=\"tooltip_text\" translatable=\"yes\">This font will be"
  " used as the default font used when drawing user interface text</proper"
  "ty><property name=\"font\">Sans 12</property><property name=\"title\" t"
  "ranslatable=\"yes\">Select a default font</property></object></child></"
  "object></child><child type=\"label\"><object class=\"GtkLabel\" id=\"la"
  "bel7\"><property name=\"visible\">True</property><property name=\"can_f"
  "ocus\">False</property><property name=\"label\" translatable=\"yes\">De"
  "fault Fon_t</property><property name=\"use_underline\">True</property><"
  "property name=\"mnemonic_widget\">gtk_fontname_button</property><attrib"
  "utes><attribute name=\"weight\" value=\"bold\"/></attributes></object><"
  "/child></object><packing><property name=\"expand\">False</property><pro"
  "perty name=\"fill\">True</property><property name=\"position\">0</prope"
  "rty></packing></child><child><object class=\"GtkFrame\" id=\"frame7\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"label_xalign\">0</property><property na"
  "me=\"shadow_type\">none</property><child><object class=\"GtkAlignment\""
  " id=\"alignment7\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"top_padding\">6</pr"
  "operty><property name=\"left_padding\">12</property><child><object clas"
  "s=\"GtkFontButton\" id=\"gtk_monospace_fontname_button\"><property name"
  "=\"visible\">True</property><property name=\"can_focus\">True</property"
  "><property name=\"receives_default\">True</property><property name=\"to"
  "oltip_text\" translatable=\"yes\">This font will be used as the default"
  " monospace font, for example by terminal emulators.</property><property"
  " name=\"font\">Sans 12</property><property name=\"title\" translatable="
  "\"yes\">Select a default monospace font</property></object></child></ob"
  "ject></child><child type=\"label\"><object class=\"GtkLabel\" id=\"labe"
  "l14\"><property name=\"visible\">True</property><property name=\"can_fo"
  "cus\">False</property><property name=\"label\" translatable=\"yes\">Def"
  "ault _Monospace Font</property><property name=\"use_underline\">True</p"
  "roperty><property name=\"mnemonic_widget\">gtk_monospace_fontname_butto"
  "n</property><attributes><attribute name=\"weight\" value=\"bold\"/></at"
  "tributes></object></child></object><packing><property name=\"expand\">F"
  "alse</property><property name=\"fill\">True</property><property name=\""
  "position\">1</property></packing></child><child><object class=\"GtkFram"
  "e\" id=\"frame4\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"label_xalign\">0</pr"
  "operty><property name=\"shadow_type\">none</property><child><object cla"
  "ss=\"GtkAlignment\"><property name=\"visible\">True</property><property"
  " name=\"can_focus\">False</property><property name=\"top_padding\">6</p"
  "roperty><property name=\"left_padding\">12</property><child><object cla"
  "ss=\"GtkBox\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">False</property><property name=\"orientation\">vertical</"
  "property><property name=\"spacing\">6</property><child><object class=\""
  "GtkCheckButton\" id=\"xft_antialias_check_button\"><property name=\"lab"
  "el\" translatable=\"yes\">_Enable anti-aliasing</property><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">True</propert"
  "y><property name=\"receives_default\">False</property><property name=\""
  "tooltip_text\" translatable=\"yes\">Anti-aliasing, or font smoothing, c"
  "an improve the look of text on the screen</property><property name=\"ha"
  "lign\">start</property><property name=\"use_underline\">True</property>"
  "<property name=\"active\">True</property><property name=\"draw_indicato"
  "r\">True</property></object><packing><property name=\"expand\">False</p"
  "roperty><property name=\"fill\">True</property><property name=\"positio"
  "n\">0</property></packing></child><child><object class=\"GtkAlignment\""
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">False</property><property name=\"left_padding\">12</property><child><o"
  "bject class=\"GtkGrid\" id=\"grid1\"><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">False</property><property name=\"r"
  "ow_spacing\">6</property><property name=\"column_spacing\">12</property"
  "><child><object class=\"GtkLabel\" id=\"label10\"><property name=\"visi"
  "ble\">True</property><property name=\"can_focus\">False</property><prop"
  "erty name=\"halign\">start</property><property name=\"label\" translata"
  "ble=\"yes\">Hintin_g:</property><property name=\"use_underline\">True</"
  "property></object><packing><property name=\"left_attach\">0</property><"
  "property name=\"top_attach\">0</property></packing></child><child><obje"
  "ct class=\"GtkComboBox\" id=\"xft_hinting_style_combo_box\"><property n"
  "ame=\"visible\">True</property><property name=\"can_focus\">False</prop"
  "erty><property name=\"tooltip_text\" translatable=\"yes\">Many fonts co"
  "ntain information that provides extra hints as to how best draw the fon"
  "t; pick whichever looks best according to personal preference</property"
  "><property name=\"hexpand\">True</property><property name=\"model\">lis"
  "tstore1</property><child><object class=\"GtkCellRendererText\" id=\"cel"
  "lrenderertext1\"/><attributes><attribute name=\"text\">0</attribute></a"
  "ttributes></child></object><packing><property name=\"left_attach\">1</p"
  "roperty><property name=\"top_attach\">0</property></packing></child><ch"
  "ild><object class=\"GtkLabel\" id=\"label11\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">False</property><property "
  "name=\"halign\">start</property><property name=\"label\" translatable=\""
  "yes\">Sub-_pixel order:</property><property name=\"use_underline\">True"
  "</property></object><packing><property name=\"left_attach\">0</property"
  "><property name=\"top_attach\">1</property></packing></child><child><ob"
  "ject class=\"GtkComboBox\" id=\"xft_rgba_combo_box\"><property name=\"v"
  "isible\">True</property><property name=\"can_focus\">False</property><p"
  "roperty name=\"tooltip_text\" translatable=\"yes\">Font quality on a TF"
  "T or LCD screen can be greatly improved by choosing the correct sub-pix"
  "el order of the screen</property><property name=\"hexpand\">True</prope"
  "rty><property name=\"model\">xft_rgba_store</property><child><object cl"
  "ass=\"GtkCellRendererText\" id=\"cellrenderertext3\"/><attributes><attr"
  "ibute name=\"text\">1</attribute></attributes></child><child><object cl"
  "ass=\"GtkCellRendererPixbuf\" id=\"cellrendererpixbuf1\"/><attributes><"
  "attribute name=\"pixbuf\">0</attribute></attributes></child></object><p"
  "acking><property name=\"left_attach\">1</property><property name=\"top_"
  "attach\">1</property></packing></child></object></child></object><packi"
  "ng><property name=\"expand\">False</property><property name=\"fill\">Tr"
  "ue</property><property name=\"position\">1</property></packing></child>"
  "</object></child></object></child><child type=\"label\"><object class=\""
  "GtkLabel\" id=\"label8\"><property name=\"visible\">True</property><pro"
  "perty name=\"can_focus\">False</property><property name=\"label\" trans"
  "latable=\"yes\">Rendering</property><attributes><attribute name=\"weigh"
  "t\" value=\"bold\"/></attributes></object></child></object><packing><pr"
  "operty name=\"expand\">False</property><property name=\"fill\">True</pr"
  "operty><property name=\"position\">2</property></packing></child><child"
  "><object class=\"GtkFrame\" id=\"frame5\"><property name=\"visible\">Tr"
  "ue</property><property name=\"can_focus\">False</property><property nam"
  "e=\"label_xalign\">0</property><property name=\"shadow_type\">none</pro"
  "perty><child><object class=\"GtkAlignment\" id=\"alignment5\"><property"
  " name=\"visible\">True</property><property name=\"can_focus\">False</pr"
  "operty><property name=\"top_padding\">6</property><property name=\"left"
  "_padding\">12</property><child><object class=\"GtkBox\" id=\"hbox1\"><p"
  "roperty name=\"visible\">True</property><property name=\"can_focus\">Fa"
  "lse</property><property name=\"spacing\">12</property><child><object cl"
  "ass=\"GtkCheckButton\" id=\"xft_custom_dpi_check_button\"><property nam"
  "e=\"label\" translatable=\"yes\">Custom _DPI setting:</property><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">True</p"
  "roperty><property name=\"receives_default\">False</property><property n"
  "ame=\"tooltip_text\" translatable=\"yes\">Override the detected monitor"
  " resolution if fonts look too large or too small</property><property na"
  "me=\"use_underline\">True</property><property name=\"draw_indicator\">T"
  "rue</property></object><packing><property name=\"expand\">False</proper"
  "ty><property name=\"fill\">True</property><property name=\"position\">0"
  "</property></packing></child><child><object class=\"GtkSpinButton\" id="
  "\"xft_custom_dpi_spin_button\"><property name=\"visible\">True</propert"
  "y><property name=\"sensitive\">False</property><property name=\"can_foc"
  "us\">True</property><property name=\"width_chars\">6</property><propert"
  "y name=\"primary_icon_activatable\">False</property><property name=\"se"
  "condary_icon_activatable\">False</property><property name=\"adjustment\""
  ">xft_custom_dpi</property><property name=\"snap_to_ticks\">True</proper"
  "ty><property name=\"numeric\">True</property><property name=\"update_po"
  "licy\">if-valid</property></object><packing><property name=\"expand\">F"
  "alse</property><property name=\"fill\">True</property><property name=\""
  "position\">1</property></packing></child></object></child></object></ch"
  "ild><child type=\"label\"><object class=\"GtkLabel\" id=\"label9\"><pro"
  "perty name=\"visible\">True</property><property name=\"can_focus\">Fals"
  "e</property><property name=\"label\" translatable=\"yes\">DPI</property"
  "><attributes><attribute name=\"weight\" value=\"bold\"/></attributes></"
  "object></child></object><packing><property name=\"expand\">False</prope"
  "rty><property name=\"fill\">True</property><property name=\"position\">"
  "3</property></packing></child></object></child></object></child></objec"
  "t><packing><property name=\"position\">2</property></packing></child><c"
  "hild type=\"tab\"><object class=\"GtkLabel\" id=\"label3\"><property na"
  "me=\"visible\">True</property><property name=\"can_focus\">False</prope"
  "rty><property name=\"label\" translatable=\"yes\">_Fonts</property><pro"
  "perty name=\"use_underline\">True</property></object><packing><property"
  " name=\"position\">2</property><property name=\"tab_fill\">False</prope"
  "rty></packing></child><child><object class=\"GtkScrolledWindow\"><prope"
  "rty name=\"visible\">True</property><property name=\"can_focus\">True</"
  "property><child><object class=\"GtkViewport\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">False</property><child><ob"
  "ject class=\"GtkBox\" id=\"vbox1\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">False</property><property name=\"bor"
  "der_width\">12</property><property name=\"orientation\">vertical</prope"
  "rty><property name=\"spacing\">18</property><child><object class=\"GtkF"
  "rame\" id=\"frame1\"><property name=\"visible\">True</property><propert"
  "y name=\"can_focus\">False</property><property name=\"label_xalign\">0<"
  "/property><property name=\"shadow_type\">none</property><child><object "
  "class=\"GtkAlignment\" id=\"alignment1\"><property name=\"visible\">Tru"
  "e</property><property name=\"can_focus\">False</property><property name"
  "=\"top_padding\">6</property><property name=\"left_padding\">12</proper"
  "ty><child><object class=\"GtkBox\" id=\"vbox2\"><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"orientation\">vertical</property><property name=\"spacing\">6"
  "</property><child><object class=\"GtkCheckButton\" id=\"gtk_button_imag"
  "es_check_button\"><property name=\"label\" translatable=\"yes\">Show im"
  "ages on _buttons</property><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">True</property><property name=\"receives_def"
  "ault\">False</property><property name=\"tooltip_text\" translatable=\"y"
  "es\">Specify whether icons should be displayed next to text in buttons<"
  "/property><property name=\"halign\">start</property><property name=\"us"
  "e_underline\">True</property><property name=\"draw_indicator\">True</pr"
  "operty></object><packing><property name=\"expand\">True</property><prop"
  "erty name=\"fill\">True</property><property name=\"position\">0</proper"
  "ty></packing></child><child><object class=\"GtkCheckButton\" id=\"gtk_m"
  "enu_images_check_button\"><property name=\"label\" translatable=\"yes\""
  ">Show images in _menus</property><property name=\"visible\">True</prope"
  "rty><property name=\"can_focus\">True</property><property name=\"receiv"
  "es_default\">False</property><property name=\"tooltip_text\" translatab"
  "le=\"yes\">Specify whether icons should be displayed next to items in m"
  "enus</property><property name=\"halign\">start</property><property name"
  "=\"use_underline\">True</property><property name=\"draw_indicator\">Tru"
  "e</property></object><packing><property name=\"expand\">True</property>"
  "<property name=\"fill\">True</property><property name=\"position\">1</p"
  "roperty></packing></child><child><object class=\"GtkCheckButton\" id=\""
  "gtk_caneditaccels_check_button\"><property name=\"label\" translatable="
  "\"yes\">Enable e_ditable accelerators</property><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">True</property><propert"
  "y name=\"receives_default\">False</property><property name=\"tooltip_te"
  "xt\" translatable=\"yes\">If selected, keyboard shortcuts for menu item"
  "s can be changed by hovering the mouse over the menu item and pressing "
  "the new key combination for the shortcut</property><property name=\"hal"
  "ign\">start</property><property name=\"use_underline\">True</property><"
  "property name=\"draw_indicator\">True</property></object><packing><prop"
  "erty name=\"expand\">True</property><property name=\"fill\">True</prope"
  "rty><property name=\"position\">2</property></packing></child></object>"
  "</child></object></child><child type=\"label\"><object class=\"GtkLabel"
  "\" id=\"label5\"><property name=\"visible\">True</property><property na"
  "me=\"can_focus\">False</property><property name=\"label\" translatable="
  "\"yes\">Menus and Buttons</property><attributes><attribute name=\"weigh"
  "t\" value=\"bold\"/></attributes></object></child></object><packing><pr"
  "operty name=\"expand\">False</property><property name=\"fill\">True</pr"
  "operty><property name=\"position\">1</property></packing></child><child"
  "><object class=\"GtkFrame\" id=\"event_sounds_frame\"><property name=\""
  "can_focus\">False</property><property name=\"label_xalign\">0</property"
  "><property name=\"shadow_type\">none</property><child><object class=\"G"
  "tkAlignment\" id=\"alignment6\"><property name=\"visible\">True</proper"
  "ty><property name=\"can_focus\">False</property><property name=\"top_pa"
  "dding\">6</property><property name=\"left_padding\">12</property><child"
  "><object class=\"GtkBox\" id=\"vbox4\"><property name=\"visible\">True<"
  "/property><property name=\"can_focus\">False</property><property name=\""
  "orientation\">vertical</property><property name=\"spacing\">6</property"
  "><child><object class=\"GtkCheckButton\" id=\"enable_event_sounds_check"
  "_button\"><property name=\"label\" translatable=\"yes\">Enable _event s"
  "ounds</property><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">True</property><property name=\"receives_default\">Fals"
  "e</property><property name=\"tooltip_text\" translatable=\"yes\">Enable"
  " or disable event sounds globally (requires \"Canberra\" support)</prop"
  "erty><property name=\"halign\">start</property><property name=\"use_und"
  "erline\">True</property><property name=\"draw_indicator\">True</propert"
  "y></object><packing><property name=\"expand\">False</property><property"
  " name=\"fill\">True</property><property name=\"position\">0</property><"
  "/packing></child><child><object class=\"GtkCheckButton\" id=\"enable_in"
  "put_feedback_sounds_button\"><property name=\"label\" translatable=\"ye"
  "s\">Enable input feedbac_k sounds</property><property name=\"visible\">"
  "True</property><property name=\"can_focus\">True</property><property na"
  "me=\"receives_default\">False</property><property name=\"tooltip_text\""
  " translatable=\"yes\">Specify whether mouse clicks and other user input"
  " will cause event sounds to play</property><property name=\"halign\">st"
  "art</property><property name=\"use_underline\">True</property><property"
  " name=\"draw_indicator\">True</property></object><packing><property nam"
  "e=\"expand\">False</property><property name=\"fill\">True</property><pr"
  "operty name=\"position\">3</property></packing></child></object></child"
  "></object></child><child type=\"label\"><object class=\"GtkLabel\" id=\""
  "label4\"><property name=\"visible\">True</property><property name=\"can"
  "_focus\">False</property><property name=\"label\" translatable=\"yes\">"
  "Event sounds</property><attributes><attribute name=\"weight\" value=\"b"
  "old\"/></attributes></object></child></object><packing><property name=\""
  "expand\">False</property><property name=\"fill\">True</property><proper"
  "ty name=\"position\">2</property></packing></child><child><object class"
  "=\"GtkFrame\" id=\"frame6\"><property name=\"visible\">True</property><"
  "property name=\"can_focus\">False</property><property name=\"label_xali"
  "gn\">0</property><property name=\"shadow_type\">none</property><child><"
  "object class=\"GtkAlignment\" id=\"alignment4\"><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">False</property><proper"
  "ty name=\"top_padding\">6</property><property name=\"left_padding\">12<"
  "/property><child><object class=\"GtkComboBox\" id=\"gdk_window_scaling_"
  "factor_combo_box\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property><property name=\"tooltip_text\" tran"
  "slatable=\"yes\">Adjust the system-wide display scaling</property><prop"
  "erty name=\"model\">liststore3</property><property name=\"active\">0</p"
  "roperty><property name=\"id_column\">0</property><child><object class=\""
  "GtkCellRendererText\" id=\"cellrenderertext4\"/><attributes><attribute "
  "name=\"text\">1</attribute></attributes></child></object></child></obje"
  "ct></child><child type=\"label\"><object class=\"GtkLabel\" id=\"label1"
  "3\"><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">False</property><property name=\"label\" translatable=\"yes\">_Wind"
  "ow Scaling</property><property name=\"use_underline\">True</property><p"
  "roperty name=\"mnemonic_widget\">gdk_window_scaling_factor_combo_box</p"
  "roperty><attributes><attribute name=\"weight\" value=\"bold\"/></attrib"
  "utes></object></child></object><packing><property name=\"expand\">False"
  "</property><property name=\"fill\">True</property><property name=\"posi"
  "tion\">3</property></packing></child></object></child></object></child>"
  "</object><packing><property name=\"position\">3</property></packing></c"
  "hild><child type=\"tab\"><object class=\"GtkLabel\" id=\"label12\"><pro"
  "perty name=\"visible\">True</property><property name=\"can_focus\">Fals"
  "e</property><property name=\"label\" translatable=\"yes\">Setti_ngs</pr"
  "operty><property name=\"use_underline\">True</property></object><packin"
  "g><property name=\"position\">3</property><property name=\"tab_fill\">F"
  "alse</property></packing></child></object><packing><property name=\"exp"
  "and\">True</property><property name=\"fill\">True</property><property n"
  "ame=\"position\">1</property></packing></child></object></child><action"
  "-widgets><action-widget response=\"0\">button1</action-widget><action-w"
  "idget response=\"-11\">button2</action-widget></action-widgets></object"
  "></interface>"
};

static const unsigned appearance_dialog_ui_length = 28659u;

