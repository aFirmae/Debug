from requests import post

input = input("What? - ")
post("https://ntfy.sh/python_response_alert", data=input.encode(encoding="utf-8"))
print("Check yo phone!")
