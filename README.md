# Hangman Game
This is a classic Hangman game implemented in C. The program allows the user to guess a hidden word by entering individual letters. The game has a maximum of six incorrect guesses before the player loses.

## Features
1.Dynamic Word Fetching:
- The game fetches the secret word from a file named Hangword.txt.
- This makes it easy to update the word without modifying the code.

2.Interactive Gameplay:
- Displays progress after each guess.
- Provides visual feedback using a hangman graphic.
- Indicates correct and incorrect guesses.

3.Game Mechanics:
- Six chances to guess the correct word.
- User wins by completing the word before running out of attempts.

4.Visual Feedback:
- Shows the hangman gradually as incorrect guesses are made.

## Gameplay Instructions
1.Start the Game:
- On launch, the game will display a welcome message.
- It will also fetch a hidden word from Hangword.txt.

2.Guess the Word:
- Enter a single lowercase letter as your guess.
- If the letter exists in the word, it will reveal its position(s).
- Incorrect guesses will reduce your chances and display the hangman graphic.

3.Winning:
- If you guess all the letters correctly, you win!
- The program will display a congratulatory message.

4.Losing:
- If you fail to guess the word within six tries, the hangman is completed.
- The program reveals the correct word and displays a "Game Over" message.
