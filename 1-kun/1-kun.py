"""
Task
Write a function that takes a string and finds a repeating character in the string (there may be multiple repeating characters). The function should return the minimum difference between the indices of these characters and the character itself.

For example, in the string "aabcba", the minimum position difference of repeated characters will be equal to 1, since for the character "a", the position difference is 1.

The output should be in the form of an array.

If there are no duplicate characters in the string, it should return null.

The string can only contain lowercase letters, and nothing else!!! (an empty string is not allowed).

If the difference between repeated characters is the same, return the first minimal difference encountered.

"""

# def min_repeating_character_difference(input_string):
#     char_index_map = {}
#     min_distance = float('inf')
#     result_char = None
#     has_repeats = False

#     for i, char in enumerate(input_string):
#         if char in char_index_map:
#             has_repeats = True
#             prev_index = char_index_map[char]
#             distance = i - prev_index

#             if distance < min_distance:
#                 min_distance = distance
#                 result_char = char

#         char_index_map[char] = i

#     return (min_distance, result_char) if has_repeats else None

# if __name__ == "__main__":
#     try:
#         input_string = input("Enter the string: ")
#     except EOFError:
#         input_string = "aabbca"

#     print(min_repeating_character_difference(input_string))



import sys

a = 'skjagkjsga'
b = 'a'
c = 3657363573367367536736725254245525


print(sys.getsizeof(a))
print(sys.getsizeof(b))
print(sys.getsizeof(c))
print(hex(id(a)))
print(hex(id(b)))
print(sys.platform)
