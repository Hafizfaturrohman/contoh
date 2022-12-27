txt = 'Hello World'
num_characters = len(txt)
print(num_characters)

txt = 'Hello World'
last_character = txt[-1]
print(last_character)

txt = 'Hello World'
sub_string = txt[2:5]
print(sub_string)

txt = 'Hello World'
txt_without_spaces = txt.replace(' ', '')
print(txt_without_spaces)

txt = 'Hello World'
txt_uppercase = txt.upper()
print(txt_uppercase)

txt = 'Hello World'
txt_lowercase = txt.lower()
print(txt_lowercase)

txt = 'Hello World'
txt_with_j = txt.replace('H', 'J')
print(txt_with_j)

txt = 'Hello, nama saya john, dan umur saya adalah {} tahun'
umur = 24
txt_formatted = txt.format(umur)
print(txt_formatted)
