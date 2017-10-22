import requests

test = requests.get("https://www.coursera.org")



hearders = ('Content-Type': 'application/x-www-from-urlencoded; charset-UTF-8', 'User-Agent':'Fiddler', 'Host': 'www.applebees.com', 'Content-Length': '146')

print (hearders)