# https://quera.org/problemset/111990/

days = ["shanbe", "yekshanbe", "doshanbe",
        "seshanbe", "chaharshanbe", "panjshanbe", "jome"]
inp = input()
print("tatil" if inp == "jome" else "perspolis" if days.index(inp) %
      2 == 0 else "bahman")
