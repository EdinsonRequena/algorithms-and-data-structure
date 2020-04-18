game1, game2, game3, game4, game5 = str, str, str, str, str
time1, time2, time3, time4, time5 = float, float, float, float, float
price1, price2, price3, price4, price5 = float, float, float, float, float
total = float

def cli():
    global game1, game2, game3, game4, game5
    global time1, time2, time3, time4, time5
    global price1, price2, price3, price4, price5

    print("**********Think in te last five game that you buy**********")

    game1 = input("What's the game?: ")
    time1 = float(input(f"How many hours did you play {game1}?: "))
    price1 = float(input(f"How many dollars did you spend in the {game1}?: "))

    print("-------------------------------------------------------------------")

    game2 = input("What's the game?: ")
    time2 = float(input(f"How many hours did you play {game2}?: "))
    price2 = float(input(f"How many dollars did you spend in the {game2}?: "))

    print("-------------------------------------------------------------------")

    game3 = input("What's the game?: ")
    time3 = float(input(f"How many hours did you play {game3}?: "))
    price3 = float(input(f"How many dollars did you spend in the {game3}?: "))

    print("-------------------------------------------------------------------")

    game4 = input("What's the game?: ")
    time4 = float(input(f"How many hours did you play {game4}?: "))
    price4 = int(input(f"How many dollars did you spend in the {game4}?: "))

    print("-------------------------------------------------------------------")

    game5 = input("What's the game?: ")
    time5 = float(input(f"How many hours did you play {game5}?: "))
    price5 = float(input(f"How many dollars did you spend in the {game5}?: "))

    print("-------------------------------------------------------------------")


def main():
    cli()
    logic()

if __name__ == '__main__':
    main()