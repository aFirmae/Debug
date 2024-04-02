import string as str

# String charcters
char_punc = str.punctuation  # ~!"#$%&'()*+,-./:;<=>?@[\]^_`{|}
char_digits = str.digits  # 0123456789
char_alpha = str.ascii_letters  # abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ
char_lower = str.ascii_lowercase  # abcdefghijklmnopqrstuvwxyz
char_upper = str.ascii_uppercase  # ABCDEFGHIJKLMNOPQRSTUVWXYZ

print(char_punc + char_digits + char_alpha)
