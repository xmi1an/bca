

# Splitting String into List items
import re
language = "Python, Java Script, C#, Kotlin"

language_list = re.split(',', language)
print(language_list)
