#include "splashkit.h"
#include <vector>

enum text_alignment
{
    LEFT_ALIGNED,
    CENTER_ALIGNED,
    RIGHT_ALIGNED
};

enum form_action
{
    NONE,
    CLEAR,
    SUBMIT
};

struct input_area
{
    double position_x;
    double position_y;
    double width;
    double height;
};

struct input_circle_area
{
    double position_x;
    double position_y;
    double radius;
};

struct input_font
{
    font font_name;
    double font_size;
    color font_color;
};

struct input_border
{
    color border_color;
    double border_width;
    color border_selected_color;
};

struct textbox_text
{
    string value;
    int max_length;
    string placeholder;
    input_font attributes;
    bool numbers_only;
    text_alignment alignment;
};

struct textbox
{
    string name;
    input_area area;
    textbox_text text;
    input_border border;
    color background_color;
    bool selected;
};

struct button
{
    string name;
    string text;
    input_area area;
    input_font style;
    input_border border;
    color background_color;
    form_action action;
};

struct checkbox
{
    string name;
    string label;
    input_area area;
    input_font style;
    input_border border;
    color background_color;
    bool checked;
};

struct radio
{
    string name;
    string label;
    input_circle_area area;
    input_font style;
    input_border border;
    color background_color;
};

struct radio_group
{
    string name;
    int checked_radio;
    vector<radio> radio_buttons;
};

struct form
{
    vector<textbox> textboxes;
    vector<checkbox> checkboxes;
    vector<radio_group> radio_groups;
    vector<button> buttons;
    bool is_submitted;
};

input_area new_input_area(double position_x, double position_y, double width, double height);
input_area new_input_area(point_2d point, double width, double height);
input_area new_input_area(double position_x, double position_y, point_2d point);
input_area new_input_area(point_2d point, point_2d point_2);

input_circle_area new_input_circle_area(double position_x, double position_y, double radius);
input_circle_area new_input_circle_area(point_2d point, double radius);

input_font new_input_font(string font_name, double font_size, color font_color);
input_font new_input_font(string font_name, color font_color);
input_font new_input_font(string font_name, double font_size);
input_font new_input_font(string font_name);
input_font new_input_font(font font_name, double font_size, color font_color);
input_font new_input_font(font font_name, color font_color);
input_font new_input_font(font font_name, double font_size);
input_font new_input_font(font font_name);

textbox_text new_textbox_text(string value, int max_length, string placeholder, input_font attributes, bool numbers_only, text_alignment alignment);
textbox_text new_textbox_text(string value, int max_length, string placeholder, input_font attributes);
textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes);
textbox_text new_textbox_text(string value, int max_length, input_font attributes);
textbox_text new_textbox_text(int max_length, input_font attributes);
textbox_text new_textbox_text(string value, string placeholder, input_font attributes);
textbox_text new_textbox_text(string placeholder, input_font attributes);
textbox_text new_textbox_text(input_font attributes);
textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes, bool numbers_only);
textbox_text new_textbox_text(string value, int max_length, input_font attributes, bool numbers_only);
textbox_text new_textbox_text(int max_length, input_font attributes, bool numbers_only);
textbox_text new_textbox_text(string value, string placeholder, input_font attributes, bool numbers_only);
textbox_text new_textbox_text(string placeholder, input_font attributes, bool numbers_only);
textbox_text new_textbox_text(input_font attributes, bool numbers_only);
textbox_text new_textbox_text(string value, int max_length, string placeholder, input_font attributes, bool numbers_only);
textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes, text_alignment alignment);
textbox_text new_textbox_text(string value, int max_length, input_font attributes, text_alignment alignment);
textbox_text new_textbox_text(int max_length, input_font attributes, text_alignment alignment);
textbox_text new_textbox_text(string value, string placeholder, input_font attributes, text_alignment alignment);
textbox_text new_textbox_text(string placeholder, input_font attributes, text_alignment alignment);
textbox_text new_textbox_text(input_font attributes, text_alignment alignment);
textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes, bool numbers_only, text_alignment alignment);
textbox_text new_textbox_text(string value, int max_length, input_font attributes, bool numbers_only, text_alignment alignment);
textbox_text new_textbox_text(int max_length, input_font attributes, bool numbers_only, text_alignment alignment);
textbox_text new_textbox_text(string value, string placeholder, input_font attributes, bool numbers_only, text_alignment alignment);
textbox_text new_textbox_text(string placeholder, input_font attributes, bool numbers_only, text_alignment alignment);
textbox_text new_textbox_text(input_font attributes, bool numbers_only, text_alignment alignment);

