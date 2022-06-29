

# Sorting List
developer = ['Web', 'Software', 'Data Science', 'Application']
print(developer)
developer.sort()  # sort ascending, now list change into ascending
print(developer)
# sort descending, now list change into descending
developer.sort(reverse=True)
print(developer)

developer = ['Web', 'Application']
print(sorted(developer))  # doesn't affect or change original list
print(developer)
