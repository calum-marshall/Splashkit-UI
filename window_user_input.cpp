#include "splashkit.h"
#include "window_user_input.h"
#include <vector>

input_area new_input_area(double position_x, double position_y, double width, double height)
{
    input_area result;
    result.position_x = position_x;
    result.position_y = position_y;
    result.width = width;
    result.height = height;
    return result;
}

input_area new_input_area(point_2d point, double width, double height)
{
    return new_input_area(point.x, point.y, width, height);
}

input_area new_input_area(double position_x, double position_y, point_2d point)
{
    return new_input_area(position_x, position_y, point.x - position_x, point.y - position_y);
}

input_area new_input_area(point_2d point, point_2d point_2)
{
    return new_input_area(point.x, point.y, point_2.x - point.x, point_2.y - point.y);
}

input_font new_input_font(string font_name, double font_size, color font_color)
{
    input_font result;
    result.font_name = font_named(font_name);
    result.font_size = font_size;
    result.font_color = font_color;
    return result;
}

input_font new_input_font(string font_name, color font_color)
{
    return new_input_font(font_name, 10, font_color);
}

input_font new_input_font(string font_name, double font_size)
{
    return new_input_font(font_name, font_size, COLOR_BLACK);
}

input_font new_input_font(string font_name)
{
    return new_input_font(font_name, 10, COLOR_BLACK);
}

input_font new_input_font(font font_name, double font_size, color font_color)
{
    input_font result;
    result.font_name = font_name;
    result.font_size = font_size;
    result.font_color = font_color;
    return result;
}

input_font new_input_font(font font_name, color font_color)
{
    return new_input_font(font_name, 10, font_color);
}

input_font new_input_font(font font_name, double font_size)
{
    return new_input_font(font_name, font_size, COLOR_BLACK);
}

input_font new_input_font(font font_name)
{
    return new_input_font(font_name, 10, COLOR_BLACK);
}

textbox_text new_textbox_text(string value, int max_length, string placeholder, input_font attributes, bool numbers_only, text_alignment alignment)
{
    textbox_text result;
    result.value = value;
    result.max_length = max_length;
    result.placeholder = placeholder;
    result.attributes = attributes;
    result.numbers_only = numbers_only;
    result.alignment = alignment;
    return result;
}

textbox_text new_textbox_text(string value, int max_length, string placeholder, input_font attributes)
{
    return new_textbox_text(value, max_length, placeholder, attributes, false, LEFT_ALIGNED);
}

textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes)
{
    return new_textbox_text("", max_length, placeholder, attributes, false, LEFT_ALIGNED);
}

textbox_text new_textbox_text(string value, int max_length, input_font attributes)
{
    return new_textbox_text(value, max_length, "", attributes, false, LEFT_ALIGNED);
}

textbox_text new_textbox_text(int max_length, input_font attributes)
{
    return new_textbox_text("", max_length, "", attributes, false, LEFT_ALIGNED);
}

textbox_text new_textbox_text(string value, string placeholder, input_font attributes)
{
    return new_textbox_text(value, 255, placeholder, attributes, false, LEFT_ALIGNED);
}

textbox_text new_textbox_text(string placeholder, input_font attributes)
{
    return new_textbox_text("", 255, placeholder, attributes, false, LEFT_ALIGNED);
}

textbox_text new_textbox_text(input_font attributes)
{
    return new_textbox_text("", 255, "", attributes, false, LEFT_ALIGNED);
}

textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes, bool numbers_only)
{
    return new_textbox_text("", max_length, placeholder, attributes, numbers_only, LEFT_ALIGNED);
}

textbox_text new_textbox_text(string value, int max_length, input_font attributes, bool numbers_only)
{
    return new_textbox_text(value, max_length, "", attributes, numbers_only, LEFT_ALIGNED);
}

textbox_text new_textbox_text(int max_length, input_font attributes, bool numbers_only)
{
    return new_textbox_text("", max_length, "", attributes, numbers_only, LEFT_ALIGNED);
}

textbox_text new_textbox_text(string value, string placeholder, input_font attributes, bool numbers_only)
{
    return new_textbox_text(value, 255, placeholder, attributes, numbers_only, LEFT_ALIGNED);
}

textbox_text new_textbox_text(string placeholder, input_font attributes, bool numbers_only)
{
    return new_textbox_text("", 255, placeholder, attributes, numbers_only, LEFT_ALIGNED);
}

