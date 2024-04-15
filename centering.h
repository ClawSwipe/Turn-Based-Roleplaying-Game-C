void gotoxy(short x, short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
Center(char *text){
	int x=35,y=12;
	gotoxy(x,y);
	puts(text);
}
