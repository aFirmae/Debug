email = input("Email: ")
index = email.index("@")

username = email[: index]
domain = email[index + 1:]

# OR
# username, domain = email.split("@")

print(f"Username: {username}")
print(f"Domain: {domain}")