textbox_text new_textbox_text(input_font attributes, bool numbers_only)
{
    return new_textbox_text("", 255, "", attributes, numbers_only, LEFT_ALIGNED);
}

textbox_text new_textbox_text(string value, int max_length, string placeholder, input_font attributes, bool numbers_only)
{
    return new_textbox_text(value, max_length, placeholder, attributes, numbers_only, LEFT_ALIGNED);
}

textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes, text_alignment alignment)
{
    return new_textbox_text("", max_length, placeholder, attributes, false, alignment);
}

textbox_text new_textbox_text(string value, int max_length, input_font attributes, text_alignment alignment)
{
    return new_textbox_text(value, max_length, "", attributes, false, alignment);
}

textbox_text new_textbox_text(int max_length, input_font attributes, text_alignment alignment)
{
    return new_textbox_text("", max_length, "", attributes, false, alignment);
}

textbox_text new_textbox_text(string value, string placeholder, input_font attributes, text_alignment alignment)
{
    return new_textbox_text(value, 255, placeholder, attributes, false, alignment);
}

textbox_text new_textbox_text(string placeholder, input_font attributes, text_alignment alignment)
{
    return new_textbox_text("", 255, placeholder, attributes, false, alignment);
}

textbox_text new_textbox_text(input_font attributes, text_alignment alignment)
{
    return new_textbox_text("", 255, "", attributes, false, alignment);
}

textbox_text new_textbox_text(int max_length, string placeholder, input_font attributes, bool numbers_only, text_alignment alignment)
{
    return new_textbox_text("", max_length, placeholder, attributes, numbers_only, alignment);
}

textbox_text new_textbox_text(string value, int max_length, input_font attributes, bool numbers_only, text_alignment alignment)
{
    return new_textbox_text(value, max_length, "", attributes, numbers_only, alignment);
}

textbox_text new_textbox_text(int max_length, input_font attributes, bool numbers_only, text_alignment alignment)
{
    return new_textbox_text("", max_length, "", attributes, numbers_only, alignment);
}

textbox_text new_textbox_text(string value, string placeholder, input_font attributes, bool numbers_only, text_alignment alignment)
{
    return new_textbox_text(value, 255, placeholder, attributes, numbers_only, alignment);
}

textbox_text new_textbox_text(string placeholder, input_font attributes, bool numbers_only, text_alignment alignment)
{
    return new_textbox_text("", 255, placeholder, attributes, numbers_only, alignment);
}

textbox_text new_textbox_text(input_font attributes, bool numbers_only, text_alignment alignment)
{
    return new_textbox_text("", 255, "", attributes, numbers_only, alignment);
}

input_border new_input_border(color border_color, double border_width, color border_selected_color)
{
    input_border result;
    result.border_color = border_color;
    result.border_width = border_width;
    result.border_selected_color = border_selected_color;
    return result;
}

input_border new_input_border(double border_width, color border_selected_color)
{
    return new_input_border(COLOR_BLACK, border_width, border_selected_color);
}

input_border new_input_border(color border_color, color border_selected_color)
{
    return new_input_border(border_color, 5, border_selected_color);
}

input_border new_input_border(color border_color, double border_width)
{
    return new_input_border(border_color, border_width, COLOR_CYAN);
}

input_border new_input_border(color border_color)
{
    return new_input_border(border_color, 5, COLOR_CYAN);
}

input_border new_input_border(double border_width)
{
    return new_input_border(COLOR_BLACK, border_width, COLOR_CYAN);
}

input_border new_input_border()
{
    return new_input_border(COLOR_BLACK, 5, COLOR_CYAN);
}

textbox new_textbox(string name, input_area area, textbox_text text, input_border border, color background_color, bool selected)
{
    textbox result;
    result.name = name;
    result.area = area;
    result.text = text;
    result.border = border;
    result.background_color = background_color;
    result.selected = selected;
    return result;
}

textbox new_textbox(string name, input_area area, textbox_text text, input_border border, color background_color)
{
    return new_textbox(name, area, text, border, background_color, false);
}

textbox new_textbox(string name, input_area area, textbox_text text, input_border border, bool selected)
{
    return new_textbox(name, area, text, border, COLOR_WHITE, selected);
}

textbox new_textbox(string name, input_area area, textbox_text text, input_border border)
{
    return new_textbox(name, area, text, border, COLOR_WHITE, false);
}

textbox new_textbox(string name, input_area area, textbox_text text, color background_color, bool selected)
{
    return new_textbox(name, area, text, new_input_border(), background_color, selected);
}