input_border new_input_border(color border_color, double border_width, color border_selected_color);
input_border new_input_border(double border_width, color border_selected_color);
input_border new_input_border(color border_color, color border_selected_color);
input_border new_input_border(color border_color, double border_width);
input_border new_input_border(color border_color);
input_border new_input_border(double border_width);
input_border new_input_border();

textbox new_textbox(string name, input_area area, textbox_text text, input_border border, color background_color, bool selected);
textbox new_textbox(string name, input_area area, textbox_text text, input_border border, color background_color);
textbox new_textbox(string name, input_area area, textbox_text text, input_border border, bool selected);
textbox new_textbox(string name, input_area area, textbox_text text, input_border border);
textbox new_textbox(string name, input_area area, textbox_text text, color background_color, bool selected);
textbox new_textbox(string name, input_area area, textbox_text text, bool selected);
textbox new_textbox(string name, input_area area, textbox_text text, color background_color);
textbox new_textbox(string name, input_area area, textbox_text text);

void draw_textbox(textbox textbox_to_draw);
void update_textbox(textbox &textbox_to_update);
void clear_textbox(textbox &textbox_to_clear);

checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border, color background_color, bool checked);
checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border, color background_color);
checkbox new_checkbox(string name, string label, input_area area, input_font style, color background_color, bool checked);
checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border, bool checked);
checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border);
checkbox new_checkbox(string name, string label, input_area area, input_font style, color background_color);
checkbox new_checkbox(string name, string label, input_area area, input_font style, bool checked);
checkbox new_checkbox(string name, string label, input_area area, input_font style);

void draw_checkbox(checkbox checkbox_to_draw);
void update_checkbox(checkbox &checkbox_to_update);
void clear_checkbox(checkbox &checkbox_to_clear);

radio new_radio(string name, string label, input_circle_area area, input_font style, input_border border, color background_color);
radio new_radio(string name, string label, input_circle_area area, input_font style, input_border border);
radio new_radio(string name, string label, input_circle_area area, input_font style, color background_color);
radio new_radio(string name, string label, input_circle_area area, input_font style);

void draw_radio(radio radio_to_draw, bool is_checked);
bool radio_clicked(radio radio_to_check);

radio_group new_radio_group(string name, int checked_radio, vector<radio> radio_buttons);
radio_group new_radio_group(string name, vector<radio> radio_buttons);

void draw_radio_group(radio_group group_to_draw);
void update_radio_group(radio_group &group_to_update);
void clear_radio_group(radio_group &group_to_clear);

button new_button(string name, string text, input_area area, input_font style, input_border border, color background_color, form_action action);
button new_button(string name, string text, input_area area, input_font style, color background_color, form_action action);
button new_button(string name, string text, input_area area, input_font style, form_action action);
button new_button(string name, string text, input_area area, input_font style, input_border border, form_action action);
button new_button(string name, string text, input_area area, input_font style, input_border border, color background_color);
button new_button(string name, string text, input_area area, input_font style, color background_color);
button new_button(string name, string text, input_area area, input_font style);
button new_button(string name, string text, input_area area, input_font style, input_border border);

void draw_button(button button_to_draw);
bool button_clicked(button button_to_check);

form new_form();

void draw_form(form form_to_draw);
void update_form(form &form_to_update);
void clear_form(form &form_to_clear);

textbox get_textbox_from_form(form form_to_search, string textbox_name);
checkbox get_checkbox_from_form(form form_to_search, string checkbox_name);
radio_group get_radio_group_from_form(form form_to_search, string radio_group_name);
radio get_radio_from_group(radio_group radio_group_to_search, string radio_name);
button get_button_from_form(form form_to_search, string button_name);

string get_value_from_radio_group(radio_group group_to_check);