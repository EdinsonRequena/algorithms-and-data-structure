
def main():
    total = None
    serie = input("What's your favorite serie?: ")
    seasons = int(input("How much seasons have?: "))
    number_chap = int(input("How much chapter have?: "))
    duration_chap = int(input("How much hour the chapter have?: "))

    total = seasons * number_chap * duration_chap / 60

    print(f'You has been {total} hours look {serie}')


if __name__ == '__main__':
    main()