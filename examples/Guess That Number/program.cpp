#include "splashkit.h"
#include "window_user_input.h"
#include <vector>

int main()
{
    open_window("Guess That Number", 600, 200);
    load_font("Alice", "Alice-Regular"); //SIL Open Font License Version 1.1
    form frm = new_form();
    input_area guess_area = new_input_area(100, 70, 400, 40);
    input_font guess_style = new_input_font("Alice", 25);
    textbox_text guess_text = new_textbox_text(2, "Enter a guess", guess_style, true, CENTER_ALIGNED);
    textbox guess_textbox = new_textbox("guess_textbox", guess_area, guess_text);

    input_area button_area = new_input_area(200, 140, 200, 40);
    input_border button_border = new_input_border(2);
    button btn = new_button("submit_button", "Guess", button_area, guess_style, button_border, SUBMIT);
        
    frm.textboxes.push_back(guess_textbox);
    frm.buttons.push_back(btn);

    int the_number = rnd(100);
    string message = "I have a number. What is it?";
    color text_color = COLOR_BLACK;

    while (!quit_requested())
    {
        process_events();
        clear_screen(COLOR_WHITE);
        draw_form(frm);
        update_form(frm);

        string guess = get_textbox_from_form(frm, "guess_textbox").text.value;
        int guess_number = -1;

        if (is_integer(guess))
        {
            guess_number = convert_to_integer(guess);
        }

        if ((frm.is_submitted || key_typed(RETURN_KEY)) && is_integer(guess))
        {
            if (guess_number < the_number)
            {
                message = "The number is higher than " + guess;
                text_color = COLOR_RED;
                clear_form(frm);
            }
            else if (guess_number > the_number)
            {
                message = "The number is lower than " + guess;
                text_color = COLOR_RED;
                clear_form(frm);
            }
            else
            {
                message = "Correct!";
                text_color = COLOR_GREEN;
            }
            frm.is_submitted = false;
        }

        draw_text(message, text_color, "Alice", 30, screen_width() / 2 - text_width(message, "Alice", 30) / 2, 20);

        refresh_screen();

        if (message == "Correct!")
        {
            delay(3000);
            the_number = rnd(100);
            message = "I have a number. What is it?";
            text_color = COLOR_BLACK;
            clear_form(frm);
            refresh_screen();
        }
    }

    return 0;
}