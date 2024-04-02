import random as rng

print("------------------------------")
print("    ROCK, PAPER, SCISSORS     ")
print("------------------------------")
options = ("Rock", "Paper", "Scissors")
players_choice = None
score = ai_score = count = 0
flag = temp = True
angry = 0

while True:
    computers_choice = rng.choice(options)
    players_choice = input("Choose: ").capitalize()
    if players_choice == "" or players_choice == "Exit" or players_choice == "Quit":
        print("Games played: " + str(count))
        if score > ai_score:
            print("PLAYER WINS!! (❁´◡`❁)")
        elif ai_score > score:
            print("COMPUTER WINS!! .·´¯`(>▂<)´¯`·. ")
        else:
            print("DRAW!! (￣o￣) . z Z")
        break
    elif players_choice.upper() == "WIN101" and flag is True:
        print("You WIN!")
        flag = False
        score += 1
        angry = 0
    elif players_choice not in options:
        if players_choice.upper() == "WIN101":
            print("    Cheat code can only be used once.")
            angry = 0
        elif angry == 0:
            print("    Use  🪨, 📃 or ✂️")
            angry += 1
        elif angry == 1:
            print("    Rock, Paper or Scissors ￣へ￣")
            angry += 1
        elif 2 <= angry < 3:
            print("    Either Rock or Paper or Scissors ╰（‵□′）╯")
            angry += 1
        elif 3 <= angry < 4:
            print("    Do you not get it ? (~￣_￣)~")
            angry += 1
        elif 4 <= angry < 5:
            print("    You are hopeless! (* ￣︿￣)")
            angry += 1
        elif 5 <= angry < 6:
            print("    I give up. o(一︿一+)o")
            angry += 2
        elif 7 <= angry < 8:
            print("    Not really! (¬‿¬)")
            angry += 2
        elif 9 <= angry < 10:
            print("    Ok, but seriously. (˘･_･˘)")
            angry += 2
        elif 11 <= angry < 12:
            print("    Dude! C'mon ...(*￣０￣)ノ")
            angry += 2
        elif 13 <= angry < 14:
            print("    Just type 'rock' Plzz! ಥ_ಥ")
            angry += 2
        elif 15 <= angry < 16:
            print("    Don't trigger my inner TERROR ╚(•⌂•)╝")
            angry += 2
        elif angry > 16:
            print("    You have forced me to do this! (╬▔皿▔)╯")
            temp = False
            break
        continue
    elif players_choice == computers_choice:
        print("It's a tie!")
        angry = 0
    elif players_choice == "Rock" and computers_choice == "Paper":
        print("Computer Wins!")
        ai_score += 1
        angry = 0
    elif players_choice == "Paper" and computers_choice == "Scissors":
        print("Computer Wins!")
        ai_score += 1
        angry = 0
    elif players_choice == "Scissors" and computers_choice == "Rock":
        print("Computer Wins!")
        ai_score += 1
        angry = 0
    else:
        print("You WIN!")
        score += 1
        angry = 0

    count += 1

    print()

    if players_choice in options:
        print(f"Computer: {computers_choice}")
        print(f"Player  : {players_choice}")
    else:
        print(f"Computer: lost ⊙﹏⊙∥")
        print(f"Player  : used cheats")
    print(f"Computer: {ai_score}")
    print(f"Player  : {score}")
    print()

if temp is False:
    print("    Yeah, you don't get to play! (►__◄)")
