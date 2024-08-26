#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  srand(time(0)); // Seed the random number generator

  int playerChoice;
  int computerChoice;
  int playerScore = 0;
  int computerScore = 0;

  std::cout << "Welcome to Rock-Paper-Scissors!\n";

  while (playerScore < 5 && computerScore < 5) {
    std::cout << "1. Rock\n";
    std::cout << "2. Paper\n";
    std::cout << "3. Scissors\n";
    std::cout << "Enter your choice (1-3): ";
    std::cin >> playerChoice;

    // Generate computer's choice
    computerChoice = rand() % 3 + 1;

    std::cout << "Computer chose: " << computerChoice << "\n";

    // Determine the winner
    if (playerChoice == computerChoice) {
      std::cout << "It's a tie!\n";
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
      std::cout << "You win!\n";
      playerScore++;
    } else {
      std::cout << "Computer wins!\n";
      computerScore++;
    }

    std::cout << "Player score: " << playerScore << "\n";
    std::cout << "Computer score: " << computerScore << "\n";
  }

  if (playerScore == 5) {
    std::cout << "Congratulations! You won the game!\n";
  } else {
    std::cout << "Sorry, the computer won the game!\n";
  }

  return 0;
}