textbox new_textbox(string name, input_area area, textbox_text text, bool selected)
{
    return new_textbox(name, area, text, new_input_border(), COLOR_WHITE, selected);
}

textbox new_textbox(string name, input_area area, textbox_text text, color background_color)
{
    return new_textbox(name, area, text, new_input_border(), background_color, false);
}

textbox new_textbox(string name, input_area area, textbox_text text)
{
    return new_textbox(name, area, text, new_input_border(), COLOR_WHITE, false);
}

void draw_textbox(textbox textbox_to_draw)
{
    if (textbox_to_draw.selected)
    {
        fill_rectangle(textbox_to_draw.border.border_selected_color, textbox_to_draw.area.position_x, textbox_to_draw.area.position_y, textbox_to_draw.area.width, textbox_to_draw.area.height);
    }
    else
    {
        fill_rectangle(textbox_to_draw.border.border_color, textbox_to_draw.area.position_x, textbox_to_draw.area.position_y, textbox_to_draw.area.width, textbox_to_draw.area.height);
    }
    fill_rectangle(textbox_to_draw.background_color, textbox_to_draw.area.position_x + textbox_to_draw.border.border_width, textbox_to_draw.area.position_y + textbox_to_draw.border.border_width, textbox_to_draw.area.width - textbox_to_draw.border.border_width * 2, textbox_to_draw.area.height - textbox_to_draw.border.border_width * 2);
    
    if (textbox_to_draw.text.alignment == LEFT_ALIGNED)
    {
        if (textbox_to_draw.text.value == "")
        {
            draw_text(textbox_to_draw.text.placeholder, COLOR_LIGHT_GRAY, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size, textbox_to_draw.area.position_x + textbox_to_draw.border.border_width * 2, textbox_to_draw.area.position_y + (textbox_to_draw.area.height - textbox_to_draw.text.attributes.font_size) / 2);
        }
        else
        {
            draw_text(textbox_to_draw.text.value, textbox_to_draw.text.attributes.font_color, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size, textbox_to_draw.area.position_x + textbox_to_draw.border.border_width * 2, textbox_to_draw.area.position_y + (textbox_to_draw.area.height - textbox_to_draw.text.attributes.font_size) / 2);
        }
    }
    else if (textbox_to_draw.text.alignment == CENTER_ALIGNED)
    {
        if (textbox_to_draw.text.value == "")
        {
            draw_text(textbox_to_draw.text.placeholder, COLOR_LIGHT_GRAY, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size, textbox_to_draw.area.position_x + textbox_to_draw.area.width / 2 - text_width(textbox_to_draw.text.placeholder, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size) / 2, textbox_to_draw.area.position_y + (textbox_to_draw.area.height - textbox_to_draw.text.attributes.font_size) / 2);
        }
        else
        {
            draw_text(textbox_to_draw.text.value, textbox_to_draw.text.attributes.font_color, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size, textbox_to_draw.area.position_x + textbox_to_draw.area.width / 2 - text_width(textbox_to_draw.text.value, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size) / 2, textbox_to_draw.area.position_y + (textbox_to_draw.area.height - textbox_to_draw.text.attributes.font_size) / 2);
        }
    }
    else
    {
        if (textbox_to_draw.text.value == "")
        {
            draw_text(textbox_to_draw.text.placeholder, COLOR_LIGHT_GRAY, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size, ((textbox_to_draw.area.position_x + textbox_to_draw.area.width) - textbox_to_draw.border.border_width * 2) - text_width(textbox_to_draw.text.placeholder, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size), textbox_to_draw.area.position_y + (textbox_to_draw.area.height - textbox_to_draw.text.attributes.font_size) / 2);
        }
        else
        {
            draw_text(textbox_to_draw.text.value, textbox_to_draw.text.attributes.font_color, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size, ((textbox_to_draw.area.position_x + textbox_to_draw.area.width) - textbox_to_draw.border.border_width * 2) - text_width(textbox_to_draw.text.value, textbox_to_draw.text.attributes.font_name, textbox_to_draw.text.attributes.font_size), textbox_to_draw.area.position_y + (textbox_to_draw.area.height - textbox_to_draw.text.attributes.font_size) / 2);
        }
    }
}

