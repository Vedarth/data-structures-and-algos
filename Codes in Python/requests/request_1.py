import requests

test = requests.get("https://www.coursera.org")


outfile = 'C:/Users/vedar/data-structures-and-algos/Codes in Python/requests/test.txt'
outfile = open(outfile,'w')
outfile.write(str(test.text.encode('utf-8')))