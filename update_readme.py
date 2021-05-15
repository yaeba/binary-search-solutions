import os
from collections import defaultdict
import re

notes_dict = {}
with open("notes.tsv", "r") as fp:
    for line in fp.readlines():
        [slug, notes] = line.rstrip().split("\t")
        notes_dict[slug] = notes


solutions_dict = defaultdict(list)
for file in os.listdir("solutions"):
    [slug, extension] = os.path.splitext(file)
    extension = extension[1:]

    solutions_dict[slug].append(f"[{extension}](solutions/{file})")

solutions_dict = {
    slug: ", ".join(sorted(solutions)) for (slug, solutions) in solutions_dict.items()
}

with open("README.md", "r+") as fp:
    lines = fp.readlines()
    fp.seek(0)

    for line in lines:
        search = re.search("problems/(.*?)\) \|", line)

        if search is None:
            fp.write(line)
        else:
            splitted = line.rstrip().split(" | ")
            slug = search.group(1)

            if slug in solutions_dict:
                splitted[4] = solutions_dict[slug]
                splitted[0] = ":white_check_mark:"
            else:
                splitted[4] = "[](solution)"
                splitted[0] = "[](check)"

            if slug in notes_dict:
                splitted[-1] = notes_dict[slug]
            else:
                splitted[-1] = "[](notes)"

            fp.write(" | ".join(splitted) + "\n")

    fp.truncate()
