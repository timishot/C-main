#!/usr/bin/python3

def text_indentation(text):
    if not isinstance(text, str):
        raise TypeError("text must be a string")

    punctuation_marks = [".", "?", ":"]
    formatted_text = ""

    for char in text:
        formatted_text += char
        if char in  punctuation_marks:
            formatted_text += "newline"
    formatted_split = formatted_text.split("newline")
    print("\n\n".join(line.strip() for line in formatted_split if line.strip()))