void get_textbox_input(textbox &txt)
{
    int max_length = txt.text.max_length;

    if (txt.text.value.length() > 0)
    {
        if (key_down(BACKSPACE_KEY))
        {
            txt.text.value = txt.text.value.substr(0, txt.text.value.length() - 1);
            delay(180);
        }
    }

    if (txt.text.value.length() < max_length && txt.area.width - txt.border.border_width * 4 - text_width("W", txt.text.attributes.font_name, txt.text.attributes.font_size) > text_width(txt.text.value, txt.text.attributes.font_name, txt.text.attributes.font_size))
    {
        if (txt.text.numbers_only)
        {
            if (key_typed(NUM_0_KEY))
            {
                txt.text.value += "0";
            }
            else if (key_typed(NUM_1_KEY))
            {
                txt.text.value += "1";
            }
            else if (key_typed(NUM_2_KEY))
            {
                txt.text.value += "2";
            }
            else if (key_typed(NUM_3_KEY))
            {
                txt.text.value += "3";
            }
            else if (key_typed(NUM_4_KEY))
            {
                txt.text.value += "4";
            }
            else if (key_typed(NUM_5_KEY))
            {
                txt.text.value += "5";
            }
            else if (key_typed(NUM_6_KEY))
            {
                txt.text.value += "6";
            }
            else if (key_typed(NUM_7_KEY))
            {
                txt.text.value += "7";
            }
            else if (key_typed(NUM_8_KEY))
            {
                txt.text.value += "8";
            }
            else if (key_typed(NUM_9_KEY))
            {
                txt.text.value += "9";
            }
        }
        else
        {
            if (key_down(RIGHT_SHIFT_KEY) || key_down(LEFT_SHIFT_KEY) || key_down(CAPS_LOCK_KEY))
            {
                if (key_typed(A_KEY))
                {
                    txt.text.value += "A";
                }
                else if (key_typed(B_KEY))
                {
                    txt.text.value += "B";
                }
                else if (key_typed(C_KEY))
                {
                    txt.text.value += "C";
                }
                else if (key_typed(D_KEY))
                {
                    txt.text.value += "D";
                }
                else if (key_typed(E_KEY))
                {
                    txt.text.value += "E";
                }
                else if (key_typed(F_KEY))
                {
                    txt.text.value += "F";
                }
                else if (key_typed(G_KEY))
                {
                    txt.text.value += "G";
                }
                else if (key_typed(H_KEY))
                {
                    txt.text.value += "H";
                }
                else if (key_typed(I_KEY))
                {
                    txt.text.value += "I";
                }
                else if (key_typed(J_KEY))
                {
                    txt.text.value += "J";
                }
                else if (key_typed(K_KEY))
                {
                    txt.text.value += "K";
                }
                else if (key_typed(L_KEY))
                {
                    txt.text.value += "L";
                }
                else if (key_typed(M_KEY))
                {
                    txt.text.value += "M";
                }
                else if (key_typed(N_KEY))
                {
                    txt.text.value += "N";
                }
                else if (key_typed(O_KEY))
                {
                    txt.text.value += "O";
                }
                else if (key_typed(P_KEY))
                {
                    txt.text.value += "P";
                }
                else if (key_typed(Q_KEY))
                {
                    txt.text.value += "Q";
                }
                else if (key_typed(R_KEY))
                {
                    txt.text.value += "R";
                }
                else if (key_typed(S_KEY))
                {
                    txt.text.value += "S";
                }
                else if (key_typed(T_KEY))
                {
                    txt.text.value += "T";
                }
                else if (key_typed(U_KEY))
                {
                    txt.text.value += "U";
                }
                else if (key_typed(V_KEY))
                {
                    txt.text.value += "V";
                }
                else if (key_typed(W_KEY))
                {
                    txt.text.value += "W";
                }
                else if (key_typed(X_KEY))
                {
                    txt.text.value += "X";
                }
                else if (key_typed(Y_KEY))
                {
                    txt.text.value += "Y";
                }
                else if (key_typed(Z_KEY))
                {
                    txt.text.value += "Z";
                }
                else if (key_typed(NUM_1_KEY))
                {
                    txt.text.value += "!";
                }
                else if (key_typed(NUM_2_KEY))
                {
                    txt.text.value += "@";
                }
                else if (key_typed(NUM_3_KEY))
                {
                    txt.text.value += "#";
                }
                else if (key_typed(NUM_4_KEY))
                {
                    txt.text.value += "$";
                }
                else if (key_typed(NUM_5_KEY))
                {
                    txt.text.value += "\u0025";
                }
                else if (key_typed(NUM_6_KEY))
                {
                    txt.text.value += "^";
                }
                else if (key_typed(NUM_7_KEY))
                {
                    txt.text.value += "&";
                }
                else if (key_typed(NUM_8_KEY))
                {
                    txt.text.value += "*";
                }
                else if (key_typed(NUM_9_KEY))
                {
                    txt.text.value += "(";
                }
                else if (key_typed(NUM_0_KEY))
                {
                    txt.text.value += ")";
                }
                else if (key_typed(MINUS_KEY))
                {
                    txt.text.value += "_";
                }
                else if (key_typed(EQUALS_KEY))
                {
                    txt.text.value += "+";
                }
                else if (key_typed(BACKQUOTE_KEY))
                {
                    txt.text.value += "~";
                }
                else if (key_typed(SLASH_KEY))
                {
                    txt.text.value += "|";
                }
                else if (key_typed(BACKSLASH_KEY))
                {
                    txt.text.value += "?";
                }
                else if (key_typed(SEMI_COLON_KEY))
                {
                    txt.text.value += ":";
                }
                else if (key_typed(LEFT_BRACKET_KEY))
                {
                    txt.text.value += "{";
                }
                else if (key_typed(RIGHT_BRACKET_KEY))
                {
                    txt.text.value += "}";
                }
                else if (key_typed(PERIOD_KEY))
                {
                    txt.text.value += ">";
                }
                else if (key_typed(COMMA_KEY))
                {
                    txt.text.value += "<";
                }
            }
            else
            {
                if (key_typed(SPACE_KEY))
                {
                    txt.text.value += " ";
                }
                else if (key_typed(A_KEY))
                {
                    txt.text.value += "a";
                }
                else if (key_typed(B_KEY))
                {
                    txt.text.value += "b";
                }
                else if (key_typed(C_KEY))
                {
                    txt.text.value += "c";
                }
                else if (key_typed(D_KEY))
                {
                    txt.text.value += "d";
                }
                else if (key_typed(E_KEY))
                {
                    txt.text.value += "e";
                }
                else if (key_typed(F_KEY))
                {
                    txt.text.value += "f";
                }
                else if (key_typed(G_KEY))
                {
                    txt.text.value += "g";
                }
                else if (key_typed(H_KEY))
                {
                    txt.text.value += "h";
                }
                else if (key_typed(I_KEY))
                {
                    txt.text.value += "i";
                }
                else if (key_typed(J_KEY))
                {
                    txt.text.value += "j";
                }
                else if (key_typed(K_KEY))
                {
                    txt.text.value += "k";
                }
                else if (key_typed(L_KEY))
                {
                    txt.text.value += "l";
                }
                else if (key_typed(M_KEY))
                {
                    txt.text.value += "m";
                }
                else if (key_typed(N_KEY))
                {
                    txt.text.value += "n";
                }
                else if (key_typed(O_KEY))
                {
                    txt.text.value += "o";
                }
                else if (key_typed(P_KEY))
                {
                    txt.text.value += "p";
                }
                else if (key_typed(Q_KEY))
                {
                    txt.text.value += "q";
                }
                else if (key_typed(R_KEY))
                {
                    txt.text.value += "r";
                }
                else if (key_typed(S_KEY))
                {
                    txt.text.value += "s";
                }
                else if (key_typed(T_KEY))
                {
                    txt.text.value += "t";
                }
                else if (key_typed(U_KEY))
                {
                    txt.text.value += "u";
                }
                else if (key_typed(V_KEY))
                {
                    txt.text.value += "v";
                }
                else if (key_typed(W_KEY))
                {
                    txt.text.value += "w";
                }
                else if (key_typed(X_KEY))
                {
                    txt.text.value += "x";
                }
                else if (key_typed(Y_KEY))
                {
                    txt.text.value += "y";
                }
                else if (key_typed(Z_KEY))
                {
                    txt.text.value += "z";
                }
                else if (key_typed(NUM_0_KEY))
                {
                    txt.text.value += "0";
                }
                else if (key_typed(NUM_1_KEY))
                {
                    txt.text.value += "1";
                }
                else if (key_typed(NUM_2_KEY))
                {
                    txt.text.value += "2";
                }
                else if (key_typed(NUM_3_KEY))
                {
                    txt.text.value += "3";
                }
                else if (key_typed(NUM_4_KEY))
                {
                    txt.text.value += "4";
                }
                else if (key_typed(NUM_5_KEY))
                {
                    txt.text.value += "5";
                }
                else if (key_typed(NUM_6_KEY))
                {
                    txt.text.value += "6";
                }
                else if (key_typed(NUM_7_KEY))
                {
                    txt.text.value += "7";
                }
                else if (key_typed(NUM_8_KEY))
                {
                    txt.text.value += "8";
                }
                else if (key_typed(NUM_9_KEY))
                {
                    txt.text.value += "9";
                }         
                else if (key_typed(COMMA_KEY))
                {
                    txt.text.value += ",";
                }
                else if (key_typed(PERIOD_KEY))
                {
                    txt.text.value += ".";
                }
                else if (key_typed(BACKSLASH_KEY))
                {
                    txt.text.value += "/";
                }
                else if (key_typed(SEMI_COLON_KEY))
                {
                    txt.text.value += ";";
                }
                else if (key_typed(SLASH_KEY))
                {
                    txt.text.value += "\u005C";
                }
                else if (key_typed(EQUALS_KEY))
                {
                    txt.text.value += "=";
                }
                else if (key_typed(MINUS_KEY))
                {
                    txt.text.value += "-";
                }
                else if (key_typed(LEFT_BRACKET_KEY))
                {
                    txt.text.value += "[";
                }
                else if (key_typed(RIGHT_BRACKET_KEY))
                {
                    txt.text.value += "]";
                }
                else if (key_typed(EXCLAIM_KEY))
                {
                    txt.text.value += "!";
                }
                else if (key_typed(AT_KEY))
                {
                    txt.text.value += "@";
                }
                else if (key_typed(HASH_KEY))
                {
                    txt.text.value += "#";
                }
                else if (key_typed(DOLLAR_KEY))
                {
                    txt.text.value += "$";
                }
                else if (key_typed(CARET_KEY))
                {
                    txt.text.value += "^";
                }
                else if (key_typed(AMPERSAND_KEY))
                {
                    txt.text.value += "&";
                }
                else if (key_typed(ASTERISK_KEY))
                {
                    txt.text.value += "*";
                }
                else if (key_typed(LEFT_BRACKET_KEY))
                {
                    txt.text.value += "(";
                }
                else if (key_typed(RIGHT_BRACKET_KEY))
                {
                    txt.text.value += ")";
                }
                else if (key_typed(UNDERSCORE_KEY))
                {
                    txt.text.value += "_";
                }
                else if (key_typed(PLUS_KEY))
                {
                    txt.text.value += "+";
                }
                else if (key_typed(LEFT_PAREN_KEY))
                {
                    txt.text.value += "{";
                }
                else if (key_typed(RIGHT_PAREN_KEY))
                {
                    txt.text.value += "}";
                }
                else if (key_typed(QUESTION_KEY))
                {
                    txt.text.value += "?";
                }
                else if (key_typed(LESS_KEY))
                {
                    txt.text.value += "<";
                }
                else if (key_typed(GREATER_KEY))
                {
                    txt.text.value += ">";
                }
                else if (key_typed(COLON_KEY))
                {
                    txt.text.value += ":";
                }
            }
        }
    }
}

