import re
import string
import os


def find_specific_words(file_path):
    # Define the regex pattern to match words starting with a, c, d, g, p, or s (case-insensitive)
    pattern = re.compile(r'\b[a|c|d|g|p|s]\w*', re.IGNORECASE)

    if not os.path.exists(file_path):
        with open(file_path, 'w') as file:
            pass
        print(f"File {file_path} not found. An empty file has been created.")
        return None

    try:
        with open(file_path, 'r') as file:
            text = file.read()

            # Find all words matching the pattern
            matching_words = pattern.findall(text)

            # Print the matching words
            print("Words starting with a, c, d, g, p, or s:")
            for word in matching_words:
                print(word)

    except FileNotFoundError:
        print(f"File {file_path} not found.")


# Example usage:
file_path = "startword.txt"
find_specific_words(file_path)
