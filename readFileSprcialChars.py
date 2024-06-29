import string
import os


def count_special_characters(file_path):
    special_characters = string.punctuation + \
        string.whitespace.replace(" ", "") + string.digits
    special_characters_count = 0

    if not os.path.exists(file_path):
        with open(file_path, 'w') as file:
            pass
        print(f"File {file_path} not found. An empty file has been created.")
        return None

    try:
        with open(file_path, 'r') as file:
            text = file.read()
            for char in text:
                if char in special_characters:
                    special_characters_count += 1
    except Exception as e:
        print(f"An error occurred: {e}")
        return None

    return special_characters_count


# Example usage:
file_path = 'example.txt'  # Replace with your file path
special_characters_count = count_special_characters(file_path)

if special_characters_count is not None:
    print(
        f"The number of special characters in the file is: {special_characters_count}")
