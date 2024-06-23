def reformat_lines(input_file, output_file, max_chars=20):
    with open(input_file, 'r') as infile:
        lines = infile.readlines()

    formatted_lines = []
    for line in lines:
        if '"' in line:
            parts = line.split('"')
            identifier = parts[0].strip()
            dialogue = parts[1].strip()

            # Replace ... with `
            dialogue = dialogue.replace('...', '`')

            # Add | to the end of every line
            dialogue += '|'

            # Split dialogue into chunks of max_chars characters
            chunks = []
            current_chunk = ""
            for word in dialogue.split():
                if len(current_chunk) + len(word) + 1 <= max_chars:
                    current_chunk += f"{word} "
                else:
                    chunks.append(current_chunk.strip())
                    current_chunk = f"{word} "
            if current_chunk:
                chunks.append(current_chunk.strip())

            formatted_dialogue = '",\n      "'.join(chunks)

            formatted_line = f'if(true)\n{{\n  bn::string_view dialogue_text_lines[] = {{\n      "{identifier}",\n      "{formatted_dialogue}",\n      "",\n      "",\n      }};\n  texter::dialogue(dialogue_text_lines, bgpos, dialogue_layout, bgimg, textbox, internal_window, external_window, text_generator);\n  bn::core::update();\n}}\n'
            formatted_lines.append(formatted_line)

    with open(output_file, 'w') as outfile:
        outfile.writelines(formatted_lines)

# Usage: Replace 'input.txt' and 'output.txt' with your actual file names
reformat_lines('input.txt', 'output.txt', max_chars=27)