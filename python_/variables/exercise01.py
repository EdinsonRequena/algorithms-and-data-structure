total, serie, seasons, number_chap, duration_chap = int, '', int, int, int

def cli():
    global total, serie, seasons, number_chap, duration_chap

    serie = input("What's your favorite serie?: ")
    seasons = int(input("How much seasons have?: "))
    number_chap = int(input("How much chapter have?: "))
    duration_chap = int(input("How much minuts the chapter have?: "))   


def logic():
    global total, serie, seasons, number_chap, duration_chap

    total = seasons * number_chap * duration_chap / 60

    print(f'You has been {total} hours look {serie}')


def main():
    cli()
    logic()

if __name__ == '__main__':
    main()