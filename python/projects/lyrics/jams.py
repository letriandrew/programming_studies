import requests

artist = str(input("Enter artist: "))
title = str(input("Enter title: "))

r = requests.get(f"https://api.lyrics.ovh/v1/{artist}/{title}/")

table = r.json()

print(table["lyrics"])

