git status --ignored -s | awk '$1 == "!!" {print $2}'