void update_textbox(textbox &textbox_to_update)
{
    if (mouse_clicked(LEFT_BUTTON) && (mouse_x() > textbox_to_update.area.position_x && mouse_x() < textbox_to_update.area.position_x + textbox_to_update.area.width) && (mouse_y() > textbox_to_update.area.position_y && mouse_y() < textbox_to_update.area.position_y + textbox_to_update.area.height))
    {
        textbox_to_update.selected = true;
    }
    else if (mouse_clicked(LEFT_BUTTON))
    {
        textbox_to_update.selected = false;
    }

    if (textbox_to_update.selected)
    {
        get_textbox_input(textbox_to_update);
    }
}

void clear_textbox(textbox &textbox_to_clear)
{
    textbox_to_clear.text.value = "";
}

checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border, color background_color, bool checked)
{
    checkbox result;
    result.name = name;
    result.label = label;
    result.area = area;
    result.style = style;
    result.border = border;
    result.background_color = background_color;
    result.checked = checked;
    return result;
}

checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border, color background_color)
{
    return new_checkbox(name, label, area, style, border, background_color, false);
}

checkbox new_checkbox(string name, string label, input_area area, input_font style, color background_color, bool checked)
{
    return new_checkbox(name, label, area, style, new_input_border(2, COLOR_BLACK), background_color, checked);
}

checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border, bool checked)
{
    return new_checkbox(name, label, area, style, border, COLOR_LIGHT_GRAY, checked);
}

checkbox new_checkbox(string name, string label, input_area area, input_font style, input_border border)
{
    return new_checkbox(name, label, area, style, border, COLOR_LIGHT_GRAY, false);
}

checkbox new_checkbox(string name, string label, input_area area, input_font style, color background_color)
{
    return new_checkbox(name, label, area, style, new_input_border(2, COLOR_BLACK), background_color, false);
}

checkbox new_checkbox(string name, string label, input_area area, input_font style, bool checked)
{
    return new_checkbox(name, label, area, style, new_input_border(2, COLOR_BLACK), COLOR_LIGHT_GRAY, checked);
}

checkbox new_checkbox(string name, string label, input_area area, input_font style)
{
    return new_checkbox(name, label, area, style, new_input_border(2, COLOR_BLACK), COLOR_LIGHT_GRAY, false);
}

void draw_checkbox(checkbox checkbox_to_draw)
{
    fill_rectangle(checkbox_to_draw.border.border_color, checkbox_to_draw.area.position_x, checkbox_to_draw.area.position_y, checkbox_to_draw.area.width, checkbox_to_draw.area.height);
    fill_rectangle(checkbox_to_draw.background_color, checkbox_to_draw.area.position_x + checkbox_to_draw.border.border_width, checkbox_to_draw.area.position_y + checkbox_to_draw.border.border_width, checkbox_to_draw.area.width - checkbox_to_draw.border.border_width * 2, checkbox_to_draw.area.height - checkbox_to_draw.border.border_width * 2);
    draw_text(checkbox_to_draw.label, checkbox_to_draw.style.font_color, checkbox_to_draw.style.font_name, checkbox_to_draw.style.font_size, checkbox_to_draw.area.position_x + checkbox_to_draw.area.width + text_width("W", checkbox_to_draw.style.font_name, checkbox_to_draw.style.font_size), checkbox_to_draw.area.position_y - text_height("a", checkbox_to_draw.style.font_name, checkbox_to_draw.style.font_size) / 4);
    if (checkbox_to_draw.checked)
    {
        fill_rectangle(checkbox_to_draw.border.border_selected_color, checkbox_to_draw.area.position_x + checkbox_to_draw.border.border_width * 2, checkbox_to_draw.area.position_y + checkbox_to_draw.border.border_width * 2, checkbox_to_draw.area.width - checkbox_to_draw.border.border_width * 4, checkbox_to_draw.area.height - checkbox_to_draw.border.border_width * 4);
    }
}

