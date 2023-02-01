def solve():
    start = str(input())
    seasons = ["spring", "summer", "autumn", "winter"]
    next = int(input())
    next = next - 4
    if next == 0:
        print(start)
        return
    while next > 4:
        next = next - 4
    test = seasons.index(start)
    print(seasons[test + next])
