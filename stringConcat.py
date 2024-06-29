def concatenate_and_length(str1, str2):
    concatenated_string = str1 + str2
    length = len(concatenated_string)
    return concatenated_string, length


# Example usage:
str1 = "Hello, "
str2 = "World!"

concatenated_string, length = concatenate_and_length(str1, str2)

print(f"The concatenated string is: '{concatenated_string}'")
print(f"The length of the concatenated string is: {length}")
