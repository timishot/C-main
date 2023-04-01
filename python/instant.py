#!/usr/bin/python3

from urllib.request import urlopen

url = "https://www.example.com"
response = urlopen(url)
html = response.read()

print(html)

with urlopen('http://worldtimeapi.org/api/timezone/etc/UTC.txt') as response:

    for line in response:

        line = line.decode()             # Convert bytes to a str

        if line.startswith('datetime'):

            print(line.rstrip())         # Remove trailing newline

