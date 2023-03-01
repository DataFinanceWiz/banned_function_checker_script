import os

banned_functions = ["exit"]

def check_for_banned_functions(file_path):
    with open(file_path, 'r') as file:
        lines = file.readlines()
        for i, line in enumerate(lines):
            for banned_function in banned_functions:
                if banned_function in line:
                    print(f"Banned function {banned_function} found in file {file_path} on line {i + 1}")

def search_repository(root_dir):
    for subdir, dirs, files in os.walk(root_dir):
        for file in files:
            file_path = subdir + os.sep + file
            if file_path.endswith(".c"):
                check_for_banned_functions(file_path)

root_dir = "/home/dshalom/B-PSU-100-COT-1-1-sokoban-shalom.dosseh"
search_repository(root_dir)
