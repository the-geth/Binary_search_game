#making this so I wont have to type the command with -lm flag every time
#-lm is gcc's flag for math.h
Binary_Search_Game: Binary_Search_Game.c
	gcc -o Binary_Search_Game Binary_Search_Game.c -lm
