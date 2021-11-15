from bs4 import BeautifulSoup
import requests
import json


headers = {
    "content-type": "application/json",
    "accept": "*/*",
}


def get_params(page):
    return (("list", ""), ("orderBy", "id"), ("page", f"{page}"))


page = 0

all = []
while True:
    response = requests.get(
        "https://binarysearch.com/api/questionlist",
        headers=headers,
        params=get_params(page),
    )

    soup = BeautifulSoup(response.content, "html.parser")
    json_dict = json.loads(soup.text)

    questions = [(x["id"], x["slug"], x["difficulty"]) for x in json_dict["questions"]]

    if len(questions) == 0:
        break

    all.extend(questions)
    page += 1

all = list(set(all))
all.sort()


def get_difficulty(idx):
    if idx == 0:
        return ":green_circle:"
    elif idx == 1:
        return ":orange_circle:"
    elif idx == 2:
        return ":red_circle:"
    else:
        return ":large_blue_circle:"


base_url = "https://binarysearch.com/problems"
title = "# Binary Search Solutions"
content = """
Generate the table using python3:
```bash
pip install -r requirements.txt
python generate_readme.py
python update_readme.py
```
"""
color_legend = """
- :green_circle:: **Easy**
- :orange_circle:: **Medium**
- :red_circle:: **Hard**
- :large_blue_circle:: **Harder**
"""
table_headers = "[]() | Id | Question | Difficulty | Solution | Notes"
table_border = ":---: | :---: | --- | :---: | :---: | ---"

with open("README.md", "w") as fp:
    fp.write(title + "\n\n")
    fp.write(content + "\n")
    fp.write(color_legend + "\n")
    fp.write(table_headers + "\n")
    fp.write(table_border + "\n")
    for (id, slug, difficulty_idx) in all:
        name = slug.replace("-", " ")
        fp.write(
            f"[](check) | {id} | [{name}]({base_url}/{slug}) | {get_difficulty(difficulty_idx)} | [](solution) | [](notes) \n"
        )
