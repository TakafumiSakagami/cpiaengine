# GBA NVL engine - SepiaNVL
A basic NVL engine for making Visual Novels, Sound Novels, etc... for the Gameboy Advance.
Requires minimal coding knowledge!
Made for an article in [C-pia! Magazine](https://c-pia.github.io/).

![](../demo_kanon.png)![](../demo_sepia2.png)![](../demo_bys.png)

## Script Converter

![](demo.png)

`convert_txt_to_dialogue.py` is a python script that can take a plain text file containing your writtenprose and turn it into generic dialogue code blocks.

It is provided as a python script so that developers may modify the automation process to suit their needs, however, if there's demand for an .exe version, I'll add that.

Upon running the script, it'll convert every ... into \` which, with the provided font, looks like … to save screen space.

It will also add a | to the end of each line, which by default acts as the sentence ending symbol.

The output file will automatically insert a linebreak whenever the text surpasses a specified character limit (27 by default), breaking before the word that passes the character limit. Incidentally, this can help you to quickly identify lines that are too large for your textbox.

The value of when linebreaks will be inserted can be changed by editing `convert_txt_to_dialogue.py` in a text editor, as can the name of the input file (`input.txt` by default) and the output file (`output.txt` by default).

`reformat_lines('input.txt', 'output.txt', max_chars=27)`

Just adjust the file names, and tell the converter how many characters wide your textbox is!

Though this won't insert intricate things such as image choices, fades, sound effects, etc... it will drastically speed up the process of converting written prose into useable code, so I highly recommend you install Python and use this script!

For example, a text file containing:

    A "bcde."
    F "ghijk."
    "lmnop."
    Q "rstu."

Would be automatically converted into:

    if(true)
    {
      bn::string_view dialogue_text_lines[] = {
          "A",
          "bcde.|",
          "",
          "",
          };
      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
      bn::core::update();
    }
    if(true)
    {
      bn::string_view dialogue_text_lines[] = {
          "F",
          "ghijk.|",
          "",
          "",
          };
      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
      bn::core::update();
    }
    if(true)
    {
      bn::string_view dialogue_text_lines[] = {
          "",
          "lmnop.|",
          "",
          "",
          };
      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
      bn::core::update();
    }
    if(true)
    {
      bn::string_view dialogue_text_lines[] = {
          "Q",
          "rstu.|",
          "",
          "",
          };
      texter::dialogue(dialogue_text_lines, bgimg, textbox, internal_window, external_window, text_generator);
      bn::core::update();
    }

The included `input.txt` and `output.txt` show how lines from the By Your Side demo's script were converted en masse.


##Alternative Converter

Making variations of this script is as simple as opening it up with a text editor. An example variation has been provided.

`convert_txt_to_dialogue_w_labels.py` is a version of the tool that is compatible with the SHHis demo.

The SHHis demo implements a "save & load anywhere" function that requires a different dialogue block layout.

It also implements a backlog function, allowing readers to view a set number of previously-seen lines, which requires an additional line of code: `dialogueBuffer.add(dialogue_text_lines);`.