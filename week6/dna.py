import csv
import sys
import re


def main():

    if len(sys.argv) != 3:
        sys.exit("Usage: python dna.py")

    dbfile = sys.argv[1]
    txtfile = sys.argv[2]

    people = []
    with open(dbfile) as person:
        reader = csv.DictReader(person)
        for row in reader:
            people.append(row)
    # print(people)

    genes = ''
    with open(txtfile) as f:
        lines = f.readlines()
        genes = lines[0]
    # print(genes)

    strs = list(people[0].keys())
    strs.remove('name')
    count = {}
    for strgene in strs:
        # count consecutive repetitions of a substring in a string
        # https://stackoverflow.com/questions/61131768/how-to-count-consecutive-repetitions-of-a-substring-in-a-string
        v = re.findall(r'(?:' + strgene + ')+', genes)
        m = max(v, key=len, default='')
        n = len(m) // len(strgene)
        count[strgene] = n
    # print(count)

    for person in people:
        found = True
        for strgene in strs:
            if int(person[strgene]) != count[strgene]:
                found = False
                break
        if found:
            print(person['name'])
            return
    print('No match')


main()
