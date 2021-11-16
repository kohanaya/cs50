from cs50 import get_int
from cs50 import get_string


def main():
    text = get_string("Text: ")

    letters = 0
    words = 1
    sentences = 0

    for i in range(len(text)):
        if (text[i] >= 'a' and text[i] <= 'z') or (text[i] >= 'A' and text[i] <= 'Z'):
            letters = letters + 1
        if text[i] == ' ':
            words = words + 1
        if text[i] == '.' or text[i] == '!' or text[i] == '?':
            sentences = sentences + 1

    L = letters * 100.0 / words
    S = sentences * 100.0 / words
    index = 0.0588 * L - 0.296 * S - 15.8

    if index < 1:
        print("Before Grade 1")
    elif index >= 16:
        print("Grade 16+")
    else:
        print("Grade", round(index))


main()
