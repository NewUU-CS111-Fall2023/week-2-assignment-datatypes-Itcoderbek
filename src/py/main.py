# * Author:Diyorbek Adxamov
# * Date:10.202023
def check_word(sentence, word):
    words = sentence.split()
    for i, w in enumerate(words):
        if word.lower() in w.lower():
            return i
    return "no match"

def spawn_enemies(coordinates):
    enemy_spawned = False
    for coord in coordinates:
        if coord == "spawn":
            enemy_spawned = True
        elif coord == "character_died" and enemy_spawned:
            return True
        elif coord == "character_died" and not enemy_spawned:
            return False
    return False

# Task 1: Check word in a sentence
sentence = input("Enter a sentence: ")
word = input("Enter a word to search: ")
result = check_word(sentence, word)
print(result)

# Task 2: Spawn enemies based on coordinates
N = int(input("Enter the number of coordinates: "))
coordinates = []
for _ in range(N):
    coord = input("Enter coordinate: ")
    coordinates.append(coord)

character_died = spawn_enemies(coordinates)
if character_died:
    print("Character died!")
else:
    print("Character survived!")

