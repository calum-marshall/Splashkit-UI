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

struct form
{
    vector<textbox> textboxes;
    vector<checkbox> checkboxes;
    vector<button> buttons;
    bool is_submitted;
};

input_area new_input_area(double position_x, double position_y, double width, double height);
input_area new_input_area(point_2d point, double width, double height);
input_area new_input_area(double position_x, double position_y, point_2d point);
input_area new_input_area(point_2d point, point_2d point_2);

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
button get_button_from_form(form form_to_search, string button_name);