void update_checkbox(checkbox &checkbox_to_update)
{
    if (mouse_clicked(LEFT_BUTTON) && (mouse_x() > checkbox_to_update.area.position_x && mouse_x() < checkbox_to_update.area.position_x + checkbox_to_update.area.width && mouse_y() > checkbox_to_update.area.position_y && mouse_y() < checkbox_to_update.area.position_y + checkbox_to_update.area.height))
    {
        if (checkbox_to_update.checked)
        {
            checkbox_to_update.checked = false;
        }
        else
        {
            checkbox_to_update.checked = true;
        }
    }
}

void clear_checkbox(checkbox &checkbox_to_clear)
{
    checkbox_to_clear.checked = false;
}

button new_button(string name, string text, input_area area, input_font style, input_border border, color background_color, form_action action)
{
    button result;
    result.name = name;
    result.text = text;
    result.area = area;
    result.style = style;
    result.border = border;
    result.background_color = background_color;
    result.action = action;
    return result;
}

button new_button(string name, string text, input_area area, input_font style, color background_color, form_action action)
{
    return new_button(name, text, area, style, new_input_border(), background_color, action);
}

button new_button(string name, string text, input_area area, input_font style, form_action action)
{
    return new_button(name, text, area, style, new_input_border(), COLOR_LIGHT_GRAY, action);
}

button new_button(string name, string text, input_area area, input_font style, input_border border, form_action action)
{
    return new_button(name, text, area, style, border, COLOR_LIGHT_GRAY, action);
}

button new_button(string name, string text, input_area area, input_font style, input_border border, color background_color)
{
    return new_button(name, text, area, style, border, background_color, NONE);
}

button new_button(string name, string text, input_area area, input_font style, color background_color)
{
    return new_button(name, text, area, style, new_input_border(), background_color, NONE);
}

button new_button(string name, string text, input_area area, input_font style)
{
    return new_button(name, text, area, style, new_input_border(), COLOR_LIGHT_GRAY, NONE);
}

button new_button(string name, string text, input_area area, input_font style, input_border border)
{
    return new_button(name, text, area, style, border, COLOR_LIGHT_GRAY, NONE);
}

void draw_button(button button_to_draw)
{
    fill_rectangle(button_to_draw.border.border_color, button_to_draw.area.position_x, button_to_draw.area.position_y, button_to_draw.area.width, button_to_draw.area.height);
    fill_rectangle(button_to_draw.background_color, button_to_draw.area.position_x + button_to_draw.border.border_width, button_to_draw.area.position_y + button_to_draw.border.border_width, button_to_draw.area.width - button_to_draw.border.border_width * 2, button_to_draw.area.height - button_to_draw.border.border_width * 2);
    draw_text(button_to_draw.text, button_to_draw.style.font_color, button_to_draw.style.font_name, button_to_draw.style.font_size, button_to_draw.area.position_x + button_to_draw.area.width / 2 - text_width(button_to_draw.text, button_to_draw.style.font_name, button_to_draw.style.font_size) / 2, button_to_draw.area.position_y + (button_to_draw.area.height - button_to_draw.style.font_size) / 2);
}

bool button_clicked(button button_to_check)
{
    if (mouse_clicked(LEFT_BUTTON) && (mouse_x() > button_to_check.area.position_x && mouse_x() < button_to_check.area.position_x + button_to_check.area.width) && (mouse_y() > button_to_check.area.position_y && mouse_y() < button_to_check.area.position_y + button_to_check.area.height))
    {
        return true;
    }
    else
    {
        return false;
    }
}

form new_form()
{
    form result;
    result.is_submitted = false;
    return result;
}

void draw_form(form form_to_draw)
{
    for (textbox textbox_to_draw : form_to_draw.textboxes)
    {
        draw_textbox(textbox_to_draw);
    }
    for (checkbox checkbox_to_draw : form_to_draw.checkboxes)
    {
        draw_checkbox(checkbox_to_draw);
    }
    for (button button_to_draw : form_to_draw.buttons)
    {
        draw_button(button_to_draw);
    } 
}

void clear_form(form &form_to_clear)
{
    textbox textbox_to_clear;
    checkbox checkbox_to_clear;
    for (int i = 0; i < form_to_clear.textboxes.size(); i++)
    {
        textbox_to_clear = form_to_clear.textboxes[i];
        clear_textbox(textbox_to_clear);
        form_to_clear.textboxes[i] = textbox_to_clear;
    }
    for (int j = 0; j < form_to_clear.checkboxes.size(); j++)
    {
        checkbox_to_clear = form_to_clear.checkboxes[j];
        clear_checkbox(checkbox_to_clear);
        form_to_clear.checkboxes[j] = checkbox_to_clear;
    }
}

void update_form(form &form_to_update)
{
    textbox textbox_to_update;
    button button_to_check;
    checkbox checkbox_to_update;
    for (int i = 0; i < form_to_update.textboxes.size(); i++)
    {
        textbox_to_update = form_to_update.textboxes[i];
        update_textbox(textbox_to_update);
        form_to_update.textboxes[i] = textbox_to_update;
    }
    for (int k = 0; k < form_to_update.checkboxes.size(); k++)
    {
        checkbox_to_update = form_to_update.checkboxes[k];
        update_checkbox(checkbox_to_update);
        form_to_update.checkboxes[k] = checkbox_to_update;
    }
    for (int j = 0; j < form_to_update.buttons.size(); j++)
    {
        button_to_check = form_to_update.buttons[j];
        if (button_to_check.action == SUBMIT)
        {
            if (button_clicked(button_to_check))
            {
                form_to_update.is_submitted = true;
            }
        }
        else if (button_to_check.action == CLEAR)
        {
            if (button_clicked(button_to_check))
            {
                clear_form(form_to_update);
            }
        }
    }
}

textbox get_textbox_from_form(form form_to_search, string textbox_name)
{
    textbox result;

    for (textbox textbox_to_search : form_to_search.textboxes)
    {
        if (textbox_to_search.name == textbox_name)
        {
            result = textbox_to_search;
            break;
        }
    }

    return result;
}

checkbox get_checkbox_from_form(form form_to_search, string checkbox_name)
{
    checkbox result;

    for (checkbox checkbox_to_search : form_to_search.checkboxes)
    {
        if (checkbox_to_search.name == checkbox_name)
        {
            result = checkbox_to_search;
            break;
        }
    }

    return result;
}

button get_button_from_form(form form_to_search, string button_name)
{
    button result;

    for (button button_to_search : form_to_search.buttons)
    {
        if (button_to_search.name == button_name)
        {
            result = button_to_search;
            break;
        }
    }

    return result;
}