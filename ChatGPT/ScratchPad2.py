import pygame
import sys
import random

# Initialize pygame
pygame.init()

# Set up the display
WIDTH, HEIGHT = 540, 600
WINDOW_SIZE = (WIDTH, HEIGHT)
SCREEN = pygame.display.set_mode(WINDOW_SIZE)
pygame.display.set_caption("Sudoku")

# Colors
WHITE = (255, 255, 255)
BLACK = (0, 0, 0)
GRAY = (200, 200, 200)
BLUE = (0, 0, 255)

# Initialize the Sudoku board (0 represents an empty cell)
board = [[0 for _ in range(9)] for _ in range(9)]

# Keep track of selected tile position
selected_tile = (-1, -1)

# Font
font = pygame.font.Font(None, 50)

# Cell dimensions
CELL_SIZE = WIDTH // 9

def generate_random_puzzle():
    for row in range(9):
        for col in range(9):
            if random.random() < 0.5:  # Probability of filling a cell
                num = random.randint(1, 9)
                if is_valid_move(board, row, col, num):
                    board[row][col] = num

def print_board(board):
    for i in range(9):
        for j in range(9):
            if board[i][j] != 0:
                text = font.render(str(board[i][j]), True, BLACK)
                text_rect = text.get_rect(center=((j + 0.5) * CELL_SIZE, (i + 0.5) * CELL_SIZE))
                SCREEN.blit(text, text_rect)

def is_valid_move(board, row, col, num):
    # Check row
    if num in board[row]:
        return False

    # Check column
    if num in [board[i][col] for i in range(9)]:
        return False

    # Check 3x3 box
    start_row, start_col = 3 * (row // 3), 3 * (col // 3)
    for i in range(start_row, start_row + 3):
        for j in range(start_col, start_col + 3):
            if board[i][j] == num:
                return False

    return True

def find_empty_cell(board):
    for i in range(9):
        for j in range(9):
            if board[i][j] == 0:
                return i, j
    return None, None

def solve_sudoku(board):
    row, col = find_empty_cell(board)
    if row is None:
        return True  # All cells are filled, puzzle solved
    for num in range(1, 10):
        if is_valid_move(board, row, col, num):
            board[row][col] = num
            if solve_sudoku(board):
                return True
            board[row][col] = 0  # Backtrack
    return False

# Generate a random puzzle
generate_random_puzzle()

# Main loop
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if selected_tile != (-1, -1):
                if event.key == pygame.K_1:
                    board[selected_tile[0]][selected_tile[1]] = 1
                elif event.key == pygame.K_2:
                    board[selected_tile[0]][selected_tile[1]] = 2
                elif event.key == pygame.K_3:
                    board[selected_tile[0]][selected_tile[1]] = 3
                elif event.key == pygame.K_4:
                    board[selected_tile[0]][selected_tile[1]] = 4
                elif event.key == pygame.K_5:
                    board[selected_tile[0]][selected_tile[1]] = 5
                elif event.key == pygame.K_6:
                    board[selected_tile[0]][selected_tile[1]] = 6
                elif event.key == pygame.K_7:
                    board[selected_tile[0]][selected_tile[1]] = 7
                elif event.key == pygame.K_8:
                    board[selected_tile[0]][selected_tile[1]] = 8
                elif event.key == pygame.K_9:
                    board[selected_tile[0]][selected_tile[1]] = 9
        elif event.type == pygame.MOUSEBUTTONDOWN:
            x, y = pygame.mouse.get_pos()
            row = y // CELL_SIZE
            col = x // CELL_SIZE
            if row < 9 and col < 9:
                if board[row][col] == 0:
                    selected_tile = (row, col)
                else:
                    selected_tile = (-1, -1)

    # Clear the screen
    SCREEN.fill(WHITE)

    # Draw the Sudoku grid
    for i in range(10):
        if i % 3 == 0:
            pygame.draw.line(SCREEN, BLACK, (0, i * CELL_SIZE), (WIDTH, i * CELL_SIZE), 3)
            pygame.draw.line(SCREEN, BLACK, (i * CELL_SIZE, 0), (i * CELL_SIZE, HEIGHT), 3)
        else:
            pygame.draw.line(SCREEN, BLACK, (0, i * CELL_SIZE), (WIDTH, i * CELL_SIZE))
            pygame.draw.line(SCREEN, BLACK, (i * CELL_SIZE, 0), (i * CELL_SIZE, HEIGHT))

    # Show outline when a tile is selected
    if selected_tile != (-1, -1):
        selected_rect = pygame.Rect(selected_tile[1] * CELL_SIZE, selected_tile[0] * CELL_SIZE, CELL_SIZE, CELL_SIZE)
        pygame.draw.rect(SCREEN, BLUE, selected_rect, 3)

    # Print the puzzle numbers on the board
    print_board(board)

    # Draw the Solve button
    solve_button = pygame.Rect((WIDTH - 100) // 2, 550, 100, 40)
    pygame.draw.rect(SCREEN, GRAY, solve_button, border_radius=5)
    pygame.draw.rect(SCREEN, BLACK, solve_button, width=2, border_radius=5)
    solve_text = font.render("Solve", True, BLACK)
    solve_text_rect = solve_text.get_rect(center=solve_button.center)
    SCREEN.blit(solve_text, solve_text_rect)

    pygame.display.flip()

    # Check if Solve button is clicked
    if event.type == pygame.MOUSEBUTTONDOWN:
        if solve_button.collidepoint(pygame.mouse.get_pos()):
            # Clear user input
            board = [[0 for _ in range(9)] for _ in range(9)]
            selected_tile = (-1, -1)
            # Solve the puzzle
            solve_sudoku(board)

# Display the solved puzzle for a few seconds before quitting
pygame.time.wait(3000)

# Clean up and quit
pygame.quit()
sys.exit()