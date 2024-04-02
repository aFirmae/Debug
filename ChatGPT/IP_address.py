from socket import gethostbyname

try:
    website = input("Enter a website: ")
    ip_address = gethostbyname(website)
    print(f"Website: {website}\nIP Address: {ip_address}")
    
except socket.gaierror:
    print("Website does not exist.")
