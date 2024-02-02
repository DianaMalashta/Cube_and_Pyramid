void mx_printchar(char c);

void space(int s){
	for(int j = 0; j < s; j++){
		mx_printchar(' ');
	}
}

void mx_cube(int n){
    if (n <= 1) {
        return;
    }
    int Y = n, X = Y * 2, Z = Y / 2, h = Y, temp = 1;
    space(Z+1);
    mx_printchar('+');
    for (int i = 0; i < X; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

    for (int i = 0; i < Z; i++) {
	space(Z-i);
        mx_printchar('/');
	space(X);
        mx_printchar('/');
	space(i);
        mx_printchar('|');
	h--;
	mx_printchar('\n');
    }
    mx_printchar('+');
    for (int i = 0; i < X; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    space(Z);
    mx_printchar('|');
    h--;
    mx_printchar('\n');
    for(int i = 0; i < Y; i++){
	mx_printchar('|');
	space(X);
	mx_printchar('|');
	if(h>0){
	    space(Z);
	    mx_printchar('|');
	    h--;
	}
	else if(h == 0){
	    space(Z);
	    mx_printchar('+');
	    h--;
	}
	else{
	    space(Z-temp);
	    temp++;
	    mx_printchar('/');
	}
	mx_printchar('\n');
    }
    mx_printchar('+');
    for (int i = 0; i < X; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');
}


