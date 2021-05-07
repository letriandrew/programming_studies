import requests

r = requests.get("https://www.tronalddump.io/random/quote")

table = r.json()

print("Quote: ", table["value"])
print("Created at: ", table["created_at"